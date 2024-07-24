#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPoint>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QPainter>

#include "weathertool2.h"

const int Increment = 3;  //增量
const int DotSize = 3;
const int TextOffsetX = 12;
const int TextOffsetY = 12;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint); //隐藏边框
    ui->lineEditCity->setPlaceholderText("输入城市名, 例如: 北京");
    //右键, 退出程序
    mExitMenu = new QMenu(this);
    mExitAct = new QAction();

    mExitAct->setText(tr("退出"));
    mExitAct->setIcon(QIcon(":/res/close.png"));
    mExitMenu->addAction(mExitAct);

    //UI初始化
    this->initUI();

    this->initMap();

    connect(mExitAct, &QAction::triggered, this, [=]() {
        qApp->exit(0);  //qApp为全局指针
    });

    mAccessManager = new QNetworkAccessManager(this);
    connect(mAccessManager, &QNetworkAccessManager::finished, this, &MainWindow::onReplied);

    //直接在构造函数中, 请求天气数据;
    //101010100为北京;
    //http://t.weather.itboy.net/api/weather/city/101010100
    // this->getWeatherInfo("101010100");
    this->getWeatherInfo("北京");

    //安装事件过滤器
    ui->lblHighCurve->installEventFilter(this);
    ui->lblLowCurve->installEventFilter(this);

}


MainWindow::~MainWindow()
{
    delete ui;
}

// 重写父类的虚函数
// 父类中默认的实现 是忽略右键菜单事件
// 重写之后,就可以处理右键菜单
void MainWindow::contextMenuEvent(QContextMenuEvent *ev)
{
    mExitMenu->exec(QCursor::pos());

    //调用accept 表示,这个事件我己经处理,不需要向上传递了
    ev->accept();

}

void MainWindow::mouseMoveEvent(QMouseEvent *ev)
{
    this->move(ev->globalPos() - mOffset );
}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{
    this->mOffset = ev->globalPos() - this->pos();
}

void MainWindow::getWeatherInfo(QString city)
{
    QString cityCode = WeatherTool2::getCityCode(city);
    if (cityCode == "") {
        QMessageBox::warning(this, "城市", "城市输入错误或未查到该城市的天气", QMessageBox::Ok);
        //qDebug() << "mainwindow: cityCode 为空：" << cityCode;
        return;
    }
    QUrl url("http://t.weather.itboy.net/api/weather/city/" + cityCode);
    mAccessManager->get(QNetworkRequest(url));
}

void MainWindow::parseJson(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray, &err);
    if (err.error != QJsonParseError::NoError) {
        qDebug() << "QJsonDocument 解析失败";
        return;
    }
    QJsonObject rootObj = doc.object();
    QJsonObject dataObj = rootObj.value("data").toObject();
    //qDebug() << rootObj.value("message").toString();

    //1. 解析日期和城市
    today.date = rootObj.value("date").toString();
    // QJsonObject cityInfo = rootObj.value("cityInfo").toObject();
    // today.city = cityInfo.value("city").toString();
    today.city = rootObj.value("cityInfo").toObject().value("city").toString(); //以上和为1步

    //2. 解析yestoday mDay[0];

    QJsonObject yesterObj = dataObj.value("yesterday").toObject();

    mDay[0].date = yesterObj.value("ymd").toString();
    mDay[0].week = yesterObj.value("week").toString();
    mDay[0].type = yesterObj.value("type").toString();
    //high
    QString highStr = yesterObj.value("high").toString(); //"高温 40℃"

    highStr = highStr.split(" ").at(1); //40℃
    highStr = highStr.left(highStr.length()-1);  //40
    mDay[0].high = highStr.toInt();

    //low
    QString lowStr = yesterObj.value("low").toString().split(" ").at(1);

    mDay[0].low = lowStr.left(lowStr.length()-1).toInt();

    mDay[0].fx = yesterObj.value("fx").toString();
    mDay[0].fl = yesterObj.value("fl").toString();
    mDay[0].aqi = yesterObj.value("aqi").toDouble();

    //mDay[0].pritntData();

    //3. 解析后5天的数据
    QJsonArray forecastArr = dataObj.value("forecast").toArray();

    //Day mDay[7]; //昨天, 今天, 明天, 后天, ...
    for (int i = 1; i < 6; i++) {  //mDay[0]是昨天的数据; 包括今天, 共6天数据;
        QJsonObject foreObj = forecastArr[i-1].toObject();

        mDay[i].date = foreObj.value("ymd").toString();
        mDay[i].week = foreObj.value("week").toString();
        mDay[i].type = foreObj.value("type").toString();
        //high
        QString highStr = foreObj.value("high").toString(); //"高温 4i℃"

        highStr = highStr.split(" ").at(1); //4i℃
        highStr = highStr.left(highStr.length()-1);  //4i
        mDay[i].high = highStr.toInt();

        //low
        QString lowStr = foreObj.value("low").toString().split(" ").at(1);

        mDay[i].low = lowStr.left(lowStr.length()-1).toInt();

        mDay[i].fx = foreObj.value("fx").toString();
        mDay[i].fl = foreObj.value("fl").toString();
        mDay[i].aqi = foreObj.value("aqi").toDouble();

        //qDebug() << i;

        //mDay[i].pritntData();
    }

    //4. 解析今天的数据

    today.ganmao = dataObj.value("ganmao").toString();
    today.wendu = dataObj.value("wendu").toString().toDouble();
    //qDebug() << "today 温度: " << dataObj.value("wendu").toString().toDouble();

    today.shidu = dataObj.value("shidu").toString();
    today.pm25 = dataObj.value("pm25").toDouble();
    today.quality = dataObj.value("quality").toString();

    today.type = mDay[1].type;
    today.fl = mDay[1].fl;
    today.fx = mDay[1].fx;
    today.high= mDay[1].high;
    today.low = mDay[1].low;

    //today.pritntData();

    //this->printDay();

    //5. 更新UI
    updateUI();

    //6. 手动更新高低温标签
    ui->lblHighCurve->update();
    ui->lblLowCurve->update();
}

void MainWindow::initUI()
{
    QPixmap pix =  QPixmap(":/res/aqi.png");
    pix = pix.scaled(60, 60);
    ui->aqiIconToday->setPixmap(pix);

    pix =  QPixmap(":/res/wind.png");
    pix = pix.scaled(60, 60);
    ui->lblwindIconToday->setPixmap(QPixmap(pix));

    pix =  QPixmap(":/res/pm25.png");
    pix = pix.scaled(60, 60);
    ui->lblPM25Icon->setPixmap(QPixmap(pix));

    pix =  QPixmap(":/res/humidity.png");
    pix = pix.scaled(60, 60);
    ui->lblHumidityIcon->setPixmap(QPixmap(pix));

    mDateList << ui->lbDate0 << ui->lbDate1 << ui->lbDate2
              << ui->lbDate3 << ui->lbDate4 << ui->lbDate5;

    mWeekList << ui->lblWeek0 << ui->lblWeek1 << ui->lblWeek2
              <<ui->lblWeek3 << ui->lblWeek4 << ui->lblWeek5;

    //天气和天气图标
    mTypeList << ui->lblType0 << ui->lblType1 << ui->lblType2
              << ui->lblType3 << ui->lblType4 << ui->lblType5;

    mTypeIconList << ui->lblTypeIcon0 << ui->lblTypeIcon1 << ui->lblTypeIcon2
                  << ui->lblTypeIcon3 << ui->lblTypeIcon4 << ui->lblTypeIcon5;

    //天气指数 lblQuality0
    mAqiList << ui->lblQuality0 << ui->lblQuality1 << ui->lblQuality2
             << ui->lblQuality3 << ui->lblQuality4 << ui->lblQuality5;

    //风向和风力 lblFx0
    mFxList << ui->lblFx0 << ui->lblFx1 << ui->lblFx2
            << ui->lblFx3 << ui->lblFx4 << ui->lblFx5;

    mFlList << ui->lblFl0 << ui->lblFl1 << ui->lblFl2
            << ui->lblFl3 << ui->lblFl4 << ui->lblFl5;
}

void MainWindow::updateUI()
{
    //Day mDay[6]; //昨天, 今天, 明天, 后天, ...
    //1. 更新日期和城市
    QString date = QDateTime::fromString(today.date, "yyyyMMdd").toString("yyyy/MM/dd");
    ui->dateLabel->setText(date + " " + mDay[1].week);
    ui->addressLabel->setText(today.city);

    //2.更新今天
    ui->lblTypeIcon->setPixmap(QPixmap(mTypeMap[today.type]));
    qDebug() << "今天的温度: today.wendu = " << today.wendu;
    ui->lblTemperature->setText(QString::number(today.wendu) + "℃");
    ui->lblTypeToday->setText(today.type);
    ui->lblHighLow->setText(QString::number(today.low) +"~"+ QString::number(today.high) +"℃");

    ui->coldIndexLabel->setText("感冒指数: " + today.ganmao);
    ui->lblFxToday->setText(today.fx);
    ui->lblFlToday->setText(today.fl);

    ui->lblPM25->setText(QString::number(today.pm25));

    ui->lblHumidity->setText(today.shidu);
    ui->lblAqiToday->setText(today.quality);

    //2.更新6天
    //this->printDay();
    for (int i = 0; i < 6; i++) {
        //日期
        mWeekList[i]->setText("周" + mDay[i].week.right(1));
        QStringList dateList = mDay[i].date.split("-");
        mDateList[i]->setText(dateList[1] + "/" + dateList[2]);

        mTypeList[i]->setText(mDay[i].type);  //天气
        mTypeIconList[i]->setPixmap(QPixmap(mTypeMap[mDay[i].type]));  //天气

        //空气质量
        if(mDay[i].aqi >=0 && mDay[i].aqi <= 50){
            mAqiList[i]->setText("优");
            mAqiList[i]->setStyleSheet("background-color:rgb(121,184,0);");
        } else if(mDay[i].aqi > 50 && mDay[i].aqi <= 100){
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color:rgb(255,187,23);");
        } else if(mDay[i].aqi > 100 && mDay[i].aqi <=150) {
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color:rgb(255,87,97);");
        } else if(mDay[i].aqi > 150 && mDay[i].aqi <= 200) {
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color:rgb(235,17,27);");
        } else if(mDay[i].aqi > 200 && mDay[i].aqi <= 250) {
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color:rgb(170,0,0);");
        } else {
            mAqiList[i]->setText("严重");
            mAqiList[i]->setStyleSheet("background-color:rgb(110,0,0);");
        }

        //更新风力和风向
        mFxList[i]->setText(mDay[i].fx);
        mFlList[i]->setText(mDay[i].fl);
    }
    ui->lblWeek0->setText("昨天");
    ui->lblWeek1->setText("今天");
    ui->lblWeek2->setText("明天");

}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->lblHighCurve && event->type() == QEvent::Paint) {
        this->printCurve(ui->lblHighCurve, QString("high"), QColor(255, 170, 0));
    }
    else if (watched == ui->lblLowCurve && event->type() == QEvent::Paint) {
        this->printCurve(ui->lblLowCurve, QString("low"), QColor(0, 255, 255));
    }

    return QWidget::eventFilter(watched, event);
}


//ui->lblHighCurve, mDay[i].high, color
void MainWindow::printCurve(QPaintDevice* painterDev,  const QString& str, const QColor& color)
{
    // QString str = "high";
    // qDebug() << mDay[0].getHighLow(str);
    QPainter painter(painterDev);
    //mDay[0].
    //QPainter painter2(QPaintDevice* dev);

    painter.setRenderHint(QPainter::Antialiasing, true);

    //1. 获取X的左标
    int poxX[6] = {0};
    for (int i = 0; i < 6; i++) {
        poxX[i] = mAqiList[i]->pos().x() + mAqiList[i]->width() / 2;
    }

    //2. 获取Y的坐标
    int poxY[6] = {0};
    int sumTemp = 0;
    int avgTemp = 0;
    for (int i = 0; i < 6; i++) {
        sumTemp += mDay[i].getHighLow(str);
    }
    avgTemp = sumTemp / 6;

    int centerLine = painterDev->height() / 2;

    for (int i = 0; i < 6; i++) {
        poxY[i] = centerLine - (mDay[i].getHighLow(str) - avgTemp) * Increment;  //0坐标在左上角
    }

    //3. 开始绘制
    //3.1 初始化画笔相关
    QPen pen = painter.pen();


    pen.setWidth(1);
    pen.setColor(color);

    //pen.setColor(const QColor& color;

    painter.setPen(pen);
    painter.setBrush(color);

    //3.2 画点, 写文本
    for (int i = 0; i < 6; i++) {
        painter.drawEllipse(poxX[i], poxY[i], DotSize, DotSize);

        painter.drawText(poxX[i] - TextOffsetX, poxY[i] - TextOffsetY, QString::number(mDay[i].getHighLow(str)) + "℃");
    }

    //3.3 绘制曲线
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        } else {
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(poxX[i], poxY[i], poxX[i+1], poxY[i+1]);
    }
}

void MainWindow::printLowCurve()
{

}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
    //qDebug() << "键盘按下了---------------------------";
    if (event->key() == Qt::Key_Return ||
        event->key() == Qt::Key_Enter) {
        //qDebug() << "--------------------按下了回车";
        this->on_searchBtn_clicked();
    }
}




void MainWindow::printDay()
{
    qDebug() << "打印mDay数组: ====================";
    for (int i = 0; i < 7; i++) {
        mDay[i].pritntData();
    }
    qDebug() << "打印mDay数组: ====================";

}

void MainWindow::initMap()
{
    //:/res/type/BaoXue.png
    mTypeMap.insert("暴雪", ":/res/type/BaoXue.png");
    mTypeMap.insert("暴雨", ":/res/type/BaoYu.png");
    mTypeMap.insert("暴雨到大暴雨", ":/res/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨", ":/res/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨", ":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雪", ":/res/type/DaDaoBaoXue.png");
    mTypeMap.insert("大雪",":/res/type/DaXue.png");
    mTypeMap.insert("大雨",":/res/type/DaYu.png");
    mTypeMap.insert("冻雨",":/res/type/DongYu.png");
    mTypeMap.insert("多云",":/res/type/DuoYun.png");
    mTypeMap.insert("浮沉",":/res/type/Fuchen.png");
    mTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾",":/res/type/Mai.png");
    mTypeMap.insert("强沙尘暴",":/res/type/QiangShaChenBao.png");
    mTypeMap.insert("晴",":/res/type/Qing.png");
    mTypeMap.insert("沙尘暴",":/res/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    mTypeMap.insert("undefined","/res/type/undefined.png");
    mTypeMap.insert("雾",":/res/type/wu.png");
    mTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨",":/res/type/XiaoDaozhongYu.png");
    mTypeMap.insert("小雪",":res/type/xiaoxue png");
    mTypeMap.insert("小雨", ":/res/type/XiaoYu.png");
    mTypeMap.insert("雪",":/res/type/Xue.png");
    mTypeMap.insert("扬沙",":/res/type/YangSha.png");
    mTypeMap.insert("阴",":/res/type/Yin.png");
    mTypeMap.insert("雨",":/res/type/Yu.png");
    mTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    mTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    mTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    mTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    mTypeMap.insert("中雨",":/res/type/ZhongYu.png");

}

void MainWindow::onReplied(QNetworkReply *reply)
{
    // qDebug() << "请求成功";
    int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    // qDebug() << "operation: " << reply->operation(); //请求的方法, 本次输出为2, 带表get请求的宏
    // qDebug() << "status code: " << statusCode;
    // qDebug() << "url: " << reply->url();
    // qDebug() << "raw header: " << reply->rawHeaderList();  //响音头

    if (reply->error() != QNetworkReply::NoError || statusCode != 200) {
        qDebug() << " error: " << reply->errorString().toLatin1().data();
        QMessageBox::warning(this, "天气", "天气获取失败", QMessageBox::Ok);
    } else {
        QByteArray all = reply->readAll();
        // qDebug() << "请求的数据: \n--------\n" << all.data();
        parseJson(all);
    }

    reply->deleteLater();
}

void MainWindow::on_searchBtn_clicked()
{
    QString city = ui->lineEditCity->text();
    //qDebug() << "QPushButton 按下, city = " << city;
    this->getWeatherInfo(city);
}

