#include "mainwindow.h"
#include "ui_mainwindow.h"

#define LED 26
#define init 0
#define range 100

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    softPwmCreate(LED, init,range);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
 softPwmWrite(LED,10);
}

void MainWindow::on_pushButton_2_clicked()
{
  softPwmWrite(LED,50);
}

void MainWindow::on_pushButton_3_clicked()
{
    softPwmWrite(LED,100);
}

void MainWindow::on_pushButton_4_clicked()
{
    softPwmWrite(LED,5);
}

void MainWindow::on_pushButton_5_clicked()
{
    softPwmWrite(LED,0);
}
