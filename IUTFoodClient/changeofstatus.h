#ifndef CHANGEOFSTATUS_H
#define CHANGEOFSTATUS_H

#include <QWidget>

namespace Ui {
class changeofstatus;
}

class changeofstatus : public QWidget
{
    Q_OBJECT

public:
    explicit changeofstatus(QWidget *parent = nullptr);
    ~changeofstatus();

private:
    Ui::changeofstatus *ui;
};

#endif // CHANGEOFSTATUS_H
