#ifndef ROWMODEL_H
#define ROWMODEL_H

#include <QObject>
#include <QSortFilterProxyModel>

class RowModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    explicit RowModel(int row, QObject *parent = nullptr);

    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const override;

private:
    int mRow = -1;
};

#endif // ROWMODEL_H
