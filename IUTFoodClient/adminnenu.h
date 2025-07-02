#ifndef ADMINNENU_H
#define ADMINNENU_H

#include <QWidget>

namespace Ui {
class adminnenu;
}

class adminnenu : public QWidget
{
    Q_OBJECT

public:
    explicit adminnenu(QWidget *parent = nullptr);
    ~adminnenu();

private:
    Ui::adminnenu *ui;
};

#endif // ADMINNENU_H
