#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();

    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    void Interface();
    void questions();
    void ActivButton(int flag);
    void clickButton(int num, int row, QString style);
    void setbeginsButton();
    void STart();
    void Play();
    bool Start = false;
    char gameArea[3][3] = {{'-', '-', '-'},
                           {'-', '-', '-'},
                           {'-', '-', '-'}};
    char player = '-';
    int prog = 0;
    int play = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, j = 0, k = 0;
};
#endif // MAINWINDOW_H
