#include "loginwindow.h"
#include "ui_loginwindow.h"

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

void logInWindow::on_loginButton_clicked()
{
    CustomerMenu* menu = new CustomerMenu(nullptr);
    menu->setAttribute(Qt::WA_DeleteOnClose);
    menu->show();
    this->close();
}

void logInWindow::on_signUpCustomerButton_clicked()
{
    restaurantownermenu* menu1 = new restaurantownermenu(nullptr);
    menu1->setAttribute(Qt::WA_DeleteOnClose);
    menu1->show();
    this->close();
}


void logInWindow::on_signUpOwnerButton_clicked()
{
    adminmenu* menu2 = new adminmenu(nullptr);
    menu2->setAttribute(Qt::WA_DeleteOnClose);
    menu2->show();
    this->close();

}

