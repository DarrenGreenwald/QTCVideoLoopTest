#include <QApplication>
#include <QDebug>
#include <QObject>
#include <QWidget>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QTMultimedia/QMediaPlayer>
#include <QtGui/QMovie>

#include "myvideowidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMediaPlayer *player = new QMediaPlayer;

    MyVideoWidget *videoWidget = new MyVideoWidget;
    player->setVideoOutput(videoWidget);

    QObject::connect(player, SIGNAL(stateChanged(QMediaPlayer::State)),
                videoWidget, SLOT(mediaStateChanged(QMediaPlayer::State)));

    videoWidget->resize(320,200);
    videoWidget->show();
    videoWidget->setPlayer(player);
    player->setMedia(QUrl("file:///C:/Users/darren/Desktop/sample_mpeg.mp4"));
    player->play();

    return app.exec();
}

