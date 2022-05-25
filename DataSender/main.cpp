#include <QCoreApplication>
#include"socketclass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    socketclass msock;
    msock.testsocket();
    return a.exec();
}
