#include <QCoreApplication>
#include <QDebug>
#include "server.h"
#include "databasemanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Initialize database connection
    DatabaseManager* dbManager = DatabaseManager::getInstance();
    if (!dbManager->connect("", "database.sqlite", "", "")) {  // SQLite connection parameters
        qDebug() << "Failed to connect to database. Exiting...";
        return 1;
    }

    // Initialize database schema
    if (!dbManager->initializeSchema()) {
        qDebug() << "Failed to initialize database schema. Exiting...";
        return 2;
    }

    // Start server
    Server* server = Server::getInstance();
    if (!server->start(8080, 8081)) {
        qDebug() << "Failed to start server";
        return -1;
    }

    qDebug() << "IUT Food Server is running on TCP port 8080 and WebSocket port 8081";

    return a.exec();
} 