#include "authmanager.h"
#include <QDebug>
#include <QMessageBox>

AuthManager* AuthManager::instance = nullptr;

AuthManager* AuthManager::getInstance()
{
    if (instance == nullptr) {
        instance = new AuthManager();
    }
    return instance;
}

AuthManager::AuthManager(QObject *parent)
    : QObject(parent)
    , m_networkManager(NetworkManager::getInstance())
    , m_currentUser(nullptr)
{
    // Connect to NetworkManager signals
    connect(m_networkManager, &NetworkManager::loginSuccess,
            this, &AuthManager::handleLoginSuccess);
    connect(m_networkManager, &NetworkManager::loginFailed,
            this, &AuthManager::handleLoginFailed);
    connect(m_networkManager, &NetworkManager::registerSuccess,
            this, &AuthManager::handleRegisterSuccess);
    connect(m_networkManager, &NetworkManager::registerFailed,
            this, &AuthManager::handleRegisterFailed);
    connect(m_networkManager, &NetworkManager::forgotPasswordSuccess,
            this, &AuthManager::forgotPasswordSuccess);
    connect(m_networkManager, &NetworkManager::forgotPasswordFailed,
            this, &AuthManager::forgotPasswordFailed);
    connect(m_networkManager, &NetworkManager::setPasswordSuccess,
            this, &AuthManager::setPasswordSuccess);
    connect(m_networkManager, &NetworkManager::setPasswordFailed,
            this, &AuthManager::setPasswordFailed);
}

AuthManager::~AuthManager()
{
    if (m_currentUser) {
        delete m_currentUser;
        m_currentUser = nullptr;
    }
}

void AuthManager::login(const QString &loginId, const QString &password)
{
    static int loginCallCount = 0;
    ++loginCallCount;
    qDebug() << "[AuthManager] login called" << loginCallCount << "times";
    m_networkManager->login(loginId, password);
}

void AuthManager::registerUser(const QString &firstName, const QString &lastName, const QString &email, const QString &phone, const QString &password, const QString &userType)
{
    m_networkManager->registerUser(firstName, lastName, email, phone, password, userType);
}

void AuthManager::logout()
{
    if (m_currentUser) {
        m_networkManager->logout();
        delete m_currentUser;
        m_currentUser = nullptr;
        emit currentUserChanged();
        emit loginStateChanged();
        emit logoutSuccess();
    }
}

User* AuthManager::currentUser() const
{
    return m_currentUser;
}

bool AuthManager::isLoggedIn() const
{
    return m_currentUser != nullptr;
}

void AuthManager::handleLoginSuccess(const QJsonObject &userData)
{
    qDebug() << "[AuthManager] handleLoginSuccess with userData:" << userData;
    if (m_currentUser) {
        delete m_currentUser;
    }
    
    // Extract the actual user data from the response
    QJsonObject userJson = userData["userData"].toObject();
    
    // Convert server field names to User class field names
    QJsonObject convertedUserData;
    convertedUserData["id"] = userJson["id"];
    convertedUserData["username"] = userJson["username"];
    convertedUserData["email"] = userJson["email"];
    convertedUserData["userType"] = userJson["userType"]; // Convert from user_type to userType
    convertedUserData["token"] = userData["token"]; // Token is at the top level
    convertedUserData["phoneNumber"] = userJson["phone"];
    convertedUserData["city"] = userJson["city"];
    convertedUserData["location"] = userJson["location"];
    
    m_currentUser = new User(convertedUserData, this);
    emit currentUserChanged();
    emit loginStateChanged();
    emit loginSuccess();
}

void AuthManager::handleLoginFailed(const QString &error)
{
    qDebug() << "[AuthManager] handleLoginFailed with error:" << error;
    emit loginFailed(error);
}

void AuthManager::handleRegisterSuccess()
{
    emit registerSuccess();
}

void AuthManager::handleRegisterFailed(const QString &error)
{
    emit registerFailed(error);
}

void AuthManager::registerCustomer(const QString &firstName, const QString &lastName, const QString &email, const QString &phone, const QString &password, const QString &location)
{
    m_networkManager->registerCustomer(firstName, lastName, email, phone, password, location);
}

void AuthManager::registerRestaurantOwner(const QString &firstName, const QString &lastName, const QString &email, const QString &phone, const QString &password, const QString &restaurantName, const QString &restaurantNumber, const QString &location)
{
    m_networkManager->registerRestaurantOwner(firstName, lastName, email, phone, password, restaurantName, restaurantNumber, location);
}

void AuthManager::forgotPassword(const QString &emailOrPhone)
{
    m_networkManager->forgotPassword(emailOrPhone);
}

void AuthManager::setPassword(const QString &emailOrPhone, const QString &newPassword) {
    m_networkManager->setPassword(emailOrPhone, newPassword);
} 
