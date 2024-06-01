#include "dishdetailui.h"
#include "ui_dishdetailui.h"
#include <QDir>

dishDetailUI::dishDetailUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dishDetailUI)
{
    ui->setupUi(this);
}

dishDetailUI::~dishDetailUI()
{
    delete ui;
}

void dishDetailUI::update(Dish& d) {
    qDebug() << "dishDetailUI update to:" << d.name;
    // 设置菜名
    ui->nameText->setText(d.name);
    ui->nameText->setFont(QFont("Arial", 30));
    // 设置价格
    ui->priceText->setText(to_string((int)d.price).c_str());
    ui->priceText->setFont(QFont("Arial", 20));

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
        labelsText += '#' + label + '\n';
    }
    ui->labelText->setText(labelsText);

    ui->detailLabel->setText(d.description);
}
