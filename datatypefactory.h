#ifndef DATATYPEFACTORY_H
#define DATATYPEFACTORY_H

#include "datatype.h"

#include <QObject>

class DataTypeFactory : public QObject
{
    Q_OBJECT
public:
    explicit DataTypeFactory(QObject *parent = nullptr);

    DataType* createDataType(int row, QAbstractItemModel* componentModel);
};

#endif // DATATYPEFACTORY_H
