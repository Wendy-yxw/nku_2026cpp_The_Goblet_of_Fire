/********************************************************************************
** Form generated from reading UI file 'chapter3.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAPTER3_H
#define UI_CHAPTER3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chapter3
{
public:
    QPushButton *Back;
    QPushButton *Begin;
    QProgressBar *timeBar;

    void setupUi(QWidget *Chapter3)
    {
        if (Chapter3->objectName().isEmpty())
            Chapter3->setObjectName("Chapter3");
        Chapter3->resize(850, 640);
        Back = new QPushButton(Chapter3);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(760, 600, 80, 31));
        Back->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(53, 200, 68, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        Begin = new QPushButton(Chapter3);
        Begin->setObjectName("Begin");
        Begin->setGeometry(QRect(760, 10, 80, 31));
        Begin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgba(53, 200, 68, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        timeBar = new QProgressBar(Chapter3);
        timeBar->setObjectName("timeBar");
        timeBar->setGeometry(QRect(767, 50, 71, 521));
        timeBar->setValue(24);

        retranslateUi(Chapter3);

        QMetaObject::connectSlotsByName(Chapter3);
    } // setupUi

    void retranslateUi(QWidget *Chapter3)
    {
        Chapter3->setWindowTitle(QCoreApplication::translate("Chapter3", "Form", nullptr));
        Back->setText(QCoreApplication::translate("Chapter3", "Back", nullptr));
        Begin->setText(QCoreApplication::translate("Chapter3", "Begin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chapter3: public Ui_Chapter3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAPTER3_H
