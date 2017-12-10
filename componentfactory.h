#ifndef COMPONENTFACTORY_H
#define COMPONENTFACTORY_H

#include <QObject>

class QAbstractItemModel;
class Component;

class ComponentFactory : public QObject
{
    Q_OBJECT
public:
    explicit ComponentFactory(QObject *parent = nullptr);

    Component *createComponent(QModelIndex componentIndex, QAbstractItemModel *model);
};

#endif // COMPONENTFACTORY_H
