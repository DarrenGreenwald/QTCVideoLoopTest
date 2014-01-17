#include "myvideowidget.h"

MyVideoWidget::MyVideoWidget(QWidget *parent) :
    QVideoWidget(parent)
{
}

void MyVideoWidget::mediaStateChanged(QMediaPlayer::State state)
{
    qDebug() << "Media state changed" << state;
    if(state==QMediaPlayer::StoppedState) {
        player->play();
    }
}

void MyVideoWidget::setPlayer(QMediaPlayer *player) {
    this->player=player;
}
