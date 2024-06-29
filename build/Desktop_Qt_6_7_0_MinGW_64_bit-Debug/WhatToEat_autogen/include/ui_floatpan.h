/********************************************************************************
** Form generated from reading UI file 'floatpan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOATPAN_H
#define UI_FLOATPAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_floatpan
{
public:
    QTextEdit *textEdit;

    void setupUi(QWidget *floatpan)
    {
        if (floatpan->objectName().isEmpty())
            floatpan->setObjectName("floatpan");
        floatpan->resize(240, 320);
        textEdit = new QTextEdit(floatpan);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 160, 241, 151));

        retranslateUi(floatpan);

        QMetaObject::connectSlotsByName(floatpan);
    } // setupUi

    void retranslateUi(QWidget *floatpan)
    {
        floatpan->setWindowTitle(QCoreApplication::translate("floatpan", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class floatpan: public Ui_floatpan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOATPAN_H
