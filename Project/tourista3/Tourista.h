#ifndef TOURISTA_H
#define TOURISTA_H

#include <QMainWindow>
#include <explorer.h>

namespace Ui {
class Tourista;
}

class Tourista : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tourista(QWidget *parent = nullptr);
    ~Tourista();
    Explorer *expwin;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_comboBox_4_currentTextChanged(const QString &arg1);


    void on_comboBox_currentTextChanged(const QString &arg1);


    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_pushButton_17_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_comboBox_7_currentTextChanged(const QString &arg1);

    void on_comboBox_9_activated(int index);

    void on_comboBox_6_currentIndexChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_textBrowser_4_textChanged();

    void on_comboBox_4_activated(const QString &arg1);

    void on_submitbtn_clicked();

    void on_cancelbtn_clicked();

    void on_donbuttn_clicked();

    void on_canbuttn_clicked();

    void on_paybuttn_clicked();

    void on_hisbuttn_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_9_clicked();

    void on_guiddivcombo_currentTextChanged(const QString &arg1);

    void on_guidplccombo_currentTextChanged(const QString &arg1);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();



private:
    Ui::Tourista *ui;
};

#endif // MAINWINDOW_H
