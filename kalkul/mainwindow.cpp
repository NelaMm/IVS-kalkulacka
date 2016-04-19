#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_1->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_1->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_2->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_2->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_3->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_3->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_4->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_4->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_5->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_5->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_6->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_6->text());
    ui->label->setText(vysledek);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_7->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_7->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_8->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_8->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0")
    {
        ui->label->setText(ui->pushButton_9->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_9->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_0_clicked()
{
    QString vysledek;
    if (ui->label->text()== "0");
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_0->text());
    ui->label->setText(vysledek);
    }
}


void MainWindow::on_pushButton_20_clicked()
{
    QString vysledek;
    vysledek = "0";
    ui->label->setText(vysledek);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString vysledek;
    QString pom;

    pom = ui->label->text();
    int length = pom.length();
    vysledek = pom.left(length-1);

    ui->label->setText(vysledek);

}
