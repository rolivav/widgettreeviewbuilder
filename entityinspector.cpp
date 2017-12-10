#include "entityinspector.h"
#include "ui_entityinspector.h"
#include "component.h"

#include <QVBoxLayout>

EntityInspector::EntityInspector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EntityInspector)
{
    ui->setupUi(this);
}

EntityInspector::~EntityInspector()
{
    delete ui;
}

void EntityInspector::setModel(QAbstractItemModel *model)
{
    sourceModel = model;
    QModelIndexList componentIndexes;
    for (int i = 0; i < 5; i++) {
        QModelIndex parent = sourceModel->index(i, 0, QModelIndex());
        if (parent.isValid()){
            componentIndexes.push_back(parent);
        }
    }

    for (QModelIndex& index : componentIndexes) {
        // create all components
        Component* newComponent = factory.createComponent(index, sourceModel);
        QLayout* layout = ui->componentList->layout();
        layout->addWidget(newComponent);
    }
}

