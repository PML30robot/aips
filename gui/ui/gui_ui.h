/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GUI_UI_H
#define GUI_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui
{
public:
    QAction *ot_obj_params;
    QAction *ot_start_rec;
    QAction *ot_stop_rec;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu_obj_track;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QString::fromUtf8("gui"));
        gui->resize(739, 612);
        ot_obj_params = new QAction(gui);
        ot_obj_params->setObjectName(QString::fromUtf8("ot_obj_params"));
        ot_obj_params->setCheckable(false);
        ot_start_rec = new QAction(gui);
        ot_start_rec->setObjectName(QString::fromUtf8("ot_start_rec"));
        ot_stop_rec = new QAction(gui);
        ot_stop_rec->setObjectName(QString::fromUtf8("ot_stop_rec"));
        centralwidget = new QWidget(gui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 721, 571));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
        gui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 739, 21));
        menu_obj_track = new QMenu(menubar);
        menu_obj_track->setObjectName(QString::fromUtf8("menu_obj_track"));
        gui->setMenuBar(menubar);
        statusbar = new QStatusBar(gui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gui->setStatusBar(statusbar);

        menubar->addAction(menu_obj_track->menuAction());
        menu_obj_track->addAction(ot_obj_params);
        menu_obj_track->addSeparator();
        menu_obj_track->addAction(ot_start_rec);
        menu_obj_track->addAction(ot_stop_rec);
        menu_obj_track->addSeparator();

        retranslateUi(gui);

        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QMainWindow *gui)
    {
        gui->setWindowTitle(QApplication::translate("gui", "MainWindow", 0, QApplication::UnicodeUTF8));
        ot_obj_params->setText(QApplication::translate("gui", "Object parameters", 0, QApplication::UnicodeUTF8));
        ot_start_rec->setText(QApplication::translate("gui", "Start recording", 0, QApplication::UnicodeUTF8));
        ot_stop_rec->setText(QApplication::translate("gui", "Stop recording", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        menu_obj_track->setTitle(QApplication::translate("gui", "Object track", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GUI_UI_H
