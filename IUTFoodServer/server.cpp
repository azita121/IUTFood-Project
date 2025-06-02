#include "server.h"
#include "databasemanager.h"
#include "authsystem.h"
#include "invoker.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

Server* Server::instance = nullptr;

Server* Server::getInstance()
{
    if (instance == nullptr) {
        instance = new Server();
    }
    return instance;
}

Server::Server(QObject *parent)
    : QObject(parent)
    , tcpServer(new QTcpServer(this))
    , databaseManager(std::make_unique<DatabaseManager>())
    , authSystem(std::make_unique<AuthSystem>())
    , invoker(std::make_unique<Invoker>())
{
    connect(tcpServer, &QTcpServer::newConnection, this, &Server::onNewConnection);
}

Server::~Server()
{
    stopServer();
}

bool Server::startServer(quint16 port)
{
    if (!tcpServer->listen(QHostAddress::Any, port)) {
        qDebug() << "Server failed to start. Error:" << tcpServer->errorString();
        return false;
    }
    qDebug() << "Server started on port" << port;
    return true;
}

void Server::stopServer()
{
    if (tcpServer->isListening()) {
        tcpServer->close();
        qDebug() << "Server stopped";
    }
}

void Server::onNewConnection()
{
    QTcpSocket* clientSocket = tcpServer->nextPendingConnection();
    
    connect(clientSocket, &QTcpSocket::readyRead, this, &Server::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &Server::onClientDisconnected);
    
    connectedClients[clientSocket] = ""; // Empty userId initially
    emit clientConnected(clientSocket);
    
    qDebug() << "New client connected:" << clientSocket->peerAddress().toString();
}

void Server::onReadyRead()
{
    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (!clientSocket) return;

    QByteArray data = clientSocket->readAll();
    handleClientMessage(clientSocket, data);
}

void Server::onClientDisconnected()
{
    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (!clientSocket) return;

    connectedClients.remove(clientSocket);
    clientSocket->deleteLater();
    
    emit clientDisconnected(clientSocket);
    qDebug() << "Client disconnected:" << clientSocket->peerAddress().toString();
}

void Server::handleClientMessage(QTcpSocket* clientSocket, const QByteArray& message)
{
    QJsonDocument doc = QJsonDocument::fromJson(message);
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON message received";
        return;
    }

    QJsonObject request = doc.object();
    processRequest(request, clientSocket);
}

void Server::processRequest(const QJsonObject& request, QTcpSocket* clientSocket)
{
    QString type = request["type"].toString();
    QJsonObject response;

    if (type == "login") {
        // Handle login request
        QString username = request["username"].toString();
        QString password = request["password"].toString();
        
        // TODO: Implement actual authentication logic
        response["status"] = "success";
        response["message"] = "Login successful";
    }
    else if (type == "register") {
        // Handle registration request
        // TODO: Implement registration logic
        response["status"] = "success";
        response["message"] = "Registration successful";
    }
    // Add more request types as needed

    sendResponse(clientSocket, response);
}

void Server::sendResponse(QTcpSocket* clientSocket, const QJsonObject& response)
{
    QJsonDocument doc(response);
    clientSocket->write(doc.toJson());
} 