#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QVector>
#include <memory>
#include "orderstatus.h"
#include "orderstatusobserver.h"

class DatabaseManager;
class AuthSystem;
class Invoker;

class Server : public QObject
{
    Q_OBJECT

public:
    static Server* getInstance();
    bool startServer(quint16 port = 8080);
    void stopServer();

private:
    explicit Server(QObject *parent = nullptr);
    ~Server();
    static Server* instance;

    QTcpServer* tcpServer;
    QMap<QTcpSocket*, QString> connectedClients; // socket -> userId mapping
    std::unique_ptr<DatabaseManager> databaseManager;
    std::unique_ptr<AuthSystem> authSystem;
    std::unique_ptr<Invoker> invoker;
    std::unique_ptr<OrderStatus> orderStatus;
    std::unique_ptr<OrderStatusObserver> orderStatusObserver;

    void handleNewConnection();
    void handleClientDisconnection();
    void handleClientMessage(QTcpSocket* clientSocket, const QByteArray& message);
    void processRequest(const QJsonObject& request, QTcpSocket* clientSocket);
    void sendResponse(QTcpSocket* clientSocket, const QJsonObject& response);
    void handleOrderStatusSubscription(const QString& orderId, QTcpSocket* clientSocket);
    void handleOrderStatusUnsubscription(const QString& orderId, QTcpSocket* clientSocket);

signals:
    void clientConnected(QTcpSocket* client);
    void clientDisconnected(QTcpSocket* client);
    void messageReceived(QTcpSocket* client, const QByteArray& message);

private slots:
    void onNewConnection();
    void onReadyRead();
    void onClientDisconnected();
};

#endif // SERVER_H 