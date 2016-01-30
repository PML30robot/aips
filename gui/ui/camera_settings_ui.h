/********************************************************************************
** Form generated from reading UI file 'camera_settings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CAMERA_SETTINGS_UI_H
#define CAMERA_SETTINGS_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera_settings
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *hContrast;
    QDoubleSpinBox *hSaturation;
    QDoubleSpinBox *hHue;
    QDoubleSpinBox *hGain;
    QDoubleSpinBox *hExposure;
    QDoubleSpinBox *hBrightness;
    QWidget *tab_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *sBrightness;
    QDoubleSpinBox *sContrast;

    void setupUi(QWidget *camera_settings)
    {
        if (camera_settings->objectName().isEmpty())
            camera_settings->setObjectName(QString::fromUtf8("camera_settings"));
        camera_settings->resize(181, 200);
        tabWidget = new QTabWidget(camera_settings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 181, 201));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 171, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        hContrast = new QDoubleSpinBox(formLayoutWidget);
        hContrast->setObjectName(QString::fromUtf8("hContrast"));
        hContrast->setDecimals(2);
        hContrast->setMinimum(0);
        hContrast->setMaximum(1);
        hContrast->setSingleStep(0.01);

        formLayout->setWidget(1, QFormLayout::FieldRole, hContrast);

        hSaturation = new QDoubleSpinBox(formLayoutWidget);
        hSaturation->setObjectName(QString::fromUtf8("hSaturation"));
        hSaturation->setDecimals(2);
        hSaturation->setMinimum(0);
        hSaturation->setMaximum(1);
        hSaturation->setSingleStep(0.01);

        formLayout->setWidget(2, QFormLayout::FieldRole, hSaturation);

        hHue = new QDoubleSpinBox(formLayoutWidget);
        hHue->setObjectName(QString::fromUtf8("hHue"));
        hHue->setDecimals(2);
        hHue->setMinimum(0);
        hHue->setMaximum(1);
        hHue->setSingleStep(0.01);

        formLayout->setWidget(3, QFormLayout::FieldRole, hHue);

        hGain = new QDoubleSpinBox(formLayoutWidget);
        hGain->setObjectName(QString::fromUtf8("hGain"));
        hGain->setDecimals(2);
        hGain->setMinimum(0);
        hGain->setMaximum(1);
        hGain->setSingleStep(0.01);

        formLayout->setWidget(4, QFormLayout::FieldRole, hGain);

        hExposure = new QDoubleSpinBox(formLayoutWidget);
        hExposure->setObjectName(QString::fromUtf8("hExposure"));
        hExposure->setDecimals(2);
        hExposure->setMinimum(0);
        hExposure->setMaximum(1);
        hExposure->setSingleStep(0.01);

        formLayout->setWidget(5, QFormLayout::FieldRole, hExposure);

        hBrightness = new QDoubleSpinBox(formLayoutWidget);
        hBrightness->setObjectName(QString::fromUtf8("hBrightness"));
        hBrightness->setDecimals(2);
        hBrightness->setMinimum(0);
        hBrightness->setMaximum(1);
        hBrightness->setSingleStep(0.01);

        formLayout->setWidget(0, QFormLayout::FieldRole, hBrightness);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 0, 171, 171));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        sBrightness = new QDoubleSpinBox(formLayoutWidget_2);
        sBrightness->setObjectName(QString::fromUtf8("sBrightness"));
        sBrightness->setDecimals(2);
        sBrightness->setMinimum(-100);
        sBrightness->setMaximum(100);
        sBrightness->setSingleStep(0.01);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sBrightness);

        sContrast = new QDoubleSpinBox(formLayoutWidget_2);
        sContrast->setObjectName(QString::fromUtf8("sContrast"));
        sContrast->setDecimals(2);
        sContrast->setMinimum(-100);
        sContrast->setMaximum(100);
        sContrast->setSingleStep(0.01);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sContrast);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(camera_settings);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(camera_settings);
    } // setupUi

    void retranslateUi(QWidget *camera_settings)
    {
        camera_settings->setWindowTitle(QApplication::translate("camera_settings", "Camera Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("camera_settings", "Brightness", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("camera_settings", "Contrast", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("camera_settings", "Saturation", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("camera_settings", "Hue", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("camera_settings", "Gain", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("camera_settings", "Exposure", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("camera_settings", "Hardware", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("camera_settings", "Brightness", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("camera_settings", "Contrast", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("camera_settings", "Software", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class camera_settings: public Ui_camera_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CAMERA_SETTINGS_UI_H
