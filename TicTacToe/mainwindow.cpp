#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QWidget>
#include <QMainWindow>
#include <QTabBar>
#include <QTabWidget>
#include <QFrame>
#include <QGridLayout>
#include <QLayout>
#include <QStyleOption>
#include <QString>
#include <QPainter>
#include "StyleBut.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->frameGeometry();
    ui->centralwidget->setMaximumHeight(400);
    Interface();
    //setbeginsButton();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p,  this);
    QWidget::paintEvent(event);
}

void MainWindow::Interface()
{
    ui->pushButton->setStyleSheet(StyleBut::GetStartButton());
    ui->pushButton->setText("Pushing");
    ui->line->setStyleSheet(StyleBut::GetText());
}

void MainWindow::questions()
{
    if(a == 1 && b == 1 & c == 1 || d == 1 && e == 1 && f == 1 || g == 1 && j == 1 && k == 1)
    {
        ui->line->setText("Победа крестик");
    }
    else if(a == 1 && d == 1 && g == 1 || b == 1 && e == 1 && j == 1 || c == 1 && f == 1 && k == 1)
    {
        ui->line->setText("Победа крестик");
    }
    else if(a == 1 && e == 1 && k == 1 || c == 1 && e == 1 && g == 1)
    {
        ui->line->setText("Победа крестик");
    }
    else if(a == 2 && b == 2 & c == 2 || d == 2 && e == 2 && f == 2 || g == 2 && j == 2 && k == 2)
    {
        ui->line->setText("Победа нолик");
    }
    else if(a == 2 && d == 2 && g == 2 || b == 2 && e == 2 && j == 2 || c == 2 && f == 2 && k == 2)
    {
        ui->line->setText("Победа нолик");
    }
    else if(a == 2 && e == 2 && k == 2 || c == 2 && e == 2 && g == 2)
    {
        ui->line->setText("Победа нолик");
    }
    else {
        ui->line->setText("Ничья");
    }
}

void MainWindow::ActivButton(int flag)
{
    if(flag == 1)
    {
        ui->pushButton_12->setStyleSheet(StyleBut::ActivOButton());
        ui->pushButton_11->setStyleSheet(StyleBut::GetXButton());
    } else {
        ui->pushButton_11->setStyleSheet(StyleBut::ActivXButton());
        ui->pushButton_12->setStyleSheet(StyleBut::GetOButton());
    }
}


void MainWindow::on_pushButton_11_clicked()
{
    ActivButton(1);
    player = 'X';
}


void MainWindow::on_pushButton_12_clicked()
{
    ActivButton(2);
    player = '0';
}

void MainWindow::clickButton(int num, int row, QString style)
{
    QGridLayout *gride = qobject_cast <QGridLayout*>(ui->tab_3->layout());
    QPushButton *knp = qobject_cast <QPushButton*>(gride->itemAtPosition(num, row)->widget());
    knp->setStyleSheet(style);
}

void MainWindow::setbeginsButton()
{
    QString style = StyleBut::EmptyButton();
    for(int num = 0; num < 3; num++)
    {
        for(int row = 0; row < 3; row++)
        {
            clickButton(num, row, style);
        }
    }
}

void MainWindow::STart()
{
    for(int num = 0; num < 3; num++)
    {
        for(int row = 0; row < 3; row++)
        {
            gameArea[num][row] = ' ';
        }
    }
    prog = 0;
    Start = true;

}

void MainWindow::Play()
{
    if(play == 1)
    {
        player = '0';
        ui->line->setText("Ходит нолик");
    } else {
        player = 'X';
        ui->line->setText("Ходит крестик");
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(Start)
    {
        ui->pushButton_11->setDisabled(false);
        ui->pushButton_12->setDisabled(false);
        ui->pushButton->setText("Start");
        Start = false;
        questions();
    } else {
        STart();
        questions();
        ui->pushButton->setText("Stop");
        ui->pushButton_11->setDisabled(true);
        ui->pushButton_12->setDisabled(true);

    }
}


void MainWindow::on_pushButton_9_clicked()
{
    if(Start)
    {
        if(player == 'X' && a == 0)
        {
            a = 1;
            play = 1;
            ui->pushButton_9->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && a == 0) {
            a = 2;
            play = 0;
            ui->pushButton_9->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();

        }
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    if(Start)
    {
        if(player == 'X' && b == 0)
        {
            b = 1;
            play = 1;
            ui->pushButton_5->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && b == 0) {
            b = 2;
            play = 0;
            ui->pushButton_5->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if(Start)
    {
        if(player == 'X' && c == 0)
        {
            c = 1;
            play = 1;
            ui->pushButton_6->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && c == 0) {
            c = 2;
            play = 0;
            ui->pushButton_6->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_10_clicked()
{
    if(Start)
    {
        if(player == 'X' && d == 0)
        {
            d = 1;
            play = 1;
            ui->pushButton_10->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && d == 0) {
            d = 2;
            play = 0;
            ui->pushButton_10->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    if(Start)
    {
        if(player == 'X' && e == 0)
        {
            e = 1;
            play = 1;
            ui->pushButton_8->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && e == 0) {
            e = 2;
            play = 0;
            ui->pushButton_8->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(Start)
    {
        if(player == 'X' && f == 0)
        {
            f = 1;
            play = 1;
            ui->pushButton_2->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && f == 0) {
            f = 2;
            play = 0;
            ui->pushButton_2->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if(Start)
    {
        if(player == 'X' && g == 0)
        {
            g = 1;
            play = 1;
            ui->pushButton_7->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && g == 0) {
            g = 2;
            play = 0;
            ui->pushButton_7->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if(Start)
    {
        if(player == 'X' && j == 0)
        {
            j = 1;
            play = 1;
            ui->pushButton_4->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        } else if(player == '0' && j == 0) {
            j = 2;
            play = 0;
            ui->pushButton_4->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(Start)
    {
        if(player == 'X' && k == 0)
        {
            k = 1;
            play = 1;
            ui->pushButton_3->setStyleSheet(StyleBut::GetinEmptyButton());
            Play();
        }
        else if(player == '0' && k == 0) {
            k = 2;
            play = 0;
            ui->pushButton_3->setStyleSheet(StyleBut::Get2inEmptyButton());
            Play();
        }
    }
}

