/**
* @file mainwindow.cpp
* @author skupina 3++
* @brief  Implementace mainwindow.h.
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Operations.h"
#include "Mathf.h"
#include <string>
#include <stdlib.h>

QString vysledek;
QString pom;
int maxLength=9;

Operations object;

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
    //QString vysledek;
    pom=ui->label->text();
    int delka=pom.length();
    if(delka < maxLength)
    {

    if (ui->label->text()== "0" || ui->label->text()== "Overflow" )
    {
        ui->label->setText(ui->pushButton_1->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_1->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" )
    {
        ui->label->setText(ui->pushButton_2->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_2->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" )
    {
        ui->label->setText(ui->pushButton_3->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_3->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" )
    {
        ui->label->setText(ui->pushButton_4->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_4->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" )
    {
        ui->label->setText(ui->pushButton_5->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_5->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow" )
    {
        ui->label->setText(ui->pushButton_6->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_6->text());
    ui->label->setText(vysledek);
    }
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow")
    {
        ui->label->setText(ui->pushButton_7->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_7->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow")
    {
        ui->label->setText(ui->pushButton_8->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_8->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    //QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0" || ui->label->text()== "Overflow")
    {
        ui->label->setText(ui->pushButton_9->text());
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_9->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_0_clicked()
{
   // QString vysledek;
    pom=ui->label->text();

    int delka=pom.length();
    if(delka < maxLength)
    {
    if (ui->label->text()== "0");
    else if (ui->label->text()== "Overflow")
    {
        ui->label->setText("0");
    }
    else
    {
    vysledek = (ui->label->text() + ui->pushButton_0->text());
    ui->label->setText(vysledek);
    }
    }
}


void MainWindow::on_pushButton_20_clicked()
{
    //QString vysledek;
    vysledek = "0";
    ui->label->setText(vysledek);
    object.clear();
}

void MainWindow::on_pushButton_10_clicked()
{
    //QString vysledek;
    QString pom;

    pom = ui->label->text();
    if (pom != "Overflow"){
    int length = pom.length();
    vysledek = pom.left(length-1);

    ui->label->setText(vysledek);
    if (ui->label->text() == "")
    {
        ui->label->setText("0");
    }
    }
    else {ui->label->setText("0");}
}

void MainWindow::on_pushButton_13_clicked()
{
    pom=ui->label->text();
   double x = pom.toDouble();
    if(x < 13)
    {
        object.setOperand1(x);
        object.setOperation("!");

       /* try {
            object.calculate();
            } catch(string &a){
            QString tex = QString::fromStdString(a);
            ui->label->text(tex);
            object.clear();
            return;
            }
*/
        double y = object.calculate();
        vysledek = QString::number(y);
        ui->label->setText(vysledek);
        object.clear();
    }
    else  ui->label->setText("Overflow");
}


void MainWindow::on_pushButton_14_clicked()
{
    pom=ui->label->text();
    double x = pom.toDouble();
    if(x >= 1)
    {
        object.setOperand1(x);
        object.setOperation("sqrt");
        double y = object.calculate();
        vysledek = QString::number(y);
        ui->label->setText(vysledek);
        object.clear();
    }
    else  ui->label->setText("Overflow");

}


void MainWindow::on_pushButton_15_clicked()
{
    pom=ui->label->text();
    double x = pom.toDouble();
    object.setOperand1(x);
    object.setOperation("**");
    ui->label->setText("**");

}

void MainWindow::on_pushButton_19_clicked()
{
    pom=ui->label->text();
    double x = pom.toDouble();
    object.setOperand1(x);
    object.setOperation("+");
    ui->label->setText("+ ");
}

void MainWindow::on_pushButton_18_clicked()
{
    pom=ui->label->text();
    double x = pom.toDouble();
    object.setOperand1(x);
    object.setOperation("-");
    ui->label->setText("- ");
}

void MainWindow::on_pushButton_12_clicked()
{
    pom=ui->label->text();
    int length = pom.length();
    QString cislo = pom.right(length-2);
    double z = cislo.toDouble();
    object.setOperand2(z);

    double y = object.calculate();
    vysledek = QString::number(y);
    ui->label->setText(vysledek);
    object.clear();

}

void MainWindow::on_pushButton_17_clicked()
{
    pom=ui->label->text();
    double x = pom.toDouble();
    object.setOperand1(x);
    object.setOperation("*");
    ui->label->setText("* ");
}

void MainWindow::on_pushButton_16_clicked()
{
    pom=ui->label->text();
    double x = pom.toDouble();
    object.setOperand1(x);
    object.setOperation("/");
    ui->label->setText("/ ");
}
