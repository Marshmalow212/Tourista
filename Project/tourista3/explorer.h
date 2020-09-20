#ifndef EXPLORER_H
#define EXPLORER_H

#include <QMainWindow>

namespace Ui {
class Explorer;
}

class Explorer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Explorer(QWidget *parent = nullptr);
    ~Explorer();

private slots:
    void on_tabWidget_currentChanged(int index);

    void on_divinfocombo_currentTextChanged(const QString &arg1);

    void on_plinfocombo_currentTextChanged(const QString &arg1);

    void on_tdcombo_currentTextChanged(const QString &arg1);

    void on_tpcombo_currentTextChanged(const QString &arg1);

    void on_ttcombo_currentTextChanged(const QString &arg1);

    void on_tscombo_currentTextChanged(const QString &arg1);

    void on_hdcombo_currentTextChanged(const QString &arg1);


    void on_hpcombo_currentTextChanged(const QString &arg1);

private:
    Ui::Explorer *ui;
};

#endif // EXPLORER_H
