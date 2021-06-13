#include "registrotemporada.h"
#include "ui_registrotemporada.h"

RegistroTemporada::RegistroTemporada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistroTemporada)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/netflix.png"));
    this->setWindowTitle("Registrar Temporada");
}

RegistroTemporada::~RegistroTemporada()
{
    delete ui;
}



