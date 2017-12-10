#include "component.h"
#include "componentfactory.h"
#include "componentmodel.h"

ComponentFactory::ComponentFactory(QObject *parent) : QObject(parent)
{
}

Component *ComponentFactory::createComponent(QModelIndex componentIndex, QAbstractItemModel* sourceModel)
{
    // new component
    Component* component = new Component();

    // create component model from source
    QString name = sourceModel->data(componentIndex).toString(); // should be custom role
    ComponentModel* componentModel = new ComponentModel(component);
    componentModel->setSourceModel(sourceModel);
    componentModel->setComponentName(name);

    component->setName(name);
    // set new model to component
    component->setModel(componentModel);

    return component;
}
