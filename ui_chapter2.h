/********************************************************************************
** Form generated from reading UI file 'chapter2.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAPTER2_H
#define UI_CHAPTER2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chapter2
{
public:
    QGraphicsView *graphicsView;
    QPushButton *Back;
    QProgressBar *progressBar;

    void setupUi(QWidget *Chapter2)
    {
        if (Chapter2->objectName().isEmpty())
            Chapter2->setObjectName("Chapter2");
        Chapter2->resize(850, 640);
        graphicsView = new QGraphicsView(Chapter2);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 850, 640));
        Back = new QPushButton(Chapter2);
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
        progressBar = new QProgressBar(Chapter2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(30, 10, 771, 16));
        progressBar->setValue(24);

        retranslateUi(Chapter2);

        QMetaObject::connectSlotsByName(Chapter2);
    } // setupUi

    void retranslateUi(QWidget *Chapter2)
    {
        Chapter2->setWindowTitle(QCoreApplication::translate("Chapter2", "Form", nullptr));
        Back->setText(QCoreApplication::translate("Chapter2", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chapter2: public Ui_Chapter2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAPTER2_H
