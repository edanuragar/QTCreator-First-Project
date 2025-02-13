#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_addbtn_clicked()
{
    firstNum = ui->firstNumtxt->text().toInt();
    secondNum = ui->secondNumtxt->text().toInt();
    result = firstNum+secondNum;
    ui->sonuctxt->setText(QString::number(result));
}


void MainWindow::on_mynesbtn_clicked()
{
    firstNum = ui->firstNumtxt->text().toInt();
    secondNum = ui->secondNumtxt->text().toInt();
    result = firstNum-secondNum;
    ui->sonuctxt->setText(QString::number(result));
}


void MainWindow::on_multiplicationbtn_clicked()
{
    firstNum = ui->firstNumtxt->text().toInt();
    secondNum = ui->secondNumtxt->text().toInt();
    result = firstNum*secondNum;
    ui->sonuctxt->setText(QString::number(result));
}


void MainWindow::on_dividebtn_clicked()
{
    firstNum = ui->firstNumtxt->text().toInt();
    secondNum = ui->secondNumtxt->text().toInt();
    result = firstNum/secondNum;
    ui->sonuctxt->setText(QString::number(result));
}

