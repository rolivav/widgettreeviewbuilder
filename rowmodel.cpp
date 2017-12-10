#include "rowmodel.h"

RowModel::RowModel(int row, QObject *parent)
    : QSortFilterProxyModel(parent)
    , mRow(row)
{}

bool RowModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const {
    Q_UNUSED(source_parent);
    if (source_row == mRow)
        return  true;
    return false;
}
