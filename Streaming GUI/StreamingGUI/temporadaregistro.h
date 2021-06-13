#ifndef TEMPORADAREGISTRO_H
#define TEMPORADAREGISTRO_H

#include <QDialog>

namespace Ui {
class TemporadaRegistro;
}

class TemporadaRegistro : public QDialog
{
    Q_OBJECT

public:
    explicit TemporadaRegistro(QWidget *parent = nullptr);
    ~TemporadaRegistro();

private:
    Ui::TemporadaRegistro *ui;
};

#endif // TEMPORADAREGISTRO_H
