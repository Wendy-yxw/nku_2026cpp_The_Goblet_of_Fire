/********************************************************************************
** Form generated from reading UI file 'chapter1.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAPTER1_H
#define UI_CHAPTER1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chapter1
{
public:
    QPushButton *Back;
    QWidget *centralWidget;
    QPushButton *hints;
    QProgressBar *timeBar;
    QLabel *Time_label;
    QLabel *snp;

    void setupUi(QWidget *Chapter1)
    {
        if (Chapter1->objectName().isEmpty())
            Chapter1->setObjectName("Chapter1");
        Chapter1->resize(850, 640);
        Back = new QPushButton(Chapter1);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(760, 600, 80, 31));
        Back->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";\n"
""));
        centralWidget = new QWidget(Chapter1);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(30, 120, 561, 491));
        hints = new QPushButton(centralWidget);
        hints->setObjectName("hints");
        hints->setGeometry(QRect(0, 320, 561, 31));
        hints->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        timeBar = new QProgressBar(Chapter1);
        timeBar->setObjectName("timeBar");
        timeBar->setGeometry(QRect(110, 20, 701, 16));
        timeBar->setValue(24);
        Time_label = new QLabel(Chapter1);
        Time_label->setObjectName("Time_label");
        Time_label->setGeometry(QRect(40, 10, 71, 31));
        Time_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10 25pt \"Harry P\";"));
        snp = new QLabel(Chapter1);
        snp->setObjectName("snp");
        snp->setGeometry(QRect(440, 120, 411, 521));
        snp->raise();
        Back->raise();
        centralWidget->raise();
        timeBar->raise();
        Time_label->raise();

        retranslateUi(Chapter1);

        QMetaObject::connectSlotsByName(Chapter1);
    } // setupUi

    void retranslateUi(QWidget *Chapter1)
    {
        Chapter1->setWindowTitle(QCoreApplication::translate("Chapter1", "Form", nullptr));
        Back->setText(QCoreApplication::translate("Chapter1", "Back", nullptr));
        hints->setText(QCoreApplication::translate("Chapter1", "Hints", nullptr));
        Time_label->setText(QCoreApplication::translate("Chapter1", "Time", nullptr));
        snp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chapter1: public Ui_Chapter1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAPTER1_H
