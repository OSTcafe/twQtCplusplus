#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   QWidget *window = new QWidget;

   QPushButton *button = new QPushButton("P1.0");
   QPushButton *button_two = new QPushButton("P1.4");

   QObject::connect(button, SIGNAL(clicked()),
                    &app,SLOT(quit()));
   QObject::connect(button_two, SIGNAL(clicked()),
                    &app,SLOT(quit()));

   QHBoxLayout *layout = new QHBoxLayout;
   layout->addWidget(button);
   layout->addWidget(button_two);
   window->setLayout(layout);

   window->show();

   return app.exec();
}
