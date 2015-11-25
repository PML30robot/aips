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
    QAction *actionCamera_1;
    QAction *action_amera_2;
    QAction *action_amera_3;
    QAction *action_amera_4;
    QAction *action_amera_5;
    QAction *ot_camera_settings;
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
        ot_obj_params->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../gear_4053.png"), QSize(), QIcon::Normal, QIcon::Off);
        ot_obj_params->setIcon(icon);
        ot_start_rec = new QAction(gui);
        ot_start_rec->setObjectName(QString::fromUtf8("ot_start_rec"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../RecRun.png"), QSize(), QIcon::Normal, QIcon::Off);
        ot_start_rec->setIcon(icon1);
        ot_stop_rec = new QAction(gui);
        ot_stop_rec->setObjectName(QString::fromUtf8("ot_stop_rec"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../RecStop.png"), QSize(), QIcon::Normal, QIcon::Off);
        ot_stop_rec->setIcon(icon2);
        actionCamera_1 = new QAction(gui);
        actionCamera_1->setObjectName(QString::fromUtf8("actionCamera_1"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCamera_1->setIcon(icon3);
        action_amera_2 = new QAction(gui);
        action_amera_2->setObjectName(QString::fromUtf8("action_amera_2"));
        action_amera_2->setIcon(icon3);
        action_amera_3 = new QAction(gui);
        action_amera_3->setObjectName(QString::fromUtf8("action_amera_3"));
        action_amera_3->setIcon(icon3);
        action_amera_4 = new QAction(gui);
        action_amera_4->setObjectName(QString::fromUtf8("action_amera_4"));
        action_amera_4->setIcon(icon3);
        action_amera_5 = new QAction(gui);
        action_amera_5->setObjectName(QString::fromUtf8("action_amera_5"));
        action_amera_5->setIcon(icon3);
        ot_camera_settings = new QAction(gui);
        ot_camera_settings->setObjectName(QString::fromUtf8("ot_camera_settings"));
        ot_camera_settings->setIcon(icon3);
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
        menu_obj_track->addSeparator();
        menu_obj_track->addAction(ot_camera_settings);

        retranslateUi(gui);

        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QMainWindow *gui)
    {
        gui->setWindowTitle(QApplication::translate("gui", "MainWindow", 0, QApplication::UnicodeUTF8));
        ot_obj_params->setText(QApplication::translate("gui", "Object parameters", 0, QApplication::UnicodeUTF8));
        ot_start_rec->setText(QApplication::translate("gui", "Start recording", 0, QApplication::UnicodeUTF8));
        ot_stop_rec->setText(QApplication::translate("gui", "Stop recording", 0, QApplication::UnicodeUTF8));
        actionCamera_1->setText(QApplication::translate("gui", "\320\241amera \342\204\2261", 0, QApplication::UnicodeUTF8));
        action_amera_2->setText(QApplication::translate("gui", "\320\241amera \342\204\2262", 0, QApplication::UnicodeUTF8));
        action_amera_3->setText(QApplication::translate("gui", "\320\241amera \342\204\2263", 0, QApplication::UnicodeUTF8));
        action_amera_4->setText(QApplication::translate("gui", "\320\241amera \342\204\2264", 0, QApplication::UnicodeUTF8));
        action_amera_5->setText(QApplication::translate("gui", "\320\241amera \342\204\2265", 0, QApplication::UnicodeUTF8));
        ot_camera_settings->setText(QApplication::translate("gui", "Camera Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        menu_obj_track->setTitle(QApplication::translate("gui", "Object track", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GUI_UI_H
