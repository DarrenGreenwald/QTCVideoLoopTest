#ifndef MYVIDEOWIDGET_H
#define MYVIDEOWIDGET_H

#include <QDebug>
#include <QObject>
#include <QWidget>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QTMultimedia/QMediaPlayer>

class MyVideoWidget : public QVideoWidget
{
    Q_OBJECT
public:
    explicit MyVideoWidget(QWidget *parent = 0);
    void setPlayer(QMediaPlayer *);

signals:

public slots:
    void mediaStateChanged(QMediaPlayer::State);
private:
    QMediaPlayer *player;
};

#endif // MYVIDEOWIDGET_H
