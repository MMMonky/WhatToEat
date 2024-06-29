/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QToolButton *search;
    QLabel *label_1;
    QSlider *priceSlider;
    QLabel *priceBoundLabel;
    QLabel *label_3;
    QCheckBox *flavor_yes;
    QCheckBox *flavor_yes_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *flavor_no;
    QCheckBox *flavor_yes_3;
    QCheckBox *flavor_no_2;
    QCheckBox *flavor_no_3;
    QScrollArea *dishScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *dishDetailUIContainer;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 606));
        MainWindow->setMaximumSize(QSize(800, 10000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(70, 40, 381, 51));
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        textEdit->setCursorWidth(10);
        search = new QToolButton(centralwidget);
        search->setObjectName("search");
        search->setGeometry(QRect(480, 40, 101, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\346\220\234\347\264\242\346\214\211\351\222\256"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon);
        search->setIconSize(QSize(100, 50));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(650, 60, 91, 16));
        label_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_1->setFrameShape(QFrame::Panel);
        priceSlider = new QSlider(centralwidget);
        priceSlider->setObjectName("priceSlider");
        priceSlider->setGeometry(QRect(620, 70, 151, 31));
        priceSlider->setStyleSheet(QString::fromUtf8(""));
        priceSlider->setMinimum(0);
        priceSlider->setMaximum(100);
        priceSlider->setSingleStep(10);
        priceSlider->setPageStep(10);
        priceSlider->setSliderPosition(0);
        priceSlider->setTracking(false);
        priceSlider->setOrientation(Qt::Horizontal);
        priceSlider->setTickPosition(QSlider::TicksBelow);
        priceSlider->setTickInterval(10);
        priceBoundLabel = new QLabel(centralwidget);
        priceBoundLabel->setObjectName("priceBoundLabel");
        priceBoundLabel->setGeometry(QRect(620, 100, 151, 20));
        priceBoundLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        priceBoundLabel->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(650, 130, 91, 16));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3->setFrameShape(QFrame::Panel);
        flavor_yes = new QCheckBox(centralwidget);
        flavor_yes->setObjectName("flavor_yes");
        flavor_yes->setGeometry(QRect(600, 150, 71, 18));
        flavor_yes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        flavor_yes->setChecked(false);
        flavor_yes_2 = new QCheckBox(centralwidget);
        flavor_yes_2->setObjectName("flavor_yes_2");
        flavor_yes_2->setGeometry(QRect(700, 150, 71, 16));
        flavor_yes_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        flavor_yes_2->setChecked(false);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(600, 170, 71, 18));
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(600, 190, 71, 18));
        checkBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        flavor_no = new QCheckBox(centralwidget);
        flavor_no->setObjectName("flavor_no");
        flavor_no->setGeometry(QRect(600, 210, 71, 18));
        flavor_no->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        flavor_yes_3 = new QCheckBox(centralwidget);
        flavor_yes_3->setObjectName("flavor_yes_3");
        flavor_yes_3->setGeometry(QRect(700, 170, 71, 20));
        flavor_yes_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        flavor_yes_3->setChecked(false);
        flavor_no_2 = new QCheckBox(centralwidget);
        flavor_no_2->setObjectName("flavor_no_2");
        flavor_no_2->setGeometry(QRect(600, 230, 71, 18));
        flavor_no_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        flavor_no_3 = new QCheckBox(centralwidget);
        flavor_no_3->setObjectName("flavor_no_3");
        flavor_no_3->setGeometry(QRect(600, 250, 71, 18));
        flavor_no_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dishScrollArea = new QScrollArea(centralwidget);
        dishScrollArea->setObjectName("dishScrollArea");
        dishScrollArea->setGeometry(QRect(70, 110, 511, 301));
        dishScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 509, 299));
        dishScrollArea->setWidget(scrollAreaWidgetContents_2);
        dishDetailUIContainer = new QWidget(centralwidget);
        dishDetailUIContainer->setObjectName("dishDetailUIContainer");
        dishDetailUIContainer->setGeometry(QRect(70, 420, 681, 361));
        dishDetailUIContainer->setMinimumSize(QSize(681, 361));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 50, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "\344\276\235\344\273\267\346\240\274\347\274\251\345\260\217\350\214\203\345\233\264", nullptr));
        priceBoundLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0\345\205\203\350\264\255</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\276\235\351\243\237\345\240\202\347\274\251\345\260\217\350\214\203\345\233\264", nullptr));
        flavor_yes->setText(QCoreApplication::translate("MainWindow", "\345\256\266\345\233\255\344\270\200\345\261\202", nullptr));
        flavor_yes_2->setText(QCoreApplication::translate("MainWindow", "\345\255\246\344\270\200\351\243\237\345\240\202", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\256\266\345\233\255\344\272\214\345\261\202", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\345\256\266\345\233\255\344\270\211\345\261\202", nullptr));
        flavor_no->setText(QCoreApplication::translate("MainWindow", "\345\256\266\345\233\255\345\233\233\345\261\202", nullptr));
        flavor_yes_3->setText(QCoreApplication::translate("MainWindow", "\345\255\246\344\272\224\351\243\237\345\240\202", nullptr));
        flavor_no_2->setText(QCoreApplication::translate("MainWindow", "\345\206\234\345\233\255\344\270\200\345\261\202", nullptr));
        flavor_no_3->setText(QCoreApplication::translate("MainWindow", "\345\206\234\345\233\255\344\272\214\345\261\202", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
