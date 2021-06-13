#ifndef SERIEREGISTRO_H
#define SERIEREGISTRO_H

#include <QDialog>

namespace Ui {
class SerieRegistro;
}

class SerieRegistro : public QDialog
{
    Q_OBJECT

public:
    explicit SerieRegistro(QWidget *parent = nullptr);
    ~SerieRegistro();

private slots:
    void on_GuardarSerie_clicked();

private:
    Ui::SerieRegistro *ui;
};

#endif // SERIEREGISTRO_H
