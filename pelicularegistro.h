#pragma once
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

private:
       Ui::PeliculaRegistro *ui;


};


