#ifndef REGISTROTEMPORADA_H
#define REGISTROTEMPORADA_H

#include <QDialog>

namespace Ui {
class RegistroTemporada;
}

class RegistroTemporada : public QDialog
{
    Q_OBJECT

public:
    explicit RegistroTemporada(QWidget *parent = nullptr);
    ~RegistroTemporada();

private slots:
    void on_RegistrarTemporada_clicked();

private:
    Ui::RegistroTemporada *ui;
};

#endif // REGISTROTEMPORADA_H
