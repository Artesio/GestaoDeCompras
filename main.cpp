#include "comprador.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Comprador w;
    w.show();

    return a.exec();
}
