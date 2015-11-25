/********************************************************************************
** Form generated from reading UI file 'object_params.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OBJECT_PARAMS_UI_H
#define OBJECT_PARAMS_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_obj_params
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSlider *max_hue;
    QLabel *label_10;
    QSlider *min_saturation;
    QSlider *max_saturation;
    QSlider *max_value;
    QLabel *label_6;
    QLabel *label_3;
    QSlider *min_value;
    QLabel *label_2;
    QLabel *label_9;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_9;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *line_10;
    QFrame *line;
    QSpinBox *min_hue_small;
    QSpinBox *min_value_small;
    QSpinBox *min_saturation_small;
    QSpinBox *max_hue_small;
    QSpinBox *max_saturation_small;
    QSpinBox *max_value_small;
    QSpinBox *min_size_small;
    QSpinBox *max_size_small;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *line_4;
    QFrame *line_6;
    QFrame *line_8;
    QFrame *line_7;
    QFrame *line_5;
    QFrame *line_11;
    QFrame *line_12;
    QSlider *min_hue;
    QSlider *min_size;
    QSlider *max_size;

    void setupUi(QWidget *obj_params)
    {
        if (obj_params->objectName().isEmpty())
            obj_params->setObjectName(QString::fromUtf8("obj_params"));
        obj_params->resize(704, 561);
        gridLayoutWidget = new QWidget(obj_params);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 701, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        max_hue = new QSlider(gridLayoutWidget);
        max_hue->setObjectName(QString::fromUtf8("max_hue"));
        max_hue->setCursor(QCursor(Qt::SizeHorCursor));
        max_hue->setMaximum(255);
        max_hue->setValue(255);
        max_hue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(max_hue, 1, 3, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setFamily(QString::fromUtf8("Serif"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        min_saturation = new QSlider(gridLayoutWidget);
        min_saturation->setObjectName(QString::fromUtf8("min_saturation"));
        min_saturation->setCursor(QCursor(Qt::SizeHorCursor));
        min_saturation->setMaximum(255);
        min_saturation->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(min_saturation, 3, 3, 1, 1);

        max_saturation = new QSlider(gridLayoutWidget);
        max_saturation->setObjectName(QString::fromUtf8("max_saturation"));
        max_saturation->setCursor(QCursor(Qt::SizeHorCursor));
        max_saturation->setMaximum(255);
        max_saturation->setValue(255);
        max_saturation->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(max_saturation, 4, 3, 1, 1);

        max_value = new QSlider(gridLayoutWidget);
        max_value->setObjectName(QString::fromUtf8("max_value"));
        max_value->setCursor(QCursor(Qt::SizeHorCursor));
        max_value->setMaximum(255);
        max_value->setValue(255);
        max_value->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(max_value, 7, 3, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        min_value = new QSlider(gridLayoutWidget);
        min_value->setObjectName(QString::fromUtf8("min_value"));
        min_value->setCursor(QCursor(Qt::SizeHorCursor));
        min_value->setMaximum(255);
        min_value->setValue(0);
        min_value->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(min_value, 6, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Serif"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_9->setFont(font1);
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setMouseTracking(false);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 8, 0, 1, 1);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setLineWidth(1);
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 2, 3, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 9, 0, 1, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 2, 5, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 1);

        min_hue_small = new QSpinBox(gridLayoutWidget);
        min_hue_small->setObjectName(QString::fromUtf8("min_hue_small"));
        min_hue_small->setCursor(QCursor(Qt::IBeamCursor));
        min_hue_small->setMaximum(255);

        gridLayout->addWidget(min_hue_small, 0, 5, 1, 1);

        min_value_small = new QSpinBox(gridLayoutWidget);
        min_value_small->setObjectName(QString::fromUtf8("min_value_small"));
        min_value_small->setCursor(QCursor(Qt::IBeamCursor));
        min_value_small->setMaximum(255);

        gridLayout->addWidget(min_value_small, 6, 5, 1, 1);

        min_saturation_small = new QSpinBox(gridLayoutWidget);
        min_saturation_small->setObjectName(QString::fromUtf8("min_saturation_small"));
        min_saturation_small->setCursor(QCursor(Qt::IBeamCursor));
        min_saturation_small->setMaximum(255);

        gridLayout->addWidget(min_saturation_small, 3, 5, 1, 1);

        max_hue_small = new QSpinBox(gridLayoutWidget);
        max_hue_small->setObjectName(QString::fromUtf8("max_hue_small"));
        max_hue_small->setCursor(QCursor(Qt::IBeamCursor));
        max_hue_small->setMaximum(255);
        max_hue_small->setValue(255);

        gridLayout->addWidget(max_hue_small, 1, 5, 1, 1);

        max_saturation_small = new QSpinBox(gridLayoutWidget);
        max_saturation_small->setObjectName(QString::fromUtf8("max_saturation_small"));
        max_saturation_small->setMaximum(255);
        max_saturation_small->setValue(255);

        gridLayout->addWidget(max_saturation_small, 4, 5, 1, 1);

        max_value_small = new QSpinBox(gridLayoutWidget);
        max_value_small->setObjectName(QString::fromUtf8("max_value_small"));
        max_value_small->setCursor(QCursor(Qt::IBeamCursor));
        max_value_small->setMaximum(255);
        max_value_small->setValue(255);

        gridLayout->addWidget(max_value_small, 7, 5, 1, 1);

        min_size_small = new QSpinBox(gridLayoutWidget);
        min_size_small->setObjectName(QString::fromUtf8("min_size_small"));
        min_size_small->setCursor(QCursor(Qt::IBeamCursor));
        min_size_small->setMaximum(10000);

        gridLayout->addWidget(min_size_small, 9, 5, 1, 1);

        max_size_small = new QSpinBox(gridLayoutWidget);
        max_size_small->setObjectName(QString::fromUtf8("max_size_small"));
        max_size_small->setCursor(QCursor(Qt::IBeamCursor));
        max_size_small->setMaximum(10000);
        max_size_small->setValue(10000);

        gridLayout->addWidget(max_size_small, 10, 5, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 10, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 9, 1, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 8, 1, 1, 1);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 5, 1, 1, 1);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 2, 1, 1, 1);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 5, 3, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 8, 3, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 5, 5, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 8, 5, 1, 1);

        min_hue = new QSlider(gridLayoutWidget);
        min_hue->setObjectName(QString::fromUtf8("min_hue"));
        min_hue->setCursor(QCursor(Qt::SizeHorCursor));
        min_hue->setMaximum(255);
        min_hue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(min_hue, 0, 3, 1, 1);

        min_size = new QSlider(gridLayoutWidget);
        min_size->setObjectName(QString::fromUtf8("min_size"));
        min_size->setCursor(QCursor(Qt::SizeHorCursor));
        min_size->setMaximum(10000);
        min_size->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(min_size, 9, 3, 1, 1);

        max_size = new QSlider(gridLayoutWidget);
        max_size->setObjectName(QString::fromUtf8("max_size"));
        max_size->setCursor(QCursor(Qt::SizeHorCursor));
        max_size->setMaximum(10000);
        max_size->setValue(10000);
        max_size->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(max_size, 10, 3, 1, 1);


        retranslateUi(obj_params);
        QObject::connect(min_hue, SIGNAL(valueChanged(int)), min_hue_small, SLOT(setValue(int)));
        QObject::connect(min_hue_small, SIGNAL(valueChanged(int)), min_hue, SLOT(setValue(int)));
        QObject::connect(max_hue, SIGNAL(valueChanged(int)), max_hue_small, SLOT(setValue(int)));
        QObject::connect(max_hue_small, SIGNAL(valueChanged(int)), max_hue, SLOT(setValue(int)));
        QObject::connect(min_saturation, SIGNAL(valueChanged(int)), min_saturation_small, SLOT(setValue(int)));
        QObject::connect(min_saturation_small, SIGNAL(valueChanged(int)), min_saturation, SLOT(setValue(int)));
        QObject::connect(max_saturation, SIGNAL(valueChanged(int)), max_saturation_small, SLOT(setValue(int)));
        QObject::connect(max_saturation_small, SIGNAL(valueChanged(int)), max_saturation, SLOT(setValue(int)));
        QObject::connect(min_value, SIGNAL(valueChanged(int)), min_value_small, SLOT(setValue(int)));
        QObject::connect(min_value_small, SIGNAL(valueChanged(int)), min_value, SLOT(setValue(int)));
        QObject::connect(max_value, SIGNAL(valueChanged(int)), max_value_small, SLOT(setValue(int)));
        QObject::connect(max_value_small, SIGNAL(valueChanged(int)), max_value, SLOT(setValue(int)));
        QObject::connect(min_size, SIGNAL(valueChanged(int)), min_size_small, SLOT(setValue(int)));
        QObject::connect(min_size_small, SIGNAL(valueChanged(int)), min_size, SLOT(setValue(int)));
        QObject::connect(max_size, SIGNAL(valueChanged(int)), max_size_small, SLOT(setValue(int)));
        QObject::connect(max_size_small, SIGNAL(valueChanged(int)), max_size, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(obj_params);
    } // setupUi

    void retranslateUi(QWidget *obj_params)
    {
        obj_params->setWindowTitle(QApplication::translate("obj_params", "Object params", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("obj_params", "Saturation", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("obj_params", "min", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("obj_params", "max", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("obj_params", "max", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("obj_params", "Hue", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("obj_params", "Value", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("obj_params", "Size", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("obj_params", "min", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("obj_params", "max", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("obj_params", "max", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("obj_params", "min", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("obj_params", "min", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class obj_params: public Ui_obj_params {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OBJECT_PARAMS_UI_H
