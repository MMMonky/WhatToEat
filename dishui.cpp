#include "dishui.h"
#include "ui_dishui.h"
#include <QDir>
DishUI::DishUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DishUI)
{
    ui->setupUi(this);
    resize(480, 120);
}

DishUI::~DishUI()
{
    delete ui;
}

void DishUI::update(Dish& d) {

    // 设置菜名
    ui->dishNameText->setText(d.name);
    ui->dishNameText->setFont(QFont("Arial", 20));
    // 设置价格
    ui->priceText->setText(to_string((int)d.price).c_str());

    QPixmap pixmap(QDir::currentPath() + d.img_path);

    if (pixmap.isNull()) {
        qDebug() << "Can not find image at:" << QDir::currentPath() + d.img_path;
    } else {
        // 缩放图片
        pixmap = pixmap.scaled(180, 120);
        ui->imageLabel->setPixmap(pixmap);
    }
    QString labelsText = "";
    for (auto label : d.labels) {
        labelsText += '#' + label + ' ';
    }
    ui->labelsText->setText(labelsText);
    this->d = d;
}

void DishUI::on_pushButton_clicked()
{
    qDebug() << d.name << "clicked!";
    emit dishUIClicked(d);
}

