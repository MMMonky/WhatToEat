#include "mainwindow.h"
#include <QGridLayout>
#include <QPaintEvent>
#include <QPainter>
#include <QDebug>
#include <QString>
#include "./ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *) //画背景图
{
    QPainter p(this); //创建一个painter,指定窗口为画布

    p.drawPixmap(this->rect(), QPixmap("://background"));
}

void MainWindow::on_scrollArea_customContextMenuRequested(const QPoint &pos) {}

void MainWindow::on_priceSlider_valueChanged(int value)
{
    qDebug() << "price slider value changed to:" << value;
    ui->priceBoundLabel->setText((std::to_string(value) + ("元以下")).c_str());
    ui->priceBoundLabel->setAlignment(Qt::AlignCenter);
}

