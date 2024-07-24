#ifndef WeatherTool2_H
#define WeatherTool2_H

#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QMap>
#include <QJsonParseError>
#include <QMessageBox>


class WeatherTool2 {
public:
    //://citycode.json
    static QString getCityCode(QString city) {
        //qDebug() << "map 搜索的城市： -------------------" << city;
        if (mCityMap2.isEmpty()) {
            //qDebug() << "mCityMap2 is empty";
            initMap();
        }

        QMap<QString, QString>::iterator it = mCityMap2.find(city);
        //北京/北京市
        // if(it == mCityMap2.end()) {
        //     it = mCityMap2.find(city+"市");
        //     return it.value();
        // }
        if(it != mCityMap2.end()) {
            return it.value();
        }

        //printMap();
        return "";
    }

private:
    static QMap<QString, QString> mCityMap2;  //mCityMap2

    static void initMap() {
        //1. 打开文件,
        QFile file("://citycode.json");
        //QFile file("F:\\Desktop\\QTCode\\smallProject\\weatherVersion\\citycode.json");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text) ){
            qDebug() << "WeatherTool2类 json 打开失败";
            return;
        }
        QByteArray all = file.readAll();
        file.close();

        //2. 解析json数据
        QJsonParseError err;
        QJsonDocument doc = QJsonDocument::fromJson(all, &err);
        QJsonArray arr = doc.array();

        for (int i = 0; i < arr.size(); i++) {
            QJsonObject obj = arr[i].toObject();
            QString city = obj.value("city_name").toString();
            QString cityCode = obj.value("city_code").toString();

            //qDebug() << city << ", " << cityCode;
            if (cityCode != "") {
                mCityMap2.insert(city, cityCode);
            }
        }
    }

    static void printMap() {
        qDebug() << "城市编码:----------------------------------";
        for (auto it = mCityMap2.begin(); it != mCityMap2.end(); it++) {
            qDebug() << it.key() << ": " << it.value();
        }
        qDebug() << "城市编码:----------------------------------";
    }
};

//int Person::m_B = 10;
QMap<QString, QString> WeatherTool2::mCityMap2 = {};

#endif // WeatherTool2_H
