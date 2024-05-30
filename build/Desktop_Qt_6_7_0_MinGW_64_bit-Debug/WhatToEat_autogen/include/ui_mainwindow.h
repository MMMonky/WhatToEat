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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *flavor_yes;
    QCheckBox *flavor_no;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_1;
    QSlider *priceSlider;
    QTextEdit *textEdit;
    QPushButton *editDish;
    QToolButton *search;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 100));
        MainWindow->setMaximumSize(QSize(800, 10000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 800, 601));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(100, 10));
        scrollArea->setSizeIncrement(QSize(0, 0));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 790, 1000));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 1000));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        flavor_yes = new QCheckBox(scrollAreaWidgetContents);
        flavor_yes->setObjectName("flavor_yes");
        flavor_yes->setGeometry(QRect(600, 210, 71, 18));
        flavor_yes->setStyleSheet(QString::fromUtf8(""));
        flavor_yes->setChecked(false);
        flavor_no = new QCheckBox(scrollAreaWidgetContents);
        flavor_no->setObjectName("flavor_no");
        flavor_no->setGeometry(QRect(670, 210, 16, 18));
        flavor_no->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, 180, 91, 16));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setFrameShape(QFrame::Panel);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(630, 150, 31, 16));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setFrameShape(QFrame::Panel);
        label_1 = new QLabel(scrollAreaWidgetContents);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(600, 90, 91, 21));
        label_1->setStyleSheet(QString::fromUtf8(""));
        label_1->setFrameShape(QFrame::Panel);
        priceSlider = new QSlider(scrollAreaWidgetContents);
        priceSlider->setObjectName("priceSlider");
        priceSlider->setGeometry(QRect(560, 115, 160, 31));
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
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 40, 381, 51));
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        textEdit->setCursorWidth(10);
        editDish = new QPushButton(scrollAreaWidgetContents);
        editDish->setObjectName("editDish");
        editDish->setGeometry(QRect(560, 40, 161, 41));
        editDish->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        search = new QToolButton(scrollAreaWidgetContents);
        search->setObjectName("search");
        search->setGeometry(QRect(440, 40, 101, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\346\220\234\347\264\242\346\214\211\351\222\256"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon);
        search->setIconSize(QSize(100, 50));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        flavor_yes->setText(QCoreApplication::translate("MainWindow", "  flavor", nullptr));
        flavor_no->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\276\235\345\217\243\345\221\263\347\274\251\345\260\217\350\214\203\345\233\264", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "\344\276\235\344\273\267\346\240\274\347\274\251\345\260\217\350\214\203\345\233\264", nullptr));
        editDish->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\350\217\234\345\223\201", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
