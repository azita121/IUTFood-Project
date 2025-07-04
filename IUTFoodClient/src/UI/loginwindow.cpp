#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QMessageBox"
#include "network/authmanager.h"
#include "network/networkmanager.h"
#include "customermenu.h"
#include "restaurantownermenu.h"
#include "adminmenu.h"
#include <QDebug>

logInWindow::logInWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logInWindow)
{
    ui->setupUi(this);
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    ui->lineEditNewPassword->setEchoMode(QLineEdit::Password);
    ui->lineEditRepeatNewPassword->setEchoMode(QLineEdit::Password);

    foreach (QLineEdit *edit, findChildren<QLineEdit*>()) {
        edit->installEventFilter(this);
    }

    // Connect to server at startup
    if (!NetworkManager::getInstance()->connectToServer("localhost", 8080, 8081)) {
        QMessageBox::critical(this, "Connection Error", "Unable to connect to the server. Please make sure the server is running on localhost:8080");
        this->setEnabled(false);
        return;
    }

    // Check connection status
    if (!NetworkManager::getInstance()->isConnected()) {
        QMessageBox::warning(this, "Connection Warning", "Server connection status is uncertain. Some features may not work.");
    }

    // Connect network error signals
    connect(NetworkManager::getInstance(), &NetworkManager::error, this, [this](const QString &error) {
        QMessageBox::critical(this, "Network Error", "Network error: " + error);
    });

    connect(NetworkManager::getInstance(), &NetworkManager::disconnected, this, [this]() {
        QMessageBox::warning(this, "Connection Lost", "Lost connection to server. Please check your connection.");
    });

    // Note: signUpCustomerButton is auto-connected via naming convention

    // Handle login result
    connect(AuthManager::getInstance(), &AuthManager::loginSuccess, this, [this]() {
        User* currentUser = AuthManager::getInstance()->currentUser();
        if (currentUser) {
            QString userType = currentUser->userType();
            QString msg = QString("Login successful! User type: %1").arg(userType);
            if (userType == "customer") {
                CustomerMenu* menu = new CustomerMenu(nullptr);
                menu->setAttribute(Qt::WA_DeleteOnClose);
                menu->show();
                this->close();
            } else if (userType == "restaurant_owner") {
                restaurantownermenu* menu = new restaurantownermenu(nullptr);
                menu->setAttribute(Qt::WA_DeleteOnClose);
                menu->show();
                this->close();
            } else if (userType == "admin") {
                QMessageBox::information(this, "Login Success", msg + "\nAdmin interface not yet implemented.");
            } else {
                QMessageBox::warning(this, "Login Error", "Unknown user type: " + userType);
            }
        } else {
            QMessageBox::warning(this, "Login Error", "User data not available after successful login.");
        }
    });
    connect(AuthManager::getInstance(), &AuthManager::loginFailed, this, [this](const QString &error) {
        QMessageBox::critical(this, "Login Failed", "Login failed: " + error);
    });

    // Handle registration result
    connect(AuthManager::getInstance(), &AuthManager::registerSuccess, this, [this]() {
        QMessageBox::information(this, "Registration Success", "Registration successful! Please log in.");
        ui->stackedWidget->setCurrentIndex(0); // Go back to login page
    });
    connect(AuthManager::getInstance(), &AuthManager::registerFailed, this, [this](const QString &error) {
        QMessageBox::warning(this, "Registration Failed", error);
    });

    // Connect feedback signals
    connect(AuthManager::getInstance(), &AuthManager::forgotPasswordSuccess, this, [this](const QString &msg) {
        QMessageBox::information(this, "Forgot Password", msg);
    });
    connect(AuthManager::getInstance(), &AuthManager::forgotPasswordFailed, this, [this](const QString &err) {
        QMessageBox::warning(this, "Forgot Password", err);
    });

    // Connect new signals
    connect(AuthManager::getInstance(), &AuthManager::setPasswordSuccess, this, [this](const QString &msg) {
        QMessageBox::information(this, "Set Password", msg);
        ui->stackedWidget->setCurrentIndex(0); // Go back to login
    });
    connect(AuthManager::getInstance(), &AuthManager::setPasswordFailed, this, [this](const QString &err) {
        QMessageBox::warning(this, "Set Password", err);
    });
}

logInWindow::~logInWindow()
{
    delete ui;
}

void logInWindow::on_customerButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void logInWindow::on_ownerButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void logInWindow::on_Customerback_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void logInWindow::on_Ownerback_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void logInWindow::on_Forgotback_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void logInWindow::on_Setback_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void logInWindow::on_resetButton_clicked()
{
    QString email = ui->lineEdit_forgotEmail->text().trimmed();
    QString phone = ui->lineEdit_forgotPhoneNumber->text().trimmed();
    QString emailOrPhone;
    if (!email.isEmpty()) {
        emailOrPhone = email;
    } else if (!phone.isEmpty()) {
        emailOrPhone = phone;
    } else {
        QMessageBox::warning(this, "Input Error", "Please enter your email or phone number.");
        return;
    }

    AuthManager::getInstance()->forgotPassword(emailOrPhone);
    ui->stackedWidget->setCurrentIndex(2);

}


void logInWindow::on_forgotPass_linkActivated(const QString &link)
{
    ui->stackedWidget->setCurrentIndex(1);
}


void logInWindow::on_DoneButton_clicked()
{
    QString email = ui->lineEdit_forgotEmail->text().trimmed();
    QString phone = ui->lineEdit_forgotPhoneNumber->text().trimmed();
    QString newPassword = ui->lineEditNewPassword->text();
    QString repeatPassword = ui->lineEditRepeatNewPassword->text();

    if (newPassword.isEmpty() || repeatPassword.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter and repeat your new password.");
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }
    if (newPassword != repeatPassword) {
        QMessageBox::warning(this, "Input Error", "Passwords do not match.");
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }
    QString emailOrPhone = !email.isEmpty() ? email : phone;
    if (emailOrPhone.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter your email or phone number.");
        ui->stackedWidget->setCurrentIndex(0);
        return;
    }
    AuthManager::getInstance()->setPassword(emailOrPhone, newPassword);
    QMessageBox::information(this, "succeed", "Password reset and changed");

    ui->stackedWidget->setCurrentIndex(0);
}


void logInWindow::on_eyeLog_clicked()
{
    static bool isVisible = false;
    isVisible = !isVisible;

    ui->lineEditPassword->setEchoMode(
        isVisible ? QLineEdit::Normal : QLineEdit::Password
        );

    ui->eyeLog->setIcon(
        QIcon(isVisible ? ":/images/visible.png" : ":/images/eye (2).png")
        );
}


void logInWindow::on_eyePass_clicked()
{
    static bool isVisible = false;
    isVisible = !isVisible;

    ui->lineEditNewPassword->setEchoMode(
        isVisible ? QLineEdit::Normal : QLineEdit::Password
        );

    ui->eyePass->setIcon(
        QIcon(isVisible ? ":/images/visible.png" : ":/images/eye (2).png")
        );
}


void logInWindow::on_eyeReap_clicked()
{
    static bool isVisible = false;
    isVisible = !isVisible;

    ui->lineEditRepeatNewPassword->setEchoMode(
        isVisible ? QLineEdit::Normal : QLineEdit::Password
        );

    ui->eyeReap->setIcon(
        QIcon(isVisible ? ":/images/visible.png" : ":/images/eye (2).png")
        );
}

bool logInWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter) {
            QWidget *current = qobject_cast<QWidget *>(obj);
            if (current) {
                focusNextChild();
                return true;
            }
        }
    }
    return QMainWindow::eventFilter(obj, event);
}


void logInWindow::on_signUpCustomerButton_clicked()
{
    QMessageBox::information(this, "Debug", "Sign-up button clicked!");
    
    QString firstName = ui->lineEdit_SignCustomerName->text();
    QString lastName = ui->lineEdit_SignCustomerLName->text();
    QString email = ui->lineEdit_SignCustomerEmail->text();
    QString phone = ui->lineEdit_SignCustomerPhoneNumber->text();
    QString password = ui->lineEdit_SignCustomerPassword->text();
    QString location = ui->comboBox_SignCustomerLocation->currentText();

    QMessageBox::information(this, "Debug", QString("Data: %1, %2, %3, %4, %5, %6")
        .arg(firstName, lastName, email, phone, location, password.isEmpty() ? "EMPTY" : "FILLED"));

    if (firstName.isEmpty() || lastName.isEmpty() || email.isEmpty() || phone.isEmpty() || password.isEmpty() || location.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QMessageBox::information(this, "Debug", "Calling registerCustomer...");
    AuthManager::getInstance()->registerCustomer(firstName, lastName, email, phone, password, location);
}




void logInWindow::on_loginButton_clicked()
{
    QMessageBox::information(this, "Debug", "loginButton button clicked!");

    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both username and password.");
        return;
    }
    if(username == "admin" && password == "admin"){
        adminmenu* menu = new adminmenu(nullptr);
        menu->setAttribute(Qt::WA_DeleteOnClose);
        menu->show();
        this->close();
    }
    AuthManager::getInstance()->login(username, password);

}


void logInWindow::on_signUpOwnerButton_clicked()
{
    QMessageBox::information(this, "Debug", "signUpOwner button clicked!");

    QString firstName = ui->lineEdit_SignOwnerName->text().trimmed();
    QString lastName = ui->lineEdit_SignOwnerLName->text().trimmed();
    QString email = ui->lineEdit_SignOwnerEmail->text().trimmed();
    QString phone = ui->lineEdit_SignOwnerPhoneNumber->text().trimmed();
    QString restaurantName = ui->lineEdit_SignOwnerRestaurantName->text().trimmed();
    QString restaurantNumber = ui->lineEdit_SignOwnerRestaurantNumber->text().trimmed();
    QString password = ui->lineEdit_SignOwnerPassword->text();
    QString location = ui->comboBox_SignOwnerLocation->currentText().trimmed();

    if (firstName.isEmpty() || lastName.isEmpty() || email.isEmpty() || phone.isEmpty() ||
        restaurantName.isEmpty() || restaurantNumber.isEmpty() || password.isEmpty() || location.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    AuthManager::getInstance()->registerRestaurantOwner(
        firstName, lastName, email, phone, password, restaurantName, restaurantNumber, location
    );
}

