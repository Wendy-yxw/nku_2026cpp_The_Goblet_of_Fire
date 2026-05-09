#include "chapter1.h"
#include "ui_chapter1.h"
#include "choosescene.h"
#include "gameintroduction.h"
#include <QTimer>
#include <QFile>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QMessageBox>

Chapter1::Chapter1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chapter1)
{
    ui->setupUi(this);

    //设置背景图片
    QString imagePath=":/image/PotionClass.jpg";
    if (QFile::exists(imagePath)){
        QPixmap backgroundImage(imagePath);
        if (!backgroundImage.isNull()) {
            backgroundImage = backgroundImage.scaled(this->size(), Qt::KeepAspectRatioByExpanding);
            QPalette palette;
            palette.setBrush(this->backgroundRole(), QBrush(backgroundImage));
            this->setPalette(palette);
        }
    }

    QPixmap *pix=new QPixmap(":/image/snp.png");
    QSize sz=ui->snp->size();
    ui->snp->setPixmap(pix->scaled(sz));

    initGame();
}

Chapter1::~Chapter1()
{
    delete ui;
}

void Chapter1::initGame(){
    game=new Chapter1GameModel;
    game->startGame();

    for (int i=0;i<MAX_ROW*MAX_COL;i++){
        iconButton[i]=new IconButton(this);
        iconButton[i]->setGeometry(kLeftMargin+(i%MAX_COL)*kIconSize,kTopMargin+(i/MAX_COL)*kIconSize,kIconSize,kIconSize);
        iconButton[i]->xID=i%MAX_COL;
        iconButton[i]->yID=i/MAX_COL;

        iconButton[i]->show();

        if (game->getGameMap()[i]){
            QPixmap iconPix;
            QString fileString = QStringLiteral(":/image/Chapter1/%1.png").arg(game->getGameMap()[i]);
            iconPix.load(fileString);
            QIcon icon(iconPix);
            iconButton[i]->setIcon(icon);
            iconButton[i]->setIconSize(QSize(kIconSize,kIconSize));
            connect(iconButton[i],SIGNAL(pressed()),this,SLOT(onIconButtonPressed()));
        }else{
            iconButton[i]->hide();
        }
    }

    ui->timeBar->setMaximum(kGameTimeTotal);
    ui->timeBar->setMinimum(0);
    ui->timeBar->setValue(kGameTimeTotal);
    ui->timeBar->setStyleSheet("QProgressBar{border-radius:5px;background:white;} QProgressBar::chunk{border-radius:5px;background:blue}");

    gameTimer=new QTimer(this);
    connect(gameTimer, SIGNAL(timeout()), this, SLOT(GameTimeEvent()));
    gameTimer->start(kGameTimerInterval);

    isLinking = false;
    preIcon = nullptr;
    curIcon = nullptr;
}

// ====================== 修复胜利动画（防止闪退） ======================
void Chapter1::VictorScene()
{
    int centerX=width()/2;
    int centerY=height()/2;

    QLabel *label=new QLabel(this); // 必须指定父窗口 this
    QPixmap Origin(":/image/victory.png");
    QPixmap pixmap=Origin.scaled(Origin.size()*0.8,Qt::KeepAspectRatio);
    label->setPixmap(pixmap);

    QPropertyAnimation *victoryAnimation=new QPropertyAnimation(label,"geometry",this);
    victoryAnimation->setDuration(1000);
    victoryAnimation->setStartValue(QRect(centerX - pixmap.width()/2, -pixmap.height(), pixmap.width(), pixmap.height()));
    victoryAnimation->setEndValue(QRect(centerX - pixmap.width()/2, centerY - pixmap.height()/2, pixmap.width(), pixmap.height()));
    victoryAnimation->setEasingCurve(QEasingCurve::OutBounce);

    // 自动清理，防止内存泄漏
    connect(victoryAnimation, &QPropertyAnimation::finished, victoryAnimation, &QObject::deleteLater);
    connect(victoryAnimation, &QPropertyAnimation::finished, label, &QObject::deleteLater);

    label->show();
    victoryAnimation->start();
}

// ====================== 修复结束动画（防止闪退） ======================
void Chapter1::GameOverScene()
{
    int centerX=width()/2;
    int centerY=height()/2;

    QLabel *label=new QLabel(this); // 必须指定父窗口
    QPixmap Origin(":/image/GameOver.png");
    QPixmap Pixmap=Origin.scaled(Origin.size(),Qt::KeepAspectRatio);
    label->setPixmap(Pixmap);

    QPropertyAnimation *overAnimation=new QPropertyAnimation(label,"geometry",this);
    overAnimation->setDuration(1000);
    overAnimation->setStartValue(QRect(centerX - Pixmap.width()/2, -Pixmap.height(), Pixmap.width(), Pixmap.height()));
    overAnimation->setEndValue(QRect(centerX - Pixmap.width()/2, centerY - Pixmap.height()/2, Pixmap.width(), Pixmap.height()));
    overAnimation->setEasingCurve(QEasingCurve::OutBounce);

    connect(overAnimation, &QPropertyAnimation::finished, overAnimation, &QObject::deleteLater);
    connect(overAnimation, &QPropertyAnimation::finished, label, &QObject::deleteLater);

    label->show();
    overAnimation->start();
}

void Chapter1::on_Back_clicked()
{
    gameTimer->stop();  // 退出前必须停止计时器！！
    this->close();
    ChooseScene *c=new ChooseScene;
    c->show();
}

void Chapter1::GameTimeEvent()
{
    if (ui->timeBar->value() <= 0){
        gameTimer->stop();
        GameOverScene();
        return;
    }
    ui->timeBar->setValue(ui->timeBar->value() - kGameTimerInterval);
}

void Chapter1::handleLinkEffect(){
    if (!preIcon || !curIcon) return;

    preIcon->hide();
    curIcon->hide();

    preIcon->setStyleSheet("");
    curIcon->setStyleSheet("");

    preIcon = nullptr;
    curIcon = nullptr;

    isLinking = false;
    update();
}

// ====================== 修复点击逻辑（卡死、无响应的元凶） ======================
void Chapter1::onIconButtonPressed(){
    if (isLinking) return; // 正在连线时不能点击

    IconButton *clickedBtn = dynamic_cast<IconButton*>(sender());
    if (!clickedBtn) return;

    // 第一次点击
    if (preIcon == nullptr){
        preIcon = clickedBtn;
        preIcon->setStyleSheet("background-color: rgba(255,255,12,161)");
        return;
    }

    // 点击同一个 → 取消
    if (preIcon == clickedBtn){
        preIcon->setStyleSheet("");
        preIcon = nullptr;
        return;
    }

    // 第二次点击
    curIcon = clickedBtn;
    curIcon->setStyleSheet("background-color: rgba(255,255,12,161)");

    // 可以连接
    if (game->linkTwoTiles(preIcon->xID, preIcon->yID, curIcon->xID, curIcon->yID)){
        isLinking = true;
        update();
        QTimer::singleShot(kLinkTimerDelay, this, &Chapter1::handleLinkEffect);

        // 胜利
        if (game->isWin()){
            gameTimer->stop();
            VictorScene();
            QMessageBox::information(this,"great!You're an intelligent wizard!","Now go to the next level with your potions!");
            return;
        }

        // 僵局
        if (game->isFrozen()){
            gameTimer->stop();
            GameOverScene();
            QMessageBox::information(this,"oops","dead game,try again");
        }
    }
    else{
        // 不可连接 → 清空
        preIcon->setStyleSheet("");
        curIcon->setStyleSheet("");
        preIcon = nullptr;
        curIcon = nullptr;
    }
}

// ====================== 修复 hint 越界崩溃 ======================
void Chapter1::on_hints_clicked()
{
    int *hints = game->getHint();
    if (!hints) return;

    // 安全判断，防止数组越界
    for (int i=0;i<4;i++){
        if (hints[i] < 0) return;
    }

    int srcX=hints[0];
    int srcY=hints[1];
    int dstX=hints[2];
    int dstY=hints[3];

    int srcIdx = srcY * MAX_COL + srcX;
    int dstIdx = dstY * MAX_COL + dstX;

    if (srcIdx >= 0 && srcIdx < MAX_ROW*MAX_COL)
        iconButton[srcIdx]->setStyleSheet("background-color: rgba(255, 0, 0, 255)");

    if (dstIdx >= 0 && dstIdx < MAX_ROW*MAX_COL)
        iconButton[dstIdx]->setStyleSheet("background-color: rgba(255, 0, 0, 255)");
}