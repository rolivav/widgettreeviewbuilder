#include "componentmodel.h"

ComponentModel::ComponentModel(QObject *parent) : QSortFilterProxyModel(parent)
{
}

bool ComponentModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const {
    Q_UNUSED(source_row);
    if (source_parent.isValid()){
        return true;
    }

//    QString parentName = sourceModel()->data(source_parent).toString();
//    if (parentName == mName){
//        return true;
//    }

    return false;
}

void ComponentModel::setComponentName(QString name) {
    mName = name;
    invalidate();
}
