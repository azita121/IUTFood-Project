#ifndef AUTHSYSTEM_H
#define AUTHSYSTEM_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QCryptographicHash>
#include "databasemanager.h"

class AuthSystem : public QObject
{
    Q_OBJECT

public:
    static AuthSystem* getInstance();
    
    // Authentication methods
    bool login(const QString& username, const QString& password);
    bool registerUser(const QString& username, const QString& password, const QString& email, const QString& userType);
    bool logout(const QString& userId);
    
    // User management
    bool updateProfile(const QString& userId, const QVariantMap& updates);
    bool changePassword(const QString& userId, const QString& oldPassword, const QString& newPassword);
    bool deleteAccount(const QString& userId);
    
    // Session management
    bool isUserLoggedIn(const QString& userId) const;
    QString getCurrentUserType(const QString& userId) const;
    QString getCurrentUsername(const QString& userId) const;

private:
    explicit AuthSystem(QObject *parent = nullptr);
    ~AuthSystem();
    static AuthSystem* instance;

    QMap<QString, QString> activeSessions; // userId -> userType mapping
    DatabaseManager* dbManager;

    QString hashPassword(const QString& password) const;
    bool validatePassword(const QString& password) const;
    bool validateUsername(const QString& username) const;
    bool validateEmail(const QString& email) const;
};

#endif // AUTHSYSTEM_H 