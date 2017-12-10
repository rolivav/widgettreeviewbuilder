#ifndef DATATYPE_H
#define DATATYPE_H

#include <QLabel>
#include <QWidget>

class QAbstractItemModel;

class DataType : public QWidget
{
    Q_OBJECT
public:
    explicit DataType(QWidget *parent = nullptr);
    void setModel(QAbstractItemModel* model);

private:
    void setName(QString name);

private:
    QAbstractItemModel* mModel;
    QLabel name;
};

#endif // DATATYPE_H
