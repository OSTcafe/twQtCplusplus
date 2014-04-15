/********************************************************************************
** Form generated from reading UI file 'tesqprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESQPROCESS_H
#define UI_TESQPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_tesQProcess
{
public:
    QPushButton *btnProcess;
    QTextEdit *txtReport;
    QLabel *label_pix;

    void setupUi(QDialog *tesQProcess)
    {
        if (tesQProcess->objectName().isEmpty())
            tesQProcess->setObjectName(QStringLiteral("tesQProcess"));
        tesQProcess->resize(540, 338);
        btnProcess = new QPushButton(tesQProcess);
        btnProcess->setObjectName(QStringLiteral("btnProcess"));
        btnProcess->setGeometry(QRect(320, 20, 201, 31));
        txtReport = new QTextEdit(tesQProcess);
        txtReport->setObjectName(QStringLiteral("txtReport"));
        txtReport->setGeometry(QRect(10, 70, 521, 261));
        label_pix = new QLabel(tesQProcess);
        label_pix->setObjectName(QStringLiteral("label_pix"));
        label_pix->setGeometry(QRect(10, 0, 311, 71));
        label_pix->setPixmap(QPixmap(QString::fromUtf8("logo.png")));

        retranslateUi(tesQProcess);

        QMetaObject::connectSlotsByName(tesQProcess);
    } // setupUi

    void retranslateUi(QDialog *tesQProcess)
    {
        tesQProcess->setWindowTitle(QApplication::translate("tesQProcess", "QILP - Qt interface for launchpad", 0));
        btnProcess->setText(QApplication::translate("tesQProcess", "RUN", 0));
        label_pix->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tesQProcess: public Ui_tesQProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESQPROCESS_H
