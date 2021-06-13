#ifndef CAPITULOREGISTRO_H
#define CAPITULOREGISTRO_H

#include <QDialog>

namespace Ui {
class CapituloRegistro;
}

class CapituloRegistro : public QDialog
{
    Q_OBJECT

public:
    explicit CapituloRegistro(QWidget *parent = nullptr);
    ~CapituloRegistro();

private slots:
    void on_GuardarCapitulo_clicked();

    void on_toolButton_clicked();

private:
    Ui::CapituloRegistro *ui;
};

#endif // CAPITULOREGISTRO_H
