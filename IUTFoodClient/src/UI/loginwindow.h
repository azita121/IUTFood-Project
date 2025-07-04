#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "customermenu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class logInWindow;
}
QT_END_NAMESPACE

class logInWindow : public QMainWindow
{
    Q_OBJECT

public:
    logInWindow(QWidget *parent = nullptr);
    ~logInWindow();

private slots:
    void on_customerButton_clicked();

    void on_ownerButton_clicked();

    void on_Customerback_clicked();

    void on_Ownerback_clicked();

    void on_Forgotback_clicked();

    void on_Setback_clicked();

    void on_resetButton_clicked();

    void on_forgotPass_linkActivated(const QString &link);

    void on_DoneButton_clicked();

    void on_eyeLog_clicked();

    void on_eyePass_clicked();

    void on_eyeReap_clicked();

    void on_loginButton_clicked();

    void on_signUpCustomerButton_clicked();

    void on_signUpOwnerButton_clicked();

private:
    Ui::logInWindow *ui;

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

};
#endif // LOGINWINDOW_H
