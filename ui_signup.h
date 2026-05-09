/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *Hat;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_passwd;
    QLineEdit *lineEdit_surepasswd;
    QPushButton *sure_btn;
    QPushButton *back_btn;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(850, 640);
        Hat = new QLabel(signup);
        Hat->setObjectName("Hat");
        Hat->setGeometry(QRect(0, 0, 850, 640));
        label_2 = new QLabel(signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 40, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 30pt \"Edwardian Script ITC\";\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 110, 261, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 25pt \"Edwardian Script ITC\";"));
        label_4 = new QLabel(signup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 170, 151, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Microsoft YaHei UI\";"));
        label_5 = new QLabel(signup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 240, 131, 21));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Microsoft YaHei UI\";"));
        label_6 = new QLabel(signup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(530, 310, 81, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Microsoft YaHei UI\";"));
        lineEdit_username = new QLineEdit(signup);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(530, 190, 241, 31));
        lineEdit_passwd = new QLineEdit(signup);
        lineEdit_passwd->setObjectName("lineEdit_passwd");
        lineEdit_passwd->setGeometry(QRect(530, 260, 241, 31));
        lineEdit_surepasswd = new QLineEdit(signup);
        lineEdit_surepasswd->setObjectName("lineEdit_surepasswd");
        lineEdit_surepasswd->setGeometry(QRect(530, 330, 241, 31));
        sure_btn = new QPushButton(signup);
        sure_btn->setObjectName("sure_btn");
        sure_btn->setGeometry(QRect(530, 420, 241, 31));
        sure_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";"));
        back_btn = new QPushButton(signup);
        back_btn->setObjectName("back_btn");
        back_btn->setGeometry(QRect(530, 460, 241, 31));
        back_btn->setStyleSheet(QString::fromUtf8("color: rgb(29, 123, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";"));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        Hat->setText(QString());
        label_2->setText(QCoreApplication::translate("signup", "Hello!", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Build your wizard ID!", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Surepass", nullptr));
        sure_btn->setText(QCoreApplication::translate("signup", "Sure", nullptr));
        back_btn->setText(QCoreApplication::translate("signup", "Click here to Return Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
