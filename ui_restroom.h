/********************************************************************************
** Form generated from reading UI file 'restroom.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTROOM_H
#define UI_RESTROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RestRoom
{
public:
    QLabel *RestRoom_background;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *GRYFFINDOR;
    QPushButton *SLYTHERIN;
    QPushButton *RAVENCLAW;
    QPushButton *HUFFLEPUFF;
    QPushButton *Back;
    QPushButton *Back_2;

    void setupUi(QWidget *RestRoom)
    {
        if (RestRoom->objectName().isEmpty())
            RestRoom->setObjectName("RestRoom");
        RestRoom->resize(850, 640);
        RestRoom_background = new QLabel(RestRoom);
        RestRoom_background->setObjectName("RestRoom_background");
        RestRoom_background->setGeometry(QRect(0, 0, 850, 640));
        pushButton = new QPushButton(RestRoom);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 300, 201, 61));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(RestRoom);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 210, 201, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(180, 4, 4, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        pushButton_2->setAutoDefault(true);
        pushButton_3 = new QPushButton(RestRoom);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(330, 390, 201, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(180, 4, 4, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        GRYFFINDOR = new QPushButton(RestRoom);
        GRYFFINDOR->setObjectName("GRYFFINDOR");
        GRYFFINDOR->setGeometry(QRect(70, 10, 131, 21));
        GRYFFINDOR->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border-color: rgba(255, 255, 255, 0);"));
        SLYTHERIN = new QPushButton(RestRoom);
        SLYTHERIN->setObjectName("SLYTHERIN");
        SLYTHERIN->setGeometry(QRect(260, 10, 131, 21));
        SLYTHERIN->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border-color: rgba(255, 255, 255, 0);\n"
""));
        RAVENCLAW = new QPushButton(RestRoom);
        RAVENCLAW->setObjectName("RAVENCLAW");
        RAVENCLAW->setGeometry(QRect(450, 10, 131, 21));
        RAVENCLAW->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border-color: rgba(255, 255, 255, 0);"));
        HUFFLEPUFF = new QPushButton(RestRoom);
        HUFFLEPUFF->setObjectName("HUFFLEPUFF");
        HUFFLEPUFF->setGeometry(QRect(640, 10, 131, 21));
        HUFFLEPUFF->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 150);\n"
"border-color: rgba(255, 255, 255, 0);"));
        Back = new QPushButton(RestRoom);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(760, 600, 80, 31));
        Back->setStyleSheet(QString::fromUtf8(""));
        Back_2 = new QPushButton(RestRoom);
        Back_2->setObjectName("Back_2");
        Back_2->setGeometry(QRect(760, 600, 80, 31));
        Back_2->setStyleSheet(QString::fromUtf8(""));
        RestRoom_background->raise();
        Back_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        GRYFFINDOR->raise();
        SLYTHERIN->raise();
        RAVENCLAW->raise();
        HUFFLEPUFF->raise();
        Back->raise();

        retranslateUi(RestRoom);

        QMetaObject::connectSlotsByName(RestRoom);
    } // setupUi

    void retranslateUi(QWidget *RestRoom)
    {
        RestRoom->setWindowTitle(QCoreApplication::translate("RestRoom", "Form", nullptr));
        RestRoom_background->setText(QString());
        pushButton->setText(QCoreApplication::translate("RestRoom", "Game Map", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RestRoom", "Embark on the Adventure", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RestRoom", "Study Room", nullptr));
        GRYFFINDOR->setText(QCoreApplication::translate("RestRoom", "GRYFFINDOR", nullptr));
        SLYTHERIN->setText(QCoreApplication::translate("RestRoom", "SLYTHERIN", nullptr));
        RAVENCLAW->setText(QCoreApplication::translate("RestRoom", "RAVENCLAW", nullptr));
        HUFFLEPUFF->setText(QCoreApplication::translate("RestRoom", "HUFFLEPUFF", nullptr));
        Back->setText(QCoreApplication::translate("RestRoom", "BACK", nullptr));
        Back_2->setText(QCoreApplication::translate("RestRoom", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestRoom: public Ui_RestRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTROOM_H
