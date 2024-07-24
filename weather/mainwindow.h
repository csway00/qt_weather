#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QContextMenuEvent>
#include <QMenu>
#include <QAction>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMessageBox>

#include "weatherday.h"
// #include "weathertool.h"
// #include "weathertool2.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
    void contextMenuEvent(QContextMenuEvent* ev);

    void mouseMoveEvent(QMouseEvent* ev);
    void mousePressEvent(QMouseEvent* ev);

    void getWeatherInfo(QString city);

    void parseJson(QByteArray& byteArray);

    void initUI();
    void updateUI();

    //重写父类的方法;
    bool eventFilter(QObject *watched, QEvent *event);

    //绘制高低温曲线的方法;
    void printCurve(QPaintDevice* dev, const QString& str, const QColor& color);
    void printLowCurve();

    //重写回车键
     void keyPressEvent(QKeyEvent *event);


private:
    QMenu *mExitMenu;
    QAction* mExitAct;

    QPoint mOffset;

    QNetworkAccessManager* mAccessManager;

    Today today;
    Day mDay[6]; //昨天, 今天, 明天, 后天, ... (共6天)
    void printDay();

    //星期和日期
    QList<QLabel*> mWeekList;
    QList<QLabel*> mDateList;

    //天气和天气图标
    QList<QLabel*> mTypeList;
    QList<QLabel*> mTypeIconList;

    //天气污染指数
    QList<QLabel*> mAqiList;

    //风力和风向
    QList<QLabel*> mFxList;
    QList<QLabel*> mFlList;

    QMap<QString, QString> mTypeMap; //mTypeMap
    void initMap();


private slots:
    void onReplied(QNetworkReply* raply);

    void on_searchBtn_clicked();
};
#endif // MAINWINDOW_H
