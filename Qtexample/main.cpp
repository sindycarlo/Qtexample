#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget Window;
    Window.setWindowTitle("I'm a fucking widget");
    Window.resize(200,120);
    QPushButton quit("QUIT",&Window);
    QObject::connect(&quit,SIGNAL(clicked()),&a,SLOT(quit()));
    Window.show();

    return a.exec();
}
