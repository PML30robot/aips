/********************************************************************************
** Form generated from reading UI file 'calibration_coordinates.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CALIBRATION_COORDINATES_UI_H
#define CALIBRATION_COORDINATES_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calibration_coordinates
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *m2;
    QDoubleSpinBox *WorldCoordMark1_Y;
    QLabel *m1;
    QLabel *m3;
    QDoubleSpinBox *WorldCoordMark1_X;
    QDoubleSpinBox *WorldCoordMark2_X;
    QDoubleSpinBox *WorldCoordMark3_X;
    QDoubleSpinBox *WorldCoordMark2_Y;
    QLabel *x1;
    QFrame *line_3;
    QFrame *line;
    QFrame *line_7;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_12;
    QLabel *y2;
    QFrame *line_11;
    QFrame *line_2;
    QLabel *wc;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_10;
    QFrame *line_14;
    QFrame *line_13;
    QLabel *y1;
    QFrame *line_4;
    QLabel *cc;
    QLabel *x2;
    QLabel *CameraCoordMark2_Y;
    QLabel *CameraCoordMark1_Y;
    QLabel *CameraCoordMark3_Y;
    QLabel *CameraCoordMark3_X;
    QLabel *CameraCoordMark1_X;
    QLabel *CameraCoordMark2_X;
    QDoubleSpinBox *WorldCoordMark3_Y;

    void setupUi(QWidget *calibration_coordinates)
    {
        if (calibration_coordinates->objectName().isEmpty())
            calibration_coordinates->setObjectName(QString::fromUtf8("calibration_coordinates"));
        calibration_coordinates->resize(662, 171);
        gridLayoutWidget = new QWidget(calibration_coordinates);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 661, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m2 = new QLabel(gridLayoutWidget);
        m2->setObjectName(QString::fromUtf8("m2"));

        gridLayout->addWidget(m2, 5, 0, 1, 1);

        WorldCoordMark1_Y = new QDoubleSpinBox(gridLayoutWidget);
        WorldCoordMark1_Y->setObjectName(QString::fromUtf8("WorldCoordMark1_Y"));
        WorldCoordMark1_Y->setEnabled(true);
        WorldCoordMark1_Y->setCursor(QCursor(Qt::IBeamCursor));
        WorldCoordMark1_Y->setSingleStep(0.01);

        gridLayout->addWidget(WorldCoordMark1_Y, 4, 3, 1, 1);

        m1 = new QLabel(gridLayoutWidget);
        m1->setObjectName(QString::fromUtf8("m1"));

        gridLayout->addWidget(m1, 4, 0, 1, 1);

        m3 = new QLabel(gridLayoutWidget);
        m3->setObjectName(QString::fromUtf8("m3"));

        gridLayout->addWidget(m3, 7, 0, 1, 1);

        WorldCoordMark1_X = new QDoubleSpinBox(gridLayoutWidget);
        WorldCoordMark1_X->setObjectName(QString::fromUtf8("WorldCoordMark1_X"));
        WorldCoordMark1_X->setCursor(QCursor(Qt::IBeamCursor));
        WorldCoordMark1_X->setSingleStep(0.01);

        gridLayout->addWidget(WorldCoordMark1_X, 4, 2, 1, 1);

        WorldCoordMark2_X = new QDoubleSpinBox(gridLayoutWidget);
        WorldCoordMark2_X->setObjectName(QString::fromUtf8("WorldCoordMark2_X"));
        WorldCoordMark2_X->setCursor(QCursor(Qt::IBeamCursor));
        WorldCoordMark2_X->setSingleStep(0.01);
        WorldCoordMark2_X->setValue(1);

        gridLayout->addWidget(WorldCoordMark2_X, 5, 2, 1, 1);

        WorldCoordMark3_X = new QDoubleSpinBox(gridLayoutWidget);
        WorldCoordMark3_X->setObjectName(QString::fromUtf8("WorldCoordMark3_X"));
        WorldCoordMark3_X->setCursor(QCursor(Qt::IBeamCursor));
        WorldCoordMark3_X->setSingleStep(0.01);

        gridLayout->addWidget(WorldCoordMark3_X, 7, 2, 1, 1);

        WorldCoordMark2_Y = new QDoubleSpinBox(gridLayoutWidget);
        WorldCoordMark2_Y->setObjectName(QString::fromUtf8("WorldCoordMark2_Y"));
        WorldCoordMark2_Y->setCursor(QCursor(Qt::IBeamCursor));
        WorldCoordMark2_Y->setSingleStep(0.01);

        gridLayout->addWidget(WorldCoordMark2_Y, 5, 3, 1, 1);

        x1 = new QLabel(gridLayoutWidget);
        x1->setObjectName(QString::fromUtf8("x1"));

        gridLayout->addWidget(x1, 3, 2, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 1, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 1, 1, 1);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 4, 4, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 2, 4, 1, 1);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 2, 0, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 2, 3, 1, 1);

        y2 = new QLabel(gridLayoutWidget);
        y2->setObjectName(QString::fromUtf8("y2"));

        gridLayout->addWidget(y2, 3, 6, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 2, 2, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 1, 1, 1);

        wc = new QLabel(gridLayoutWidget);
        wc->setObjectName(QString::fromUtf8("wc"));

        gridLayout->addWidget(wc, 0, 2, 1, 1);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 5, 4, 1, 1);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 7, 4, 1, 1);

        line_15 = new QFrame(gridLayoutWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_15, 0, 1, 1, 1);

        line_16 = new QFrame(gridLayoutWidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_16, 0, 4, 1, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 3, 4, 1, 1);

        line_14 = new QFrame(gridLayoutWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_14, 2, 6, 1, 1);

        line_13 = new QFrame(gridLayoutWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_13, 2, 5, 1, 1);

        y1 = new QLabel(gridLayoutWidget);
        y1->setObjectName(QString::fromUtf8("y1"));

        gridLayout->addWidget(y1, 3, 3, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 1, 1, 1);

        cc = new QLabel(gridLayoutWidget);
        cc->setObjectName(QString::fromUtf8("cc"));

        gridLayout->addWidget(cc, 0, 5, 1, 1);

        x2 = new QLabel(gridLayoutWidget);
        x2->setObjectName(QString::fromUtf8("x2"));

        gridLayout->addWidget(x2, 3, 5, 1, 1);

        CameraCoordMark2_Y = new QLabel(gridLayoutWidget);
        CameraCoordMark2_Y->setObjectName(QString::fromUtf8("CameraCoordMark2_Y"));
        CameraCoordMark2_Y->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(CameraCoordMark2_Y, 5, 6, 1, 1);

        CameraCoordMark1_Y = new QLabel(gridLayoutWidget);
        CameraCoordMark1_Y->setObjectName(QString::fromUtf8("CameraCoordMark1_Y"));
        CameraCoordMark1_Y->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(CameraCoordMark1_Y, 4, 6, 1, 1);

        CameraCoordMark3_Y = new QLabel(gridLayoutWidget);
        CameraCoordMark3_Y->setObjectName(QString::fromUtf8("CameraCoordMark3_Y"));
        CameraCoordMark3_Y->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(CameraCoordMark3_Y, 7, 6, 1, 1);

        CameraCoordMark3_X = new QLabel(gridLayoutWidget);
        CameraCoordMark3_X->setObjectName(QString::fromUtf8("CameraCoordMark3_X"));
        CameraCoordMark3_X->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(CameraCoordMark3_X, 7, 5, 1, 1);

        CameraCoordMark1_X = new QLabel(gridLayoutWidget);
        CameraCoordMark1_X->setObjectName(QString::fromUtf8("CameraCoordMark1_X"));
        CameraCoordMark1_X->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(CameraCoordMark1_X, 4, 5, 1, 1);

        CameraCoordMark2_X = new QLabel(gridLayoutWidget);
        CameraCoordMark2_X->setObjectName(QString::fromUtf8("CameraCoordMark2_X"));
        CameraCoordMark2_X->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(CameraCoordMark2_X, 5, 5, 1, 1);

        WorldCoordMark3_Y = new QDoubleSpinBox(gridLayoutWidget);
        WorldCoordMark3_Y->setObjectName(QString::fromUtf8("WorldCoordMark3_Y"));
        WorldCoordMark3_Y->setCursor(QCursor(Qt::IBeamCursor));
        WorldCoordMark3_Y->setSingleStep(0.01);
        WorldCoordMark3_Y->setValue(1);

        gridLayout->addWidget(WorldCoordMark3_Y, 7, 3, 1, 1);


        retranslateUi(calibration_coordinates);

        QMetaObject::connectSlotsByName(calibration_coordinates);
    } // setupUi

    void retranslateUi(QWidget *calibration_coordinates)
    {
        calibration_coordinates->setWindowTitle(QApplication::translate("calibration_coordinates", "\320\241alibration coordinates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        calibration_coordinates->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m2->setText(QApplication::translate("calibration_coordinates", "Marker 2", 0, QApplication::UnicodeUTF8));
        m1->setText(QApplication::translate("calibration_coordinates", "Marker 1", 0, QApplication::UnicodeUTF8));
        m3->setText(QApplication::translate("calibration_coordinates", "Marker 3", 0, QApplication::UnicodeUTF8));
        x1->setText(QApplication::translate("calibration_coordinates", "X", 0, QApplication::UnicodeUTF8));
        y2->setText(QApplication::translate("calibration_coordinates", "Y", 0, QApplication::UnicodeUTF8));
        wc->setText(QApplication::translate("calibration_coordinates", "World coordinates", 0, QApplication::UnicodeUTF8));
        y1->setText(QApplication::translate("calibration_coordinates", "Y", 0, QApplication::UnicodeUTF8));
        cc->setText(QApplication::translate("calibration_coordinates", "Camera coordinates", 0, QApplication::UnicodeUTF8));
        x2->setText(QApplication::translate("calibration_coordinates", "X", 0, QApplication::UnicodeUTF8));
        CameraCoordMark2_Y->setText(QApplication::translate("calibration_coordinates", "0", 0, QApplication::UnicodeUTF8));
        CameraCoordMark1_Y->setText(QApplication::translate("calibration_coordinates", "0", 0, QApplication::UnicodeUTF8));
        CameraCoordMark3_Y->setText(QApplication::translate("calibration_coordinates", "0", 0, QApplication::UnicodeUTF8));
        CameraCoordMark3_X->setText(QApplication::translate("calibration_coordinates", "0", 0, QApplication::UnicodeUTF8));
        CameraCoordMark1_X->setText(QApplication::translate("calibration_coordinates", "0", 0, QApplication::UnicodeUTF8));
        CameraCoordMark2_X->setText(QApplication::translate("calibration_coordinates", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calibration_coordinates: public Ui_calibration_coordinates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CALIBRATION_COORDINATES_UI_H
