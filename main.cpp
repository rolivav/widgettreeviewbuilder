#include "entityinspector.h"
#include "treemodel.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EntityInspector w;

    QFile file(":/default.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        return 1;
    }
    TreeModel model(QString::fromUtf8(file.readAll()));
    file.close();
    w.setModel(&model);

    w.show();

    return a.exec();
}
