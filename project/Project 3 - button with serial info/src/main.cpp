#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QtSerialPort/QtSerialPort>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   // create new object
   QWidget *window = new QWidget;

   QPushButton *button = new QPushButton("P1.0");
   QPushButton *button_two = new QPushButton("P1.4");

   // create SIGNAL & SLOT
   QObject::connect(button, SIGNAL(clicked()),
                    &app,SLOT(quit()));
   QObject::connect(button_two, SIGNAL(clicked()),
                    &app,SLOT(quit()));

   // layout
   QHBoxLayout *layout = new QHBoxLayout;

   // RS232 informarion
   foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
      if (info.manufacturer()== "Prolific"){
          QString s = QObject::tr("Port: ") + info.portName() + "\n"
                      + QObject::tr("Location: ") + info.systemLocation() + "\n"
                      + QObject::tr("Description: ") + info.description() + "\n"
                      + QObject::tr("Manufacturer: ") + info.manufacturer() + "\n";

          QLabel *label = new QLabel(s);

          layout->addWidget(label);
                                            }
   }

   layout->addWidget(button);
   layout->addWidget(button_two);
   window->setLayout(layout);

   window->show();

   return app.exec();
}
