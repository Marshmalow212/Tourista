#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>

namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = nullptr);
    ~Payment();

private slots:
    void on_cancel_clicked();

    void on_bkashbox_stateChanged(int arg1);

    void on_rocketbox_stateChanged(int arg1);

    void on_visabox_stateChanged(int arg1);

    void on_masterbox_stateChanged(int arg1);

    void on_confirm_clicked();

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H
