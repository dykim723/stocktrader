#include "httpnetwork.h"



void HttpNetwork::startRequest(QUrl urlData)
{
    QNetworkRequest request(urlData);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    reply = qnam.get(request);
    connect(reply, &QNetworkReply::finished, this, &HttpNetwork::replyFinished);
}


void HttpNetwork::replyFinished()
{
    QByteArray response_data = reply->readAll();
    QJsonDocument jd = QJsonDocument::fromJson(response_data);
    QJsonObject jobj = jd.object();
    QJsonValue val = jobj.value(QString("list"));
    qWarning() << val;
}
