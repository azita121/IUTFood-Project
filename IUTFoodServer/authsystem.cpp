#include "authsystem.h"
#include <QDebug>
#include <QRegularExpression>

AuthSystem* AuthSystem::instance = nullptr;

AuthSystem* AuthSystem::getInstance()
{
    if (instance == nullptr) {
        instance = new AuthSystem();
    }
    return instance;
}

AuthSystem::AuthSystem(QObject *parent)
    : QObject(parent)
    , dbManager(DatabaseManager::getInstance())
{
}

AuthSystem::~AuthSystem()
{
    // Clear all active sessions
    activeSessions.clear();
}

bool AuthSystem::login(const QString& username, const QString& password)
{
    // Validate input
    if (!validateUsername(username) || !validatePassword(password)) {
        return false;
    }

    // Hash the password
    QString hashedPassword = hashPassword(password);

    // Authenticate with database
    if (!dbManager->authenticateUser(username, hashedPassword)) {
        qDebug() << "Authentication failed for user:" << username;
        return false;
    }

    // Get user type from database (you'll need to add this method to DatabaseManager)
    QString userType = "customer"; // Default to customer, implement proper user type retrieval

    // Create session
    QString userId = username; // Use username as userId for now, implement proper userId generation
    activeSessions[userId] = userType;

    qDebug() << "User logged in successfully:" << username;
    return true;
}

bool AuthSystem::registerUser(const QString& username, const QString& password, const QString& email, const QString& userType)
{
    // Validate input
    if (!validateUsername(username) || !validatePassword(password) || !validateEmail(email)) {
        return false;
    }

    // Hash the password
    QString hashedPassword = hashPassword(password);

    // Create user in database
    if (!dbManager->createUser(username, hashedPassword, email, userType)) {
        qDebug() << "Failed to create user:" << username;
        return false;
    }

    qDebug() << "User registered successfully:" << username;
    return true;
}

bool AuthSystem::logout(const QString& userId)
{
    if (!activeSessions.contains(userId)) {
        qDebug() << "No active session found for user:" << userId;
        return false;
    }

    activeSessions.remove(userId);
    qDebug() << "User logged out successfully:" << userId;
    return true;
}

bool AuthSystem::updateProfile(const QString& userId, const QVariantMap& updates)
{
    if (!isUserLoggedIn(userId)) {
        qDebug() << "User not logged in:" << userId;
        return false;
    }

    // Validate updates
    if (updates.contains("password")) {
        if (!validatePassword(updates["password"].toString())) {
            return false;
        }
        updates["password"] = hashPassword(updates["password"].toString());
    }

    if (updates.contains("email") && !validateEmail(updates["email"].toString())) {
        return false;
    }

    // Update user in database
    if (!dbManager->updateUser(userId, updates)) {
        qDebug() << "Failed to update profile for user:" << userId;
        return false;
    }

    qDebug() << "Profile updated successfully for user:" << userId;
    return true;
}

bool AuthSystem::changePassword(const QString& userId, const QString& oldPassword, const QString& newPassword)
{
    if (!isUserLoggedIn(userId)) {
        qDebug() << "User not logged in:" << userId;
        return false;
    }

    // Validate new password
    if (!validatePassword(newPassword)) {
        return false;
    }

    // Verify old password
    QString hashedOldPassword = hashPassword(oldPassword);
    // TODO: Implement password verification with database

    // Update password
    QVariantMap updates;
    updates["password"] = hashPassword(newPassword);
    return updateProfile(userId, updates);
}

bool AuthSystem::deleteAccount(const QString& userId)
{
    if (!isUserLoggedIn(userId)) {
        qDebug() << "User not logged in:" << userId;
        return false;
    }

    // Delete user from database
    if (!dbManager->deleteUser(userId)) {
        qDebug() << "Failed to delete account for user:" << userId;
        return false;
    }

    // Remove from active sessions
    activeSessions.remove(userId);
    qDebug() << "Account deleted successfully for user:" << userId;
    return true;
}

bool AuthSystem::isUserLoggedIn(const QString& userId) const
{
    return activeSessions.contains(userId);
}

QString AuthSystem::getCurrentUserType(const QString& userId) const
{
    return activeSessions.value(userId, "");
}

QString AuthSystem::getCurrentUsername(const QString& userId) const
{
    // TODO: Implement proper username retrieval from database
    return userId;
}

QString AuthSystem::hashPassword(const QString& password) const
{
    return QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());
}

bool AuthSystem::validatePassword(const QString& password) const
{
    // Password must be at least 8 characters long and contain at least one number and one special character
    QRegularExpression regex("^(?=.*[0-9])(?=.*[!@#$%^&*])[a-zA-Z0-9!@#$%^&*]{8,}$");
    return regex.match(password).hasMatch();
}

bool AuthSystem::validateUsername(const QString& username) const
{
    // Username must be 3-20 characters long and contain only letters, numbers, and underscores
    QRegularExpression regex("^[a-zA-Z0-9_]{3,20}$");
    return regex.match(username).hasMatch();
}

bool AuthSystem::validateEmail(const QString& email) const
{
    // Basic email validation
    QRegularExpression regex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    return regex.match(email).hasMatch();
} 