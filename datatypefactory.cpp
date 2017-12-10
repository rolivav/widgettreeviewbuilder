#include "datatypefactory.h"
#include "rowmodel.h"

DataTypeFactory::DataTypeFactory(QObject *parent) : QObject(parent)
{}

DataType *DataTypeFactory::createDataType(int row, QAbstractItemModel *componentModel) {
    // create data type
    DataType* dataType = new DataType();

    // create model for data type
    RowModel* rowModel = new RowModel(row, dataType);
    rowModel->setSourceModel(componentModel);

    // set new model to datatype
    dataType->setModel(rowModel);
    return dataType;
}
