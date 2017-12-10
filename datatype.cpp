#include "datatype.h"

#include <QLabel>
#include <QDebug>
#include <QAbstractItemModel>

DataType::DataType(QWidget *parent)
    : QWidget(parent)
    , name(this)
{
    name.setText("NULL");
}

void DataType::setModel(QAbstractItemModel *model) {
    mModel = model;

    int rowCount = mModel->rowCount();

    if (rowCount > 0) {
        qDebug() << rowCount;
        name.setText(model->data(model->index(0,0)).toString());
    }
    // connect widgets to model....
}

