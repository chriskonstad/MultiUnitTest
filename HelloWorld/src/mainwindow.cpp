#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adder.h"
#include "subtractor.h"

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

void MainWindow::on_pushButton_clicked()
{
    Adder adder;
    int number = adder.addNumbers(ui->spinBox->value(), ui->spinBox_2->value());
    ui->lineEdit->setText(QString::number(number));
}

void MainWindow::on_pushButton_2_clicked()
{
    Subtractor sub;
    int number = sub.subtractNumbers(ui->spinBox_3->value(), ui->spinBox_4->value());
    ui->lineEdit_2->setText(QString::number(number));
}
