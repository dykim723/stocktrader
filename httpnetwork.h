#ifndef HTTPNETWORK_H
#define HTTPNETWORK_H

#endif // HTTPNETWORK_H

#include <QtNetwork>

class HttpNetwork : public QObject
{
public:
    explicit HttpNetwork() {}
    void startRequest(QUrl urlData);
    void replyFinished();
private:
    QUrl url;
    QNetworkAccessManager qnam;
    QNetworkReply *reply;
};
