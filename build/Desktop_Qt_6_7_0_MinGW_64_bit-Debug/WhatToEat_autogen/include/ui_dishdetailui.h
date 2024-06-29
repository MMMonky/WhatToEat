/********************************************************************************
** Form generated from reading UI file 'dishdetailui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHDETAILUI_H
#define UI_DISHDETAILUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dishDetailUI
{
public:
    QLabel *imageLabel;
    QLabel *nameText;
    QLabel *labelText;
    QLabel *detailLabel;
    QLabel *priceText;

    void setupUi(QWidget *dishDetailUI)
    {
        if (dishDetailUI->objectName().isEmpty())
            dishDetailUI->setObjectName("dishDetailUI");
        dishDetailUI->resize(600, 300);
        dishDetailUI->setMinimumSize(QSize(600, 300));
        dishDetailUI->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        imageLabel = new QLabel(dishDetailUI);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(0, 0, 191, 121));
        imageLabel->setMinimumSize(QSize(191, 121));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nameText = new QLabel(dishDetailUI);
        nameText->setObjectName("nameText");
        nameText->setGeometry(QRect(190, 0, 411, 71));
        nameText->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        labelText = new QLabel(dishDetailUI);
        labelText->setObjectName("labelText");
        labelText->setGeometry(QRect(0, 120, 601, 111));
        labelText->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        detailLabel = new QLabel(dishDetailUI);
        detailLabel->setObjectName("detailLabel");
        detailLabel->setGeometry(QRect(-1, 231, 601, 71));
        detailLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        priceText = new QLabel(dishDetailUI);
        priceText->setObjectName("priceText");
        priceText->setGeometry(QRect(189, 69, 411, 51));
        priceText->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(dishDetailUI);

        QMetaObject::connectSlotsByName(dishDetailUI);
    } // setupUi

    void retranslateUi(QWidget *dishDetailUI)
    {
        dishDetailUI->setWindowTitle(QCoreApplication::translate("dishDetailUI", "Form", nullptr));
        imageLabel->setText(QCoreApplication::translate("dishDetailUI", "\345\233\276\347\211\207", nullptr));
        nameText->setText(QCoreApplication::translate("dishDetailUI", "\345\220\215\347\247\260", nullptr));
        labelText->setText(QCoreApplication::translate("dishDetailUI", "labels", nullptr));
        detailLabel->setText(QCoreApplication::translate("dishDetailUI", "detail", nullptr));
        priceText->setText(QCoreApplication::translate("dishDetailUI", "price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dishDetailUI: public Ui_dishDetailUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHDETAILUI_H
