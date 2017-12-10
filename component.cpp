#include "component.h"

#include "ui_component.h"

#include <QLabel>
#include <QLayout>

Component::Component(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Component)
{
    ui->setupUi(this);
}

void Component::setModel(QAbstractItemModel *model)
{
    if (model == nullptr)
        return;
    mModel = model;

    for (int i = 0; i < model->rowCount(); i++){
        // datatype factory
        ui->dataTypes->layout()->addWidget(factory.createDataType(i, mModel));
    }
}

void Component::setName(QString name)
{
    ui->title->setText(name);
}
