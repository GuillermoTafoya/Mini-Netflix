#ifndef PELICULAREGISTRO_H
#define PELICULAREGISTRO_H

#include <QDialog>

namespace Ui {
class PeliculaRegistro;
}

class PeliculaRegistro : public QDialog
{
    Q_OBJECT

public:
    explicit PeliculaRegistro(QWidget *parent = nullptr);
    ~PeliculaRegistro();

private slots:
    void on_pushButton_clicked();

    void on_LocalPath_clicked();

private:
    Ui::PeliculaRegistro *ui;
};

#endif // PELICULAREGISTRO_H
