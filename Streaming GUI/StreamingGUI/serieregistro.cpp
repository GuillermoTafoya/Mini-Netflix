#include "serieregistro.h"
#include "ui_serieregistro.h"

SerieRegistro::SerieRegistro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerieRegistro)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/netflix.png"));
    this->setWindowTitle("Registrar Serie");
}

SerieRegistro::~SerieRegistro()
{
    delete ui;
}



