public slots:
    void createMenu(const QString& restaurantId);
    void addMenuItem(const QString& menuId, const QString& name, const QString& description, double price, const QString& ingredients, const QString& category);
    void updateMenuItem(const QString& menuId, const QString& itemId, const QJsonObject& updates);
    void deleteMenuItem(const QString& menuId, const QString& itemId);
    void fetchMenu(const QString& restaurantId);

signals:
    void menuCreated(bool success);
    void menuItemAdded(bool success);
    void menuItemUpdated(bool success);
    void menuItemDeleted(bool success);
    void menuReceived(const QJsonArray& menu); 