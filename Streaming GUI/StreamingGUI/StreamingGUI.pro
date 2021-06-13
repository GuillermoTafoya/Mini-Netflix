QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
    capituloregistro.cpp \
    main.cpp \
    mainwindow.cpp \
    pelicularegistro.cpp \
    registrotemporada.cpp \
    serieregistro.cpp

HEADERS += \
    ../../Streaming/Streaming/Capitulo.h \
    ../../Streaming/Streaming/Contenedor.h \
    ../../Streaming/Streaming/Pelicula.h \
    ../../Streaming/Streaming/Serie.h \
    ../../Streaming/Streaming/Temporada.h \
    ../../Streaming/Streaming/Video.h \
    capituloregistro.h \
    mainwindow.h \
    pelicularegistro.h \
    registrotemporada.h \
    serieregistro.h

FORMS += \
    capituloregistro.ui \
    mainwindow.ui \
    pelicularegistro.ui \
    registrotemporada.ui \
    serieregistro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




INCLUDEPATH += "E:/MinGW/MinGW/include"
INCLUDEPATH += "E:/MinGW/MinGW/include/boost"

LIBS += -L"E:/MinGW/MinGW/lib" \
       -llibboost_serialization \
       -llibboost_iostreams\
       -llibboost_filesystem \
       -llibboost_wserialization


INCLUDEPATH += \
    "E:/Dev/Streaming/Streaming" \
    "E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons"


RESOURCES += \
    resources.qrc

DISTFILES += \
    Perstfic.qss




