#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myserver = new QTcpServer(this);
    connect(myserver,SIGNAL(newConnection()),this,SLOT(newConnection()));
    if(myserver->listen(QHostAddress::Any,1234))
        qDebug()<<"server started";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newConnection()
{
    qDebug()<<"New Connection";
    socket = myserver->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(onReadReady()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
}

void MainWindow::onReadReady()
{
    QString recievedData="";
    recievedData.append(socket->readAll());
    qDebug()<<recievedData;
    this->ui->label->setText(recievedData);
}

void MainWindow::disconnected()
{
    socket->deleteLater();
    exit(0);
}
