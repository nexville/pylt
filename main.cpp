#include "pylt.h"
#include <QApplication>
#include"QColor"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pylt w;
    w.show();
    
    return a.exec();
}


