/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *Login_Title;
    QLabel *Welcome;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *signin_btn;
    QPushButton *signup_btn;
    QLabel *label;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(850, 640);
        Login->setStyleSheet(QString::fromUtf8("QWidget#Login {\n"
"    border-image: url(:/image/login_bg.jpg);\n"
"}"));
        Login_Title = new QLabel(Login);
        Login_Title->setObjectName("Login_Title");
        Login_Title->setGeometry(QRect(110, 90, 631, 171));
        Welcome = new QLabel(Login);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(160, 250, 521, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Edwardian Script ITC")});
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        Welcome->setFont(font);
        Welcome->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 36pt \"\345\215\216\346\226\207\351\232\266\344\271\246\";\n"
"font: 26pt \"Edwardian Script ITC\";"));
        lineEdit_username = new QLineEdit(Login);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(310, 320, 231, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"font: 9pt \"Kristen ITC\";\n"
"color: rgb(0, 0, 0);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_password = new QLineEdit(Login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(310, 380, 231, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Kristen ITC\";\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        signin_btn = new QPushButton(Login);
        signin_btn->setObjectName("signin_btn");
        signin_btn->setGeometry(QRect(310, 440, 101, 31));
        signin_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        signup_btn = new QPushButton(Login);
        signup_btn->setObjectName("signup_btn");
        signup_btn->setGeometry(QRect(439, 440, 101, 31));
        signup_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 850, 640));
        label->raise();
        Welcome->raise();
        lineEdit_username->raise();
        lineEdit_password->raise();
        signin_btn->raise();
        signup_btn->raise();
        Login_Title->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        Login_Title->setText(QString());
        Welcome->setText(QCoreApplication::translate("Login", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Welcome to the Wizarding World! </span></p></body></html>", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Login", " Please input your ID", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", " Please input your password", nullptr));
        signin_btn->setText(QCoreApplication::translate("Login", "Sign in", nullptr));
        signup_btn->setText(QCoreApplication::translate("Login", "Sign up", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
