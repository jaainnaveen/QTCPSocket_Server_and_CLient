#ifndef SOCKETCLASS_H
#define SOCKETCLASS_H

#include <QAbstractSocket>
#include <QTcpSocket>
#include <QObject>
#include <QtCore>
#include <QDebug>

class socketclass : public QObject
{
    Q_OBJECT
public:
    explicit socketclass(QObject *parent = nullptr);
    void testsocket();
signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();

private:
    QTcpSocket *mysocket;
};


#endif // SOCKETCLASS_H
