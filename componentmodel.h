#ifndef COMPONENTMODEL_H
#define COMPONENTMODEL_H

#include <QSortFilterProxyModel>

class ComponentModel : public QSortFilterProxyModel {
    Q_OBJECT
public:
    explicit ComponentModel(QObject *parent = nullptr);

    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const override;

    void setComponentName(QString name);

    QString componentName() { return mName; }

private:
    QString mName;
};

#endif // COMPONENTMODEL_H
