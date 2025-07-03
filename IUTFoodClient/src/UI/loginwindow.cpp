#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QMessageBox"
#include "network/authmanager.h"
#include "network/networkmanager.h"
#include "customermenu.h"
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
                CustomerMenu* menu = new CustomerMenu(this);
                menu->setAttribute(Qt::WA_DeleteOnClose);
                menu->show();
                this->close();
            } else if (userType == "restaurant_owner") {
                QMessageBox::information(this, "Login Success", msg + "\nOwner interface not yet implemented.");
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
    ui->stackedWidget->setCurrentIndex(2);
}


void logInWindow::on_forgotPass_linkActivated(const QString &link)
{
    ui->stackedWidget->setCurrentIndex(1);
}


void logInWindow::on_DoneButton_clicked()
{
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

    AuthManager::getInstance()->login(username, password);

}

