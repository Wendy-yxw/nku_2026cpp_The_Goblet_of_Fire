#ifndef GAMEINTRODUCTION_H
#define GAMEINTRODUCTION_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QTime>
#include <QLabel>
#include <QTimer>
#include <QPushButton>

namespace Ui {
class GameIntroduction;
}

class GameIntroduction : public QWidget
{
    Q_OBJECT

public:
    explicit GameIntroduction(QWidget *parent = nullptr);
    ~GameIntroduction();
    void Background();
    //QString characterImagePath1;
    //QString characterImagePath2;
    QString backgroundImagePath;
    void mainIntoduction();
    void Introduction1();
    void Introduction2();
    void Introduction3();

private:
    Ui::GameIntroduction *ui;
    QLabel *cupPopup;
    QPushButton *will;

private slots:
    void onButtonClick();

};



#endif // GAMEINTRODUCTION_H
