#ifndef WEATHERDAY_H
#define WEATHERDAY_H

#include <QDebug>

class Today {
public:
    Today() {

        date= "2022-10-20";
        city= "广州";
        ganmao="感冒指数";
        wendu =0;
        shidu = "0%";
        pm25=0;
        quality="无数据";
        type="多云";
        fl="2级";
        fx="南风";
        high = 30;
        low=18;
    }

    QString date;
    QString city;
    QString ganmao;
    double wendu;
    QString shidu;
    int pm25;
    QString quality;
    QString type;
    QString fx;
    QString fl;
    int high;
    int low;

    void pritntData() {
        qDebug() << "ToDay data:---------------------";
        qDebug() << "date: " << date;
        qDebug() << "city: " << city;
        qDebug() << "gannao: " << ganmao;
        qDebug() << "wendu: " << wendu;
        qDebug() << "shidu: " << shidu;
        qDebug() << "pm25: " << pm25;
        qDebug() << "quality: " << quality;
        qDebug() << "type: " << type;
        qDebug() << "fx: " << fx;
        qDebug() << "fl: " << fl;
        qDebug() << "high: " << high;
        qDebug() << "low: " << low;
        qDebug() << "-----------------------";
    }
};

class Day {
public:
    Day()
    {
        date="2022-10-20";
        week="周五";
        type="多云";
        high =0;
        low=0;
        fx="南风";
        fl="2级";
        aqi =0;
    }
    QString date;
    QString week;
    QString type;
    int high;
    int low;
    QString fx;
    QString fl;
    int aqi;  //空气质量

    void pritntData() {
        qDebug() << "Day data:---------------------";
        qDebug() << "date: " << date;
        qDebug() << "week: " << week;
        qDebug() << "type: " << type;
        qDebug() << "high: " << high;
        qDebug() << "low: " << low;
        qDebug() << "fx: " << fx;
        qDebug() << "fl: " << fl;
        qDebug() << "aqi: " << aqi;
        qDebug() << "-----------------------";
    }

    int getHighLow(QString str) {
        if (str == "high") {
            return high;
        } else if (str == "low") {
            return low;
        }
        return INT_MAX;
    }

};

#endif // WEATHERDAY_H
