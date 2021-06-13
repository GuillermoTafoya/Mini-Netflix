#include "mainwindow.h"
#include <QApplication>
#include <QFile>



int main(int argc, char *argv[])
{
    //create the application and the main window

    QApplication app(argc, argv);
    MainWindow w;

    //open qss file

    QFile file("E:/Dev/Streaming GUI/StreamingGUI/Perstfic.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet {file.readAll()};



    //setup stylesheet

    app.setStyleSheet(styleSheet);


    w.show();
    return app.exec();
}
