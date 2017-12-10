#ifndef COMPONENT_H
#define COMPONENT_H

#include "datatypefactory.h"

#include <QWidget>

namespace Ui {
class Component;
}

class QAbstractItemModel;

class Component : public QWidget
{
    Q_OBJECT
public:
    explicit Component(QWidget *parent = nullptr);

    void setModel(QAbstractItemModel* model);

    void setName(QString name);

private:
    Ui::Component *ui;
    QAbstractItemModel* mModel;

    DataTypeFactory factory;
};

#endif // COMPONENT_H
