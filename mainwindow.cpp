#include "mainwindow.h"
#include <QGridLayout>
#include <QPaintEvent>
#include <QPainter>
#include <QDebug>
#include <QString>
#include "./ui_mainwindow.h"

#include "Dish.h"
#include "Config.h"
#include<QWidget>
#include<QPaintEvent>
#include<QPainter>
#include<QGridLayout>
#include<QDebug>

#include <QHBoxLayout>
#include <QPushButton>
#include <QScrollArea>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->scrollAreaWidgetContents->installEventFilter(this);
    ui->scrollArea->setWidgetResizable(true);   //使scrollerea可滚动
    setCentralWidget(ui->scrollArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::eventFilter(QObject *watched, QEvent *event) {
    if (watched == ui->scrollAreaWidgetContents && event->type() == QEvent::Paint) {
        paintWidget();
    }

    return QWidget::eventFilter(watched, event);
}

void MainWindow::paintEvent(QPaintEvent *) //画背景图
{
    QPainter p(this); //创建一个painter,指定窗口为画布

    p.drawPixmap(this->rect(), QPixmap("://background"));   //画背景图
}


void MainWindow::paintWidget()
{
    //创建一个painter,指定窗口为scrollAreaWidgetContents
    QPainter p1(ui->scrollAreaWidgetContents);

    // 添加若干张图片到布局中
    for (int i = 0; i < dishNum; ++i) {

        // 在scrollAreaWidgetContents上绘制图片
        p1.drawPixmap(60, 100 + i * 70, 480, 60, QPixmap("://搜索框"));
    }

    if(dishNum > 7){
        ui->scrollAreaWidgetContents->setMinimumSize(0, 600 + (dishNum - 7) * 70);    //改变小widget的大小
    }
}

void MainWindow::mousePressEvent(QMouseEvent *e){
    //cout << e->pos();
}

void MainWindow::on_search_clicked()
{
    dishNum += 2;
    update();
}

void MainWindow::on_priceSlider_valueChanged(int value)
{
    qDebug() << "price slider value changed to:" << value;
    int Mprice = value == 100 ? value : value * 0.4;
    if (Mprice < 100 and Mprice > 0) {
        ui->priceBoundLabel->setText((std::to_string(Mprice) + ("元以下")).c_str());
    } else if (Mprice == 100) {
        ui->priceBoundLabel->setText("任意价格");
    } else {
        ui->priceBoundLabel->setText("0元购");
    }

    ui->priceBoundLabel->setAlignment(Qt::AlignCenter);
}

