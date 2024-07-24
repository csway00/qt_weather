# qt_weather

本项目是跟着B站的明王老师做的, [视频链接](https://www.bilibili.com/video/BV1D841147zt/?spm_id_from=333.788&vd_source=4992bcab0402409c8ebb9b5bb4afb1b3)


**Qt天气预报客户端** 

![](assets/ScreenShot.png)



**环境**： Windows 10 + Qt 5.15.2 <br>
**项目简介**：该项目是使用Qt集成开发环境编写，实现用户输入城市名字，显示当天以及6天的天气数据。<br>
**主要技术：** C++、Qt、Json、HTTP <br>
**主要完成的功能：**
1. 界面布局。<br>
2. 发送HTTP请求给服务器，请求回来的天气数据为JSON格式, 再对JSON数据进行解析。<br>
3. 对JSON解析的数据展示到UI界面上。<br>
4. 将6天的温度使用曲线连接起来，使得温度变化趋势一目了然。
