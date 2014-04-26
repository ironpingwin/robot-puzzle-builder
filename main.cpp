#include "rpb.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Rpb w;
    w.show();

    return a.exec();
}
