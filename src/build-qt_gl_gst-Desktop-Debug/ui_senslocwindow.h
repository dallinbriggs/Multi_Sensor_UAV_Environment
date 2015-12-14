/********************************************************************************
** Form generated from reading UI file 'senslocwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSLOCWINDOW_H
#define UI_SENSLOCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sensLocWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSlider *vid0xRot;
    QSpinBox *vid0xRotSpin;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSlider *vid0yRot;
    QSpinBox *vid0yRotSpin;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSlider *vid0zRot;
    QSpinBox *vid0zRotSpin;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSlider *vid1xRot;
    QSpinBox *vid1xRotSpin;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSlider *vid1yRot;
    QSpinBox *vid1yRotSpin;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSlider *vid1zRot;
    QSpinBox *vid1zRotSpin;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSlider *vid2xRot;
    QSpinBox *vid2xRotSpin;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QSlider *vid2yRot;
    QSpinBox *vid2yRotSpin;
    QWidget *widget8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QSlider *vid2zRot;
    QSpinBox *vid2zRotSpin;

    void setupUi(QDialog *sensLocWindow)
    {
        if (sensLocWindow->objectName().isEmpty())
            sensLocWindow->setObjectName(QStringLiteral("sensLocWindow"));
        sensLocWindow->resize(504, 581);
        buttonBox = new QDialogButtonBox(sensLocWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(130, 520, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(sensLocWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 281, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_12 = new QLabel(sensLocWindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 200, 66, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_12->setFont(font1);
        label_13 = new QLabel(sensLocWindow);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 360, 66, 21));
        label_13->setFont(font1);
        label_2 = new QLabel(sensLocWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 66, 21));
        label_2->setFont(font1);
        widget = new QWidget(sensLocWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 70, 421, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        vid0xRot = new QSlider(widget);
        vid0xRot->setObjectName(QStringLiteral("vid0xRot"));
        vid0xRot->setMaximum(359);
        vid0xRot->setValue(0);
        vid0xRot->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(vid0xRot);

        vid0xRotSpin = new QSpinBox(widget);
        vid0xRotSpin->setObjectName(QStringLiteral("vid0xRotSpin"));
        vid0xRotSpin->setMaximum(359);

        horizontalLayout->addWidget(vid0xRotSpin);

        widget1 = new QWidget(sensLocWindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 110, 421, 33));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        vid0yRot = new QSlider(widget1);
        vid0yRot->setObjectName(QStringLiteral("vid0yRot"));
        vid0yRot->setMaximum(359);
        vid0yRot->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(vid0yRot);

        vid0yRotSpin = new QSpinBox(widget1);
        vid0yRotSpin->setObjectName(QStringLiteral("vid0yRotSpin"));
        vid0yRotSpin->setMaximum(359);

        horizontalLayout_2->addWidget(vid0yRotSpin);

        widget2 = new QWidget(sensLocWindow);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(50, 150, 421, 33));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        vid0zRot = new QSlider(widget2);
        vid0zRot->setObjectName(QStringLiteral("vid0zRot"));
        vid0zRot->setMaximum(359);
        vid0zRot->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(vid0zRot);

        vid0zRotSpin = new QSpinBox(widget2);
        vid0zRotSpin->setObjectName(QStringLiteral("vid0zRotSpin"));
        vid0zRotSpin->setMaximum(359);

        horizontalLayout_3->addWidget(vid0zRotSpin);

        widget3 = new QWidget(sensLocWindow);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(50, 220, 421, 33));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        vid1xRot = new QSlider(widget3);
        vid1xRot->setObjectName(QStringLiteral("vid1xRot"));
        vid1xRot->setMaximum(359);
        vid1xRot->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(vid1xRot);

        vid1xRotSpin = new QSpinBox(widget3);
        vid1xRotSpin->setObjectName(QStringLiteral("vid1xRotSpin"));
        vid1xRotSpin->setMaximum(359);

        horizontalLayout_4->addWidget(vid1xRotSpin);

        widget4 = new QWidget(sensLocWindow);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(50, 260, 421, 33));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        vid1yRot = new QSlider(widget4);
        vid1yRot->setObjectName(QStringLiteral("vid1yRot"));
        vid1yRot->setMaximum(359);
        vid1yRot->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(vid1yRot);

        vid1yRotSpin = new QSpinBox(widget4);
        vid1yRotSpin->setObjectName(QStringLiteral("vid1yRotSpin"));
        vid1yRotSpin->setMaximum(359);

        horizontalLayout_5->addWidget(vid1yRotSpin);

        widget5 = new QWidget(sensLocWindow);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(50, 300, 421, 33));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        vid1zRot = new QSlider(widget5);
        vid1zRot->setObjectName(QStringLiteral("vid1zRot"));
        vid1zRot->setMaximum(359);
        vid1zRot->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(vid1zRot);

        vid1zRotSpin = new QSpinBox(widget5);
        vid1zRotSpin->setObjectName(QStringLiteral("vid1zRotSpin"));
        vid1zRotSpin->setMaximum(359);

        horizontalLayout_6->addWidget(vid1zRotSpin);

        widget6 = new QWidget(sensLocWindow);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(50, 380, 421, 33));
        horizontalLayout_7 = new QHBoxLayout(widget6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget6);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        vid2xRot = new QSlider(widget6);
        vid2xRot->setObjectName(QStringLiteral("vid2xRot"));
        vid2xRot->setMaximum(359);
        vid2xRot->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(vid2xRot);

        vid2xRotSpin = new QSpinBox(widget6);
        vid2xRotSpin->setObjectName(QStringLiteral("vid2xRotSpin"));
        vid2xRotSpin->setMaximum(359);

        horizontalLayout_7->addWidget(vid2xRotSpin);

        widget7 = new QWidget(sensLocWindow);
        widget7->setObjectName(QStringLiteral("widget7"));
        widget7->setGeometry(QRect(50, 420, 421, 33));
        horizontalLayout_8 = new QHBoxLayout(widget7);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget7);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_8->addWidget(label_10);

        vid2yRot = new QSlider(widget7);
        vid2yRot->setObjectName(QStringLiteral("vid2yRot"));
        vid2yRot->setMaximum(359);
        vid2yRot->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(vid2yRot);

        vid2yRotSpin = new QSpinBox(widget7);
        vid2yRotSpin->setObjectName(QStringLiteral("vid2yRotSpin"));
        vid2yRotSpin->setMaximum(359);

        horizontalLayout_8->addWidget(vid2yRotSpin);

        widget8 = new QWidget(sensLocWindow);
        widget8->setObjectName(QStringLiteral("widget8"));
        widget8->setGeometry(QRect(50, 460, 421, 33));
        horizontalLayout_9 = new QHBoxLayout(widget8);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget8);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        vid2zRot = new QSlider(widget8);
        vid2zRot->setObjectName(QStringLiteral("vid2zRot"));
        vid2zRot->setMaximum(359);
        vid2zRot->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(vid2zRot);

        vid2zRotSpin = new QSpinBox(widget8);
        vid2zRotSpin->setObjectName(QStringLiteral("vid2zRotSpin"));
        vid2zRotSpin->setMaximum(359);

        horizontalLayout_9->addWidget(vid2zRotSpin);

        buttonBox->raise();
        label->raise();
        vid0xRot->raise();
        vid0yRot->raise();
        vid0zRot->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        vid0xRotSpin->raise();
        vid0yRotSpin->raise();
        vid0zRotSpin->raise();
        vid1xRotSpin->raise();
        vid1yRotSpin->raise();
        vid1zRotSpin->raise();
        vid2xRotSpin->raise();
        vid2yRotSpin->raise();
        vid2zRotSpin->raise();
        vid1xRot->raise();
        vid1yRot->raise();
        vid1zRot->raise();
        vid2xRot->raise();
        vid2yRot->raise();
        vid2zRot->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_2->raise();

        retranslateUi(sensLocWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), sensLocWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sensLocWindow, SLOT(reject()));
        QObject::connect(vid0xRot, SIGNAL(valueChanged(int)), vid0xRotSpin, SLOT(setValue(int)));
        QObject::connect(vid0xRotSpin, SIGNAL(valueChanged(int)), vid0xRot, SLOT(setValue(int)));
        QObject::connect(vid0yRot, SIGNAL(sliderMoved(int)), vid0yRotSpin, SLOT(setValue(int)));
        QObject::connect(vid0yRotSpin, SIGNAL(valueChanged(int)), vid0yRot, SLOT(setValue(int)));
        QObject::connect(vid0zRot, SIGNAL(sliderMoved(int)), vid0zRotSpin, SLOT(setValue(int)));
        QObject::connect(vid0zRotSpin, SIGNAL(valueChanged(int)), vid0zRot, SLOT(setValue(int)));
        QObject::connect(vid1xRot, SIGNAL(sliderMoved(int)), vid1xRotSpin, SLOT(setValue(int)));
        QObject::connect(vid1xRotSpin, SIGNAL(valueChanged(int)), vid1xRot, SLOT(setValue(int)));
        QObject::connect(vid1yRot, SIGNAL(sliderMoved(int)), vid1yRotSpin, SLOT(setValue(int)));
        QObject::connect(vid1yRotSpin, SIGNAL(valueChanged(int)), vid1yRot, SLOT(setValue(int)));
        QObject::connect(vid1zRot, SIGNAL(sliderMoved(int)), vid1zRotSpin, SLOT(setValue(int)));
        QObject::connect(vid1zRotSpin, SIGNAL(valueChanged(int)), vid1zRot, SLOT(setValue(int)));
        QObject::connect(vid2xRot, SIGNAL(sliderMoved(int)), vid2xRotSpin, SLOT(setValue(int)));
        QObject::connect(vid2xRotSpin, SIGNAL(valueChanged(int)), vid2xRot, SLOT(setValue(int)));
        QObject::connect(vid2yRot, SIGNAL(sliderMoved(int)), vid2yRotSpin, SLOT(setValue(int)));
        QObject::connect(vid2yRotSpin, SIGNAL(valueChanged(int)), vid2yRot, SLOT(setValue(int)));
        QObject::connect(vid2zRot, SIGNAL(sliderMoved(int)), vid2zRotSpin, SLOT(setValue(int)));
        QObject::connect(vid2zRotSpin, SIGNAL(valueChanged(int)), vid2zRot, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(sensLocWindow);
    } // setupUi

    void retranslateUi(QDialog *sensLocWindow)
    {
        sensLocWindow->setWindowTitle(QApplication::translate("sensLocWindow", "Dialog", 0));
        label->setText(QApplication::translate("sensLocWindow", "Set the Location of the Sensors", 0));
        label_12->setText(QApplication::translate("sensLocWindow", "Video 1:", 0));
        label_13->setText(QApplication::translate("sensLocWindow", "Video 2:", 0));
        label_2->setText(QApplication::translate("sensLocWindow", "Video 0:", 0));
        label_3->setText(QApplication::translate("sensLocWindow", "Rotation about x-axis", 0));
        label_4->setText(QApplication::translate("sensLocWindow", "Rotation about y-axis", 0));
        label_5->setText(QApplication::translate("sensLocWindow", "Rotation about z-axis", 0));
        label_6->setText(QApplication::translate("sensLocWindow", "Rotation about x-axis", 0));
        label_7->setText(QApplication::translate("sensLocWindow", "Rotation about y-axis", 0));
        label_8->setText(QApplication::translate("sensLocWindow", "Rotation about z-axis", 0));
        label_9->setText(QApplication::translate("sensLocWindow", "Rotation about x-axis", 0));
        label_10->setText(QApplication::translate("sensLocWindow", "Rotation about y-axis", 0));
        label_11->setText(QApplication::translate("sensLocWindow", "Rotation about z-axis", 0));
    } // retranslateUi

};

namespace Ui {
    class sensLocWindow: public Ui_sensLocWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSLOCWINDOW_H
