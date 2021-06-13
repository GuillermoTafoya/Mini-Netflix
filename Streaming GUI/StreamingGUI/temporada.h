#ifndef TEMPORADA_H
#define TEMPORADA_H

#include <QDialog>

namespace Ui {
class Temporada;
}

class Temporada : public QDialog
{
    Q_OBJECT

public:
    explicit Temporada(QWidget *parent = nullptr);
    ~Temporada();

private:
    Ui::Temporada *ui;
};

#endif // TEMPORADA_H
