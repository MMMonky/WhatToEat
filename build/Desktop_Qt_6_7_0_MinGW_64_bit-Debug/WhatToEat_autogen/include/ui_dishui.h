/********************************************************************************
** Form generated from reading UI file 'dishui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHUI_H
#define UI_DISHUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DishUI
{
public:
    QLabel *dishNameText;
    QLabel *imageLabel;
    QLabel *priceText;
    QLabel *labelsText;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DishUI)
    {
        if (DishUI->objectName().isEmpty())
            DishUI->setObjectName("DishUI");
        DishUI->resize(480, 150);
        DishUI->setMinimumSize(QSize(480, 150));
        dishNameText = new QLabel(DishUI);
        dishNameText->setObjectName("dishNameText");
        dishNameText->setGeometry(QRect(190, 30, 161, 91));
        imageLabel = new QLabel(DishUI);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(0, 0, 171, 151));
        imageLabel->setMinimumSize(QSize(150, 150));
        priceText = new QLabel(DishUI);
        priceText->setObjectName("priceText");
        priceText->setGeometry(QRect(380, 60, 71, 41));
        priceText->setMinimumSize(QSize(71, 41));
        QFont font;
        font.setPointSize(17);
        priceText->setFont(font);
        labelsText = new QLabel(DishUI);
        labelsText->setObjectName("labelsText");
        labelsText->setGeometry(QRect(180, 80, 291, 91));
        pushButton = new QPushButton(DishUI);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 480, 150));
        pushButton->setMinimumSize(QSize(480, 150));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255\357\274\2140);"));
        pushButton_2 = new QPushButton(DishUI);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 120, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color : rgb(255, 0, 0)"));
        pushButton_2->setIconSize(QSize(20, 12));
        pushButton_2->setCheckable(false);

        retranslateUi(DishUI);

        QMetaObject::connectSlotsByName(DishUI);
    } // setupUi

    void retranslateUi(QWidget *DishUI)
    {
        DishUI->setWindowTitle(QCoreApplication::translate("DishUI", "Form", nullptr));
        dishNameText->setText(QCoreApplication::translate("DishUI", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\350\217\234\345\220\215</span></p></body></html>", nullptr));
        imageLabel->setText(QCoreApplication::translate("DishUI", "\345\233\276\347\211\207", nullptr));
        priceText->setText(QCoreApplication::translate("DishUI", "\344\273\267\346\240\274", nullptr));
        labelsText->setText(QCoreApplication::translate("DishUI", "Labels", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("DishUI", "\342\235\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DishUI: public Ui_DishUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHUI_H
