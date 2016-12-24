/********************************************************************************
** Form generated from reading UI file 'qNumber.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QNUMBER_UI_H
#define QNUMBER_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qNumber
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *number;
    QPushButton *OK;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qNumber)
    {
        if (qNumber->objectName().isEmpty())
            qNumber->setObjectName(QString::fromUtf8("qNumber"));
        qNumber->resize(208, 89);
        centralwidget = new QWidget(qNumber);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 211, 72));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        number = new QSpinBox(verticalLayoutWidget);
        number->setObjectName(QString::fromUtf8("number"));
        number->setMinimum(1);
        number->setMaximum(999);

        horizontalLayout->addWidget(number);

        OK = new QPushButton(verticalLayoutWidget);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setCursor(QCursor(Qt::PointingHandCursor));
        OK->setCheckable(true);

        horizontalLayout->addWidget(OK);


        verticalLayout->addLayout(horizontalLayout);

        qNumber->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qNumber);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 208, 21));
        qNumber->setMenuBar(menubar);
        statusbar = new QStatusBar(qNumber);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        qNumber->setStatusBar(statusbar);

        retranslateUi(qNumber);
        QObject::connect(OK, SIGNAL(clicked()), qNumber, SLOT(close()));

        QMetaObject::connectSlotsByName(qNumber);
    } // setupUi

    void retranslateUi(QMainWindow *qNumber)
    {
        qNumber->setWindowTitle(QApplication::translate("qNumber", "Number marks", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("qNumber", "How many marks on the object?", 0, QApplication::UnicodeUTF8));
        OK->setText(QApplication::translate("qNumber", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qNumber: public Ui_qNumber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QNUMBER_UI_H
