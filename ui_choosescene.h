/********************************************************************************
** Form generated from reading UI file 'choosescene.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSESCENE_H
#define UI_CHOOSESCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseScene
{
public:
    QPushButton *chapter1_btn;
    QPushButton *chapter2_btn;
    QPushButton *chapter3_btn;
    QPushButton *pushButton;

    void setupUi(QWidget *ChooseScene)
    {
        if (ChooseScene->objectName().isEmpty())
            ChooseScene->setObjectName("ChooseScene");
        ChooseScene->resize(850, 567);
        chapter1_btn = new QPushButton(ChooseScene);
        chapter1_btn->setObjectName("chapter1_btn");
        chapter1_btn->setGeometry(QRect(425, 320, 150, 30));
        chapter1_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 178, 102, 255), stop:0.579545 rgba(228, 144, 60, 236), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"border:0px groove gray;\n"
"border-radius:7px;padding:2px 4px;\n"
"font_size: 15px;\n"
"text-align: center;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        chapter2_btn = new QPushButton(ChooseScene);
        chapter2_btn->setObjectName("chapter2_btn");
        chapter2_btn->setGeometry(QRect(200, 210, 150, 30));
        chapter2_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 178, 102, 255), stop:0.579545 rgba(228, 144, 60, 236), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"border:0px groove gray;\n"
"border-radius:7px;\n"
"padding:2px 4px;\n"
"font_size: 15px;\n"
"text-align: center;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        chapter3_btn = new QPushButton(ChooseScene);
        chapter3_btn->setObjectName("chapter3_btn");
        chapter3_btn->setGeometry(QRect(650, 150, 150, 30));
        chapter3_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 178, 102, 255), stop:0.579545 rgba(228, 144, 60, 236), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 255, 255);\n"
"border:0px groove gray;\n"
"border-radius:7px;padding:2px 4px;\n"
"font_size: 15px;\n"
"text-align: center;\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));
        pushButton = new QPushButton(ChooseScene);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 520, 851, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(123, 85, 38);\n"
"font: 24pt \"Harry P\";\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));

        retranslateUi(ChooseScene);

        QMetaObject::connectSlotsByName(ChooseScene);
    } // setupUi

    void retranslateUi(QWidget *ChooseScene)
    {
        ChooseScene->setWindowTitle(QCoreApplication::translate("ChooseScene", "Form", nullptr));
        chapter1_btn->setText(QCoreApplication::translate("ChooseScene", "CHAPTER 1", nullptr));
        chapter2_btn->setText(QCoreApplication::translate("ChooseScene", "CHAPTER 2", nullptr));
        chapter3_btn->setText(QCoreApplication::translate("ChooseScene", "CHAPTER 3", nullptr));
        pushButton->setText(QCoreApplication::translate("ChooseScene", "Back to the Rest Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseScene: public Ui_ChooseScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESCENE_H
