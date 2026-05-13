#include "restroom.h"
#include "ui_restroom.h"
#include "choosescene.h"
#include "gameintroduction.h"
#include "login.h"
#include <QTimer>

enum Color{
    G,H,S,R
};

RestRoom::RestRoom(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RestRoom)
{
    ui->setupUi(this);

    // 初始化音频
    bgmPlayer = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    bgmPlayer->setAudioOutput(audioOutput);
    audioOutput->setVolume(0.7f);

    // 只在构造函数绑定一次音乐循环，避免重复绑定卡死
    connect(bgmPlayer, &QMediaPlayer::mediaStatusChanged, this, [=](QMediaPlayer::MediaStatus status){
        if(status == QMediaPlayer::EndOfMedia)
        {
            bgmPlayer->setPosition(0);
            bgmPlayer->play();
        }
    });

    // 初始学院样式
    color = G;
    ui->GRYFFINDOR->setStyleSheet("background:rgb(180,4,4)");
    ui->Back->setStyleSheet("background:rgb(180,4,4);color:rgb(255, 255, 255);");
    ui->Back_2->setStyleSheet("background:rgb(180,4,4);color:rgb(255, 255, 255);");
    setTheme();

    connect(ui->pushButton_3,&QPushButton::clicked,this,&RestRoom::StudyRoom);

    // 初始化指针
    lcd = nullptr;
}

RestRoom::~RestRoom()
{
    delete ui;
}

void RestRoom::setTheme()
{
    backgroundColor=ChooseBackgroundColor();
    button=ChooseButtonColor();

    QPixmap *pix=new QPixmap(backgroundColor);
    QSize sz=ui->RestRoom_background->size();
    ui->RestRoom_background->setPixmap(pix->scaled(sz));

    ui->pushButton->setStyleSheet(button);
    ui->pushButton_2->setStyleSheet(button);
    ui->pushButton_3->setStyleSheet(button);
    ui->pushButton->setFont(QFont("Harry P",20));
    ui->pushButton_2->setFont(QFont("Harry P",20));
    ui->pushButton_3->setFont(QFont("Harry P",20));
}

QString RestRoom::ChooseBackgroundColor()
{
    switch (color) {
    case 0: return ":/image/RestRoom_G.jpg";
    case 1: return ":/image/RestRoom_H.jpg";
    case 2: return ":/image/RestRoom_S.jpg";
    case 3: return ":/image/RestRoom_R.jpg";
    default: return ":/image/RestRoom_G.jpg";
    }
}

QString RestRoom::ChooseButtonColor()
{
    switch(color){
    case 0:
        return "background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0,"
               "stop:0.0112994 rgba(180, 4, 4, 255),"
               "stop:1 rgba(255, 255, 255, 255));"
               "color: rgb(255, 255, 255);"
               "border:0px groove gray;border-radius:7px;padding:2px 4px;";
    case 1:
        return "background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0,"
               "stop:0.0112994 rgba(255, 205, 79, 255),"
               "stop:1 rgba(255, 255, 255, 255));"
               "color: rgb(255, 255, 255);"
               "border:0px groove gray;border-radius:7px;padding:2px 4px;";
    case 2:
        return "background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0,"
               "stop:0.0112994 rgba(53, 200, 68, 255),"
               "stop:1 rgba(255, 255, 255, 255));"
               "color: rgb(255, 255, 255);"
               "border:0px groove gray;border-radius:7px;padding:2px 4px;";
    case 3:
        return "background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0,"
               "stop:0.0112994 rgba(64, 145, 252, 255),"
               "stop:1 rgba(255, 255, 255, 255));"
               "color: rgb(255, 255, 255);"
               "border:0px groove gray;border-radius:7px;padding:2px 4px;";
    default: return "";
    }
}

void RestRoom::on_pushButton_clicked()
{
    this->close();
    ChooseScene *c=new ChooseScene;
    c->show();
}

void RestRoom::on_pushButton_2_clicked()
{
    this->close();
    GameIntroduction *g=new GameIntroduction;
    g->mainIntoduction();
    g->show();
}

void RestRoom::on_GRYFFINDOR_clicked()
{
    color=Color::G;
    ui->GRYFFINDOR->setStyleSheet("background:rgb(180,4,4)");
    ui->Back->setStyleSheet("background:rgb(180,4,4);color: rgb(255, 255, 255);");
    ui->Back_2->setStyleSheet("background:rgb(180,4,4);color: rgb(255, 255, 255);");
    ui->HUFFLEPUFF->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->SLYTHERIN->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->RAVENCLAW->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    setTheme();
}

void RestRoom::on_RAVENCLAW_clicked()
{
    color=Color::R;
    ui->RAVENCLAW->setStyleSheet("background:rgb(64,145,252)");
    ui->Back->setStyleSheet("background:rgb(64,145,252);color: rgb(255, 255, 255);");
    ui->Back_2->setStyleSheet("background:rgb(64,145,252);color: rgb(255, 255, 255);");
    ui->GRYFFINDOR->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->HUFFLEPUFF->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->SLYTHERIN->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    setTheme();
}

void RestRoom::on_SLYTHERIN_clicked()
{
    color=Color::S;
    ui->SLYTHERIN->setStyleSheet("background:rgb(53,200,68)");
    ui->Back->setStyleSheet("background:rgb(53,200,68);color: rgb(255, 255, 255);");
    ui->Back_2->setStyleSheet("background:rgb(53,200,68);color: rgb(255, 255, 255);");
    ui->HUFFLEPUFF->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->RAVENCLAW->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->GRYFFINDOR->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    setTheme();
}

void RestRoom::on_HUFFLEPUFF_clicked()
{
    color=Color::H;
    ui->HUFFLEPUFF->setStyleSheet("background:rgb(255,205,79)");
    ui->Back->setStyleSheet("background:rgb(255,205,79);color: rgb(255, 255, 255);");
    ui->Back_2->setStyleSheet("background:rgb(255,205,79);color: rgb(255, 255, 255);");
    ui->SLYTHERIN->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->RAVENCLAW->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    ui->GRYFFINDOR->setStyleSheet("background-color: rgba(255, 255, 255, 150);border:0;");
    setTheme();
}

void RestRoom::on_Back_clicked()
{
    this->close();
    Login *l=new Login;
    l->show();
}

void RestRoom::StudyRoom()
{
    // 隐藏原有按钮
    ui->GRYFFINDOR->hide();
    ui->HUFFLEPUFF->hide();
    ui->RAVENCLAW->hide();
    ui->SLYTHERIN->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->Back->hide();
    ui->Back_2->show();

    // 只创建一次LCD
    if(!lcd)
    {
        lcd = new QLCDNumber(this);
        lcd->setGeometry(200, 100, 450, 440);
    }
    lcd->show();

    showTime();
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &RestRoom::showTime);
    timer->start(1000);

    // 播放音乐
    bgmPlayer->stop();
    bgmPlayer->setSource(QUrl("qrc:/music/y1349.wav"));
    bgmPlayer->play();
}

void RestRoom::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second()%2)==0)
    {
        text[2]=' ';
    }
    lcd->display(text);
}

void RestRoom::on_Back_2_clicked()
{
    // 强制停止音乐
    bgmPlayer->stop();
    bgmPlayer->setPosition(0);

    // 恢复所有按钮显示
    ui->GRYFFINDOR->show();
    ui->HUFFLEPUFF->show();
    ui->RAVENCLAW->show();
    ui->SLYTHERIN->show();
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->Back->show();

    // 安全销毁时钟
    if(lcd)
    {
        lcd->deleteLater();
        lcd = nullptr;
    }
}