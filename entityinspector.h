#ifndef ENTITYINSPECTOR_H
#define ENTITYINSPECTOR_H

#include "componentfactory.h"

#include <QWidget>

namespace Ui {
class EntityInspector;
}

class QAbstractItemModel;

class EntityInspector : public QWidget
{
    Q_OBJECT

public:
    explicit EntityInspector(QWidget *parent = 0);
    ~EntityInspector();

    void setModel(QAbstractItemModel* model);

private:
    Ui::EntityInspector *ui;
    QAbstractItemModel* sourceModel;
    ComponentFactory factory;
};

#endif // ENTITYINSPECTOR_H
