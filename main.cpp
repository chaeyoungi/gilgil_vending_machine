#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w; // widget class rorcp todtjd
    w.show();

    Widget w2;
    w2.show();

    return a.exec();
}
