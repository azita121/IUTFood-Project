#ifndef WEBSOCKETSERVER_H
#define WEBSOCKETSERVER_H

#include <QObject>
#include <QWebSocketServer>
#include <QWebSocket>
#include <QMap>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QDateTime>
#include "authsystem.h"

class WebSocketServer : public QObject
{
    Q_OBJECT

public:
    static WebSocketServer* getInstance();
    bool start(quint16 port = 8080);
    void stop();
    void broadcastOrderUpdate(const QString& orderId, const QString& status);
    void sendChatMessage(const QString& fromUserId, const QString& toUserId, const QString& message);

private:
    explicit WebSocketServer(QObject *parent = nullptr);
    ~WebSocketServer();
    static WebSocketServer* instance;

    QWebSocketServer* m_server;
    QMap<QString, QWebSocket*> m_clients; // userId -> WebSocket
    AuthSystem* m_authSystem;

    void handleNewConnection();
    void handleTextMessage(const QString& message, QWebSocket* client);
    void handleDisconnection();
    void authenticateClient(QWebSocket* client, const QString& token);
    void handleChatMessage(const QJsonObject& message);
    void handleOrderUpdate(const QJsonObject& message);
    void sendError(QWebSocket* client, const QString& error);
    void broadcastToUser(const QString& userId, const QJsonObject& message);
    void broadcastToRestaurant(const QString& restaurantId, const QJsonObject& message);
};

#endif // WEBSOCKETSERVER_H 