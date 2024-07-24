/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditCity;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchBtn;
    QLabel *dateLabel;
    QWidget *widget_2;
    QLabel *lblTypeIcon;
    QWidget *widget_7;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTypeToday;
    QLabel *lblHighLow;
    QWidget *widget_9;
    QLabel *lblTemperature;
    QLabel *addressLabel;
    QWidget *widget_3;
    QLabel *coldIndexLabel;
    QWidget *widget_10;
    QGridLayout *gridLayout;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblwindIconToday;
    QWidget *widget_32;
    QVBoxLayout *verticalLayout;
    QLabel *lblFxToday;
    QLabel *lblFlToday;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblPM25Icon;
    QWidget *widget_39;
    QVBoxLayout *verticalLayout_27;
    QLabel *windIcon_6;
    QLabel *lblPM25;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblHumidityIcon;
    QWidget *widget_46;
    QVBoxLayout *verticalLayout_28;
    QLabel *windIcon_9;
    QLabel *lblHumidity;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *aqiIconToday;
    QWidget *widget_47;
    QVBoxLayout *verticalLayout_29;
    QLabel *windIcon_12;
    QLabel *lblAqiToday;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QWidget *widget_19;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblHighCurve;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lblLowCurve;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_26;
    QVBoxLayout *verticalLayout_9;
    QLabel *lblFx0;
    QLabel *lblFl0;
    QWidget *widget_27;
    QVBoxLayout *verticalLayout_10;
    QLabel *lblFx1;
    QLabel *lblFl1;
    QWidget *widget_28;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblFx2;
    QLabel *lblFl2;
    QWidget *widget_29;
    QVBoxLayout *verticalLayout_12;
    QLabel *lblFx3;
    QLabel *lblFl3;
    QWidget *widget_30;
    QVBoxLayout *verticalLayout_13;
    QLabel *lblFx4;
    QLabel *lblFl4;
    QWidget *widget_31;
    QVBoxLayout *verticalLayout_14;
    QLabel *lblFx5;
    QLabel *lblFl5;
    QWidget *widget_16;
    QWidget *widget_15;
    QLabel *lbDate5;
    QLabel *lblWeek3;
    QLabel *lblWeek5;
    QLabel *lbDate0;
    QLabel *lblWeek2;
    QLabel *lbDate1;
    QLabel *lblWeek1;
    QLabel *lbDate3;
    QLabel *lblWeek4;
    QLabel *lbDate4;
    QLabel *lblWeek0;
    QLabel *lbDate2;
    QWidget *widget_17;
    QGridLayout *gridLayout_4;
    QLabel *lblQuality5;
    QLabel *lblQuality4;
    QLabel *lblQuality3;
    QLabel *lblQuality2;
    QLabel *lblQuality1;
    QLabel *lblQuality0;
    QWidget *widget_20;
    QWidget *widget_21;
    QLabel *lblTypeIcon0;
    QLabel *lblTypeIcon1;
    QLabel *lblTypeIcon2;
    QLabel *lblTypeIcon3;
    QLabel *lblTypeIcon4;
    QLabel *lblTypeIcon5;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblType0;
    QLabel *lblType1;
    QLabel *lblType2;
    QLabel *lblType3;
    QLabel *lblType4;
    QLabel *lblType5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1040, 580);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1040, 585));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image:url(:/res/background.png);\n"
"}\n"
"\n"
"QLabel {\n"
"	front: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 4px;\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(10, 0, 931, 51));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEditCity = new QLineEdit(widget_6);
        lineEditCity->setObjectName(QString::fromUtf8("lineEditCity"));

        gridLayout_3->addWidget(lineEditCity, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(380, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        searchBtn = new QPushButton(widget_6);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBtn->setIcon(icon);

        gridLayout_3->addWidget(searchBtn, 0, 1, 1, 1);

        dateLabel = new QLabel(widget_6);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        gridLayout_3->addWidget(dateLabel, 0, 3, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 60, 421, 121));
        lblTypeIcon = new QLabel(widget_2);
        lblTypeIcon->setObjectName(QString::fromUtf8("lblTypeIcon"));
        lblTypeIcon->setGeometry(QRect(20, 20, 81, 81));
        lblTypeIcon->setAlignment(Qt::AlignCenter);
        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(110, 19, 311, 111));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(10, 60, 231, 45));
        horizontalLayout_2 = new QHBoxLayout(widget_8);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblTypeToday = new QLabel(widget_8);
        lblTypeToday->setObjectName(QString::fromUtf8("lblTypeToday"));

        horizontalLayout_2->addWidget(lblTypeToday);

        lblHighLow = new QLabel(widget_8);
        lblHighLow->setObjectName(QString::fromUtf8("lblHighLow"));

        horizontalLayout_2->addWidget(lblHighLow);

        widget_9 = new QWidget(widget_2);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(120, 3, 291, 81));
        lblTemperature = new QLabel(widget_9);
        lblTemperature->setObjectName(QString::fromUtf8("lblTemperature"));
        lblTemperature->setGeometry(QRect(10, 10, 110, 68));
        lblTemperature->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));
        lblTemperature->setAlignment(Qt::AlignCenter);
        addressLabel = new QLabel(widget_9);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));
        addressLabel->setGeometry(QRect(140, 10, 135, 59));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 210, 401, 291));
        coldIndexLabel = new QLabel(widget_3);
        coldIndexLabel->setObjectName(QString::fromUtf8("coldIndexLabel"));
        coldIndexLabel->setGeometry(QRect(11, 11, 371, 41));
        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(11, 59, 401, 231));
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);\n"
"background-color: rgb(255, 170, 255);"));
        gridLayout = new QGridLayout(widget_10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_4 = new QHBoxLayout(widget_11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblwindIconToday = new QLabel(widget_11);
        lblwindIconToday->setObjectName(QString::fromUtf8("lblwindIconToday"));
        lblwindIconToday->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblwindIconToday);

        widget_32 = new QWidget(widget_11);
        widget_32->setObjectName(QString::fromUtf8("widget_32"));
        verticalLayout = new QVBoxLayout(widget_32);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblFxToday = new QLabel(widget_32);
        lblFxToday->setObjectName(QString::fromUtf8("lblFxToday"));

        verticalLayout->addWidget(lblFxToday);

        lblFlToday = new QLabel(widget_32);
        lblFlToday->setObjectName(QString::fromUtf8("lblFlToday"));

        verticalLayout->addWidget(lblFlToday);


        horizontalLayout_4->addWidget(widget_32);

        widget_32->raise();
        lblwindIconToday->raise();

        gridLayout->addWidget(widget_11, 0, 0, 1, 1);

        widget_12 = new QWidget(widget_10);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        horizontalLayout_5 = new QHBoxLayout(widget_12);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lblPM25Icon = new QLabel(widget_12);
        lblPM25Icon->setObjectName(QString::fromUtf8("lblPM25Icon"));
        lblPM25Icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblPM25Icon);

        widget_39 = new QWidget(widget_12);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        verticalLayout_27 = new QVBoxLayout(widget_39);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        windIcon_6 = new QLabel(widget_39);
        windIcon_6->setObjectName(QString::fromUtf8("windIcon_6"));

        verticalLayout_27->addWidget(windIcon_6);

        lblPM25 = new QLabel(widget_39);
        lblPM25->setObjectName(QString::fromUtf8("lblPM25"));

        verticalLayout_27->addWidget(lblPM25);


        horizontalLayout_5->addWidget(widget_39);

        widget_39->raise();
        lblPM25Icon->raise();

        gridLayout->addWidget(widget_12, 0, 1, 1, 1);

        widget_13 = new QWidget(widget_10);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        horizontalLayout_6 = new QHBoxLayout(widget_13);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lblHumidityIcon = new QLabel(widget_13);
        lblHumidityIcon->setObjectName(QString::fromUtf8("lblHumidityIcon"));
        lblHumidityIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lblHumidityIcon);

        widget_46 = new QWidget(widget_13);
        widget_46->setObjectName(QString::fromUtf8("widget_46"));
        verticalLayout_28 = new QVBoxLayout(widget_46);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        windIcon_9 = new QLabel(widget_46);
        windIcon_9->setObjectName(QString::fromUtf8("windIcon_9"));

        verticalLayout_28->addWidget(windIcon_9);

        lblHumidity = new QLabel(widget_46);
        lblHumidity->setObjectName(QString::fromUtf8("lblHumidity"));

        verticalLayout_28->addWidget(lblHumidity);


        horizontalLayout_6->addWidget(widget_46);


        gridLayout->addWidget(widget_13, 1, 0, 1, 1);

        widget_14 = new QWidget(widget_10);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        horizontalLayout_7 = new QHBoxLayout(widget_14);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        aqiIconToday = new QLabel(widget_14);
        aqiIconToday->setObjectName(QString::fromUtf8("aqiIconToday"));
        aqiIconToday->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(aqiIconToday);

        widget_47 = new QWidget(widget_14);
        widget_47->setObjectName(QString::fromUtf8("widget_47"));
        verticalLayout_29 = new QVBoxLayout(widget_47);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        windIcon_12 = new QLabel(widget_47);
        windIcon_12->setObjectName(QString::fromUtf8("windIcon_12"));

        verticalLayout_29->addWidget(windIcon_12);

        lblAqiToday = new QLabel(widget_47);
        lblAqiToday->setObjectName(QString::fromUtf8("lblAqiToday"));

        verticalLayout_29->addWidget(lblAqiToday);


        horizontalLayout_7->addWidget(widget_47);


        gridLayout->addWidget(widget_14, 1, 1, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(460, 60, 471, 89));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(440, 240, 541, 351));
        widget_19 = new QWidget(widget_5);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        widget_19->setGeometry(QRect(0, 10, 521, 281));
        widget_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget_19);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_23 = new QWidget(widget_19);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        horizontalLayout_8 = new QHBoxLayout(widget_23);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lblHighCurve = new QLabel(widget_23);
        lblHighCurve->setObjectName(QString::fromUtf8("lblHighCurve"));

        horizontalLayout_8->addWidget(lblHighCurve);


        verticalLayout_3->addWidget(widget_23);

        widget_24 = new QWidget(widget_19);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        horizontalLayout_9 = new QHBoxLayout(widget_24);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lblLowCurve = new QLabel(widget_24);
        lblLowCurve->setObjectName(QString::fromUtf8("lblLowCurve"));

        horizontalLayout_9->addWidget(lblLowCurve);


        verticalLayout_3->addWidget(widget_24);

        widget_18 = new QWidget(widget_5);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setGeometry(QRect(10, 270, 511, 81));
        horizontalLayout = new QHBoxLayout(widget_18);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_26 = new QWidget(widget_18);
        widget_26->setObjectName(QString::fromUtf8("widget_26"));
        verticalLayout_9 = new QVBoxLayout(widget_26);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lblFx0 = new QLabel(widget_26);
        lblFx0->setObjectName(QString::fromUtf8("lblFx0"));

        verticalLayout_9->addWidget(lblFx0);

        lblFl0 = new QLabel(widget_26);
        lblFl0->setObjectName(QString::fromUtf8("lblFl0"));

        verticalLayout_9->addWidget(lblFl0);


        horizontalLayout->addWidget(widget_26);

        widget_27 = new QWidget(widget_18);
        widget_27->setObjectName(QString::fromUtf8("widget_27"));
        verticalLayout_10 = new QVBoxLayout(widget_27);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        lblFx1 = new QLabel(widget_27);
        lblFx1->setObjectName(QString::fromUtf8("lblFx1"));

        verticalLayout_10->addWidget(lblFx1);

        lblFl1 = new QLabel(widget_27);
        lblFl1->setObjectName(QString::fromUtf8("lblFl1"));

        verticalLayout_10->addWidget(lblFl1);


        horizontalLayout->addWidget(widget_27);

        widget_28 = new QWidget(widget_18);
        widget_28->setObjectName(QString::fromUtf8("widget_28"));
        verticalLayout_11 = new QVBoxLayout(widget_28);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        lblFx2 = new QLabel(widget_28);
        lblFx2->setObjectName(QString::fromUtf8("lblFx2"));

        verticalLayout_11->addWidget(lblFx2);

        lblFl2 = new QLabel(widget_28);
        lblFl2->setObjectName(QString::fromUtf8("lblFl2"));

        verticalLayout_11->addWidget(lblFl2);


        horizontalLayout->addWidget(widget_28);

        widget_29 = new QWidget(widget_18);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        verticalLayout_12 = new QVBoxLayout(widget_29);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        lblFx3 = new QLabel(widget_29);
        lblFx3->setObjectName(QString::fromUtf8("lblFx3"));

        verticalLayout_12->addWidget(lblFx3);

        lblFl3 = new QLabel(widget_29);
        lblFl3->setObjectName(QString::fromUtf8("lblFl3"));

        verticalLayout_12->addWidget(lblFl3);


        horizontalLayout->addWidget(widget_29);

        widget_30 = new QWidget(widget_18);
        widget_30->setObjectName(QString::fromUtf8("widget_30"));
        verticalLayout_13 = new QVBoxLayout(widget_30);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        lblFx4 = new QLabel(widget_30);
        lblFx4->setObjectName(QString::fromUtf8("lblFx4"));

        verticalLayout_13->addWidget(lblFx4);

        lblFl4 = new QLabel(widget_30);
        lblFl4->setObjectName(QString::fromUtf8("lblFl4"));

        verticalLayout_13->addWidget(lblFl4);


        horizontalLayout->addWidget(widget_30);

        widget_31 = new QWidget(widget_18);
        widget_31->setObjectName(QString::fromUtf8("widget_31"));
        verticalLayout_14 = new QVBoxLayout(widget_31);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lblFx5 = new QLabel(widget_31);
        lblFx5->setObjectName(QString::fromUtf8("lblFx5"));

        verticalLayout_14->addWidget(lblFx5);

        lblFl5 = new QLabel(widget_31);
        lblFl5->setObjectName(QString::fromUtf8("lblFl5"));

        verticalLayout_14->addWidget(lblFl5);


        horizontalLayout->addWidget(widget_31);

        widget_16 = new QWidget(widget);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setGeometry(QRect(459, 49, 541, 221));
        widget_15 = new QWidget(widget_16);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(8, 0, 471, 61));
        widget_15->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 223, 255);\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        lbDate5 = new QLabel(widget_15);
        lbDate5->setObjectName(QString::fromUtf8("lbDate5"));
        lbDate5->setGeometry(QRect(400, 11, 69, 16));
        lblWeek3 = new QLabel(widget_15);
        lblWeek3->setObjectName(QString::fromUtf8("lblWeek3"));
        lblWeek3->setGeometry(QRect(240, 34, 71, 21));
        lblWeek5 = new QLabel(widget_15);
        lblWeek5->setObjectName(QString::fromUtf8("lblWeek5"));
        lblWeek5->setGeometry(QRect(400, 34, 71, 20));
        lbDate0 = new QLabel(widget_15);
        lbDate0->setObjectName(QString::fromUtf8("lbDate0"));
        lbDate0->setGeometry(QRect(11, 11, 69, 16));
        lblWeek2 = new QLabel(widget_15);
        lblWeek2->setObjectName(QString::fromUtf8("lblWeek2"));
        lblWeek2->setGeometry(QRect(161, 34, 71, 21));
        lbDate1 = new QLabel(widget_15);
        lbDate1->setObjectName(QString::fromUtf8("lbDate1"));
        lbDate1->setGeometry(QRect(87, 11, 69, 16));
        lblWeek1 = new QLabel(widget_15);
        lblWeek1->setObjectName(QString::fromUtf8("lblWeek1"));
        lblWeek1->setGeometry(QRect(85, 34, 71, 20));
        lbDate3 = new QLabel(widget_15);
        lbDate3->setObjectName(QString::fromUtf8("lbDate3"));
        lbDate3->setGeometry(QRect(240, 11, 69, 16));
        lblWeek4 = new QLabel(widget_15);
        lblWeek4->setObjectName(QString::fromUtf8("lblWeek4"));
        lblWeek4->setGeometry(QRect(320, 34, 71, 20));
        lbDate4 = new QLabel(widget_15);
        lbDate4->setObjectName(QString::fromUtf8("lbDate4"));
        lbDate4->setGeometry(QRect(320, 11, 69, 16));
        lblWeek0 = new QLabel(widget_15);
        lblWeek0->setObjectName(QString::fromUtf8("lblWeek0"));
        lblWeek0->setGeometry(QRect(9, 34, 71, 21));
        lbDate2 = new QLabel(widget_15);
        lbDate2->setObjectName(QString::fromUtf8("lbDate2"));
        lbDate2->setGeometry(QRect(163, 11, 69, 16));
        widget_17 = new QWidget(widget_16);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setGeometry(QRect(0, 170, 491, 41));
        gridLayout_4 = new QGridLayout(widget_17);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lblQuality5 = new QLabel(widget_17);
        lblQuality5->setObjectName(QString::fromUtf8("lblQuality5"));

        gridLayout_4->addWidget(lblQuality5, 0, 5, 1, 1);

        lblQuality4 = new QLabel(widget_17);
        lblQuality4->setObjectName(QString::fromUtf8("lblQuality4"));

        gridLayout_4->addWidget(lblQuality4, 0, 4, 1, 1);

        lblQuality3 = new QLabel(widget_17);
        lblQuality3->setObjectName(QString::fromUtf8("lblQuality3"));

        gridLayout_4->addWidget(lblQuality3, 0, 3, 1, 1);

        lblQuality2 = new QLabel(widget_17);
        lblQuality2->setObjectName(QString::fromUtf8("lblQuality2"));

        gridLayout_4->addWidget(lblQuality2, 0, 2, 1, 1);

        lblQuality1 = new QLabel(widget_17);
        lblQuality1->setObjectName(QString::fromUtf8("lblQuality1"));

        gridLayout_4->addWidget(lblQuality1, 0, 1, 1, 1);

        lblQuality0 = new QLabel(widget_17);
        lblQuality0->setObjectName(QString::fromUtf8("lblQuality0"));

        gridLayout_4->addWidget(lblQuality0, 0, 0, 1, 1);

        widget_20 = new QWidget(widget_16);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setGeometry(QRect(10, 60, 491, 101));
        widget_21 = new QWidget(widget_20);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        widget_21->setGeometry(QRect(0, 0, 481, 71));
        lblTypeIcon0 = new QLabel(widget_21);
        lblTypeIcon0->setObjectName(QString::fromUtf8("lblTypeIcon0"));
        lblTypeIcon0->setGeometry(QRect(0, 0, 71, 69));
        lblTypeIcon0->setAlignment(Qt::AlignCenter);
        lblTypeIcon1 = new QLabel(widget_21);
        lblTypeIcon1->setObjectName(QString::fromUtf8("lblTypeIcon1"));
        lblTypeIcon1->setGeometry(QRect(80, 0, 71, 69));
        lblTypeIcon1->setAlignment(Qt::AlignCenter);
        lblTypeIcon2 = new QLabel(widget_21);
        lblTypeIcon2->setObjectName(QString::fromUtf8("lblTypeIcon2"));
        lblTypeIcon2->setGeometry(QRect(160, 0, 71, 69));
        lblTypeIcon2->setAlignment(Qt::AlignCenter);
        lblTypeIcon3 = new QLabel(widget_21);
        lblTypeIcon3->setObjectName(QString::fromUtf8("lblTypeIcon3"));
        lblTypeIcon3->setGeometry(QRect(240, 0, 71, 69));
        lblTypeIcon3->setAlignment(Qt::AlignCenter);
        lblTypeIcon4 = new QLabel(widget_21);
        lblTypeIcon4->setObjectName(QString::fromUtf8("lblTypeIcon4"));
        lblTypeIcon4->setGeometry(QRect(320, 0, 71, 69));
        lblTypeIcon4->setAlignment(Qt::AlignCenter);
        lblTypeIcon5 = new QLabel(widget_21);
        lblTypeIcon5->setObjectName(QString::fromUtf8("lblTypeIcon5"));
        lblTypeIcon5->setGeometry(QRect(400, 0, 71, 69));
        lblTypeIcon5->setAlignment(Qt::AlignCenter);
        widget_22 = new QWidget(widget_16);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        widget_22->setGeometry(QRect(0, 130, 491, 51));
        horizontalLayout_3 = new QHBoxLayout(widget_22);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblType0 = new QLabel(widget_22);
        lblType0->setObjectName(QString::fromUtf8("lblType0"));
        lblType0->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType0);

        lblType1 = new QLabel(widget_22);
        lblType1->setObjectName(QString::fromUtf8("lblType1"));
        lblType1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType1);

        lblType2 = new QLabel(widget_22);
        lblType2->setObjectName(QString::fromUtf8("lblType2"));
        lblType2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType2);

        lblType3 = new QLabel(widget_22);
        lblType3->setObjectName(QString::fromUtf8("lblType3"));
        lblType3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType3);

        lblType4 = new QLabel(widget_22);
        lblType4->setObjectName(QString::fromUtf8("lblType4"));
        lblType4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType4);

        lblType5 = new QLabel(widget_22);
        lblType5->setObjectName(QString::fromUtf8("lblType5"));
        lblType5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblType5);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        searchBtn->setText(QString());
        dateLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeToday->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblHighLow->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTemperature->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        addressLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        coldIndexLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblwindIconToday->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFxToday->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFlToday->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblPM25Icon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        windIcon_6->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lblPM25->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblHumidityIcon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        windIcon_9->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        lblHumidity->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        aqiIconToday->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        windIcon_12->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lblAqiToday->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblHighCurve->setText(QString());
        lblLowCurve->setText(QString());
        lblFx0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFl0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFx1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFl1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFx2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFl2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFx3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFl3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFx4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFl4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFx5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblFl5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbDate5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblWeek3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblWeek5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbDate0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblWeek2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbDate1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblWeek1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbDate3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblWeek4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbDate4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblWeek0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbDate2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblQuality5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblQuality4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblQuality3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblQuality2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblQuality1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblQuality0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblTypeIcon5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblType0->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblType1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblType2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblType3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblType4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lblType5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
