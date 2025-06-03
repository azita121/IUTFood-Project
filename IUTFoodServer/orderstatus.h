#ifndef ORDERSTATUS_H
#define ORDERSTATUS_H

#include <QObject>
#include <QList>
#include <QMap>
#include "observer.h"

class OrderStatus : public QObject
{
    Q_OBJECT

public:
    static OrderStatus* getInstance();
    void attach(Observer* observer);
    void detach(Observer* observer);
    void notifyObservers(const QString& orderId, const QString& status);
    QString getOrderStatus(const QString& orderId) const;

private:
    explicit OrderStatus(QObject *parent = nullptr);
    ~OrderStatus();
    static OrderStatus* instance;

    QList<Observer*> observers;
    QMap<QString, QString> orderStatuses; // orderId -> status mapping
};

#endif // ORDERSTATUS_H 