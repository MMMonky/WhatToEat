/********************************************************************************
** Form generated from reading UI file 'newdishui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDISHUI_H
#define UI_NEWDISHUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewDishUI
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *NewDishUI)
    {
        if (NewDishUI->objectName().isEmpty())
            NewDishUI->setObjectName("NewDishUI");
        NewDishUI->resize(421, 297);
        buttonBox = new QDialogButtonBox(NewDishUI);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(200, 260, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewDishUI);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 0, 241, 51));
        label->setTextFormat(Qt::RichText);
        spinBox = new QSpinBox(NewDishUI);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(110, 220, 101, 31));
        verticalLayoutWidget = new QWidget(NewDishUI);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 40, 101, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        pushButton = new QPushButton(NewDishUI);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 220, 181, 31));
        lineEdit = new QLineEdit(NewDishUI);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 50, 281, 31));
        textEdit = new QTextEdit(NewDishUI);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(110, 80, 281, 81));
        textEdit_2 = new QTextEdit(NewDishUI);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(110, 160, 281, 64));

        retranslateUi(NewDishUI);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewDishUI, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewDishUI, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewDishUI);
    } // setupUi

    void retranslateUi(QDialog *NewDishUI)
    {
        NewDishUI->setWindowTitle(QCoreApplication::translate("NewDishUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewDishUI", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">\346\267\273\345\212\240\346\226\260\350\217\234\345\223\201</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("NewDishUI", "\350\217\234\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("NewDishUI", "\346\240\207\347\255\276(\347\224\250\347\251\272\346\240\274\345\210\206\345\274\200)", nullptr));
        label_5->setText(QCoreApplication::translate("NewDishUI", "\346\217\217\350\277\260", nullptr));
        label_4->setText(QCoreApplication::translate("NewDishUI", "\344\273\267\346\240\274", nullptr));
        pushButton->setText(QCoreApplication::translate("NewDishUI", "\351\200\211\346\213\251\345\233\276\347\211\207\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewDishUI: public Ui_NewDishUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDISHUI_H
