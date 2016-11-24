#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget Window;
    QVBoxLayout* layout= new QVBoxLayout;
    Window.setWindowTitle("I'm a fucking widget");
    Window.resize(200,120);
    QPushButton*primo=new QPushButton("prova1",&Window);
     QPushButton* secondo=new QPushButton("prova2",&Window);
     secondo->setGeometry(10,40,180,40);
     layout->addWidget(primo);
     layout->addWidget(secondo);
    QObject::connect(primo,SIGNAL(clicked()),&a,SLOT(quit()));
     QObject::connect(secondo,SIGNAL(clicked()),&a,SLOT(quit()));
    Window.show();

    return a.exec();
}
