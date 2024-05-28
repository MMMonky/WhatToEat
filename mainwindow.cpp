#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QPaintEvent>
#include<QPainter>
#include<QGridLayout>

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

void MainWindow::paintEvent(QPaintEvent *) //画背景图
{
    QPainter p(this);   //创建一个painter,指定窗口为画布

    p.drawPixmap(this->rect(), QPixmap("://background"));
}

void MainWindow::on_scrollArea_customContextMenuRequested(const QPoint &pos)
{

}

