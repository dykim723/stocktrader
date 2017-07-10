#include <QCoreApplication>
#include <QtNetwork>
#include <QtDebug>
#include "httpnetwork.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    HttpNetwork hobject;

    hobject.startRequest(QUrl("http://dart.fss.or.kr/api/search.json?auth=2da4ea253e0ce75245291a2c1d1b563a090ee647"));

    return a.exec();
}
