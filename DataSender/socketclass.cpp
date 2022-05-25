#include "socketclass.h"

socketclass::socketclass(QObject *parent) : QObject(parent)
{

}


void socketclass::testsocket()
{
    mysocket = new QTcpSocket(this);
    connect(mysocket,SIGNAL(connected()),this,SLOT(connected()));
    connect(mysocket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(mysocket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));
    connect(mysocket,SIGNAL(readyRead()),this,SLOT(readyRead()));

    qDebug()<<"connecting";

    mysocket->connectToHost("127.0.0.1",1234);

    if(!mysocket->waitForConnected(2000)) qDebug()<<"connection failed"<<mysocket->errorString();
}


//slots after this
void socketclass::connected()
{
    qDebug()<<"connected";

    mysocket->write("STRING TO BE SENT");
    //	mysocket->waitForBytesWritten(1000);
}
void socketclass::disconnected()
{
    qDebug()<<"disconnected";
}
void socketclass::bytesWritten(qint64 bytes)
{
    qDebug()<<"we wrote" << bytes;
}
void socketclass::readyRead()
{
    qDebug() << "reading";
    qDebug() << mysocket->readAll();
}
