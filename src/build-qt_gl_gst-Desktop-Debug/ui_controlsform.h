/********************************************************************************
** Form generated from reading UI file 'controlsform.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLSFORM_H
#define UI_CONTROLSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlsForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *glWidgetLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *cycVidShadPushButton;
    QPushButton *cycModShadPushButton;
    QCheckBox *stackVidsCheckBox;
    QPushButton *cycBackGndPushButton;
    QPushButton *loadVidPushButton;
    QPushButton *resetPosPushButton;
    QPushButton *loadAlphaPushButton;
    QCheckBox *rotateCheckBox;
    QPushButton *loadModelPushButton;
    QPushButton *exitPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *showYUVPushButton;

    void setupUi(QWidget *ControlsForm)
    {
        if (ControlsForm->objectName().isEmpty())
            ControlsForm->setObjectName(QStringLiteral("ControlsForm"));
        ControlsForm->resize(859, 412);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControlsForm->sizePolicy().hasHeightForWidth());
        ControlsForm->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ControlsForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        glWidgetLayout = new QHBoxLayout();
        glWidgetLayout->setObjectName(QStringLiteral("glWidgetLayout"));
        glWidgetLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalSpacer = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        glWidgetLayout->addItem(verticalSpacer);


        verticalLayout->addLayout(glWidgetLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cycVidShadPushButton = new QPushButton(ControlsForm);
        cycVidShadPushButton->setObjectName(QStringLiteral("cycVidShadPushButton"));

        gridLayout->addWidget(cycVidShadPushButton, 0, 1, 1, 1);

        cycModShadPushButton = new QPushButton(ControlsForm);
        cycModShadPushButton->setObjectName(QStringLiteral("cycModShadPushButton"));

        gridLayout->addWidget(cycModShadPushButton, 0, 2, 1, 1);

        stackVidsCheckBox = new QCheckBox(ControlsForm);
        stackVidsCheckBox->setObjectName(QStringLiteral("stackVidsCheckBox"));

        gridLayout->addWidget(stackVidsCheckBox, 1, 5, 1, 1);

        cycBackGndPushButton = new QPushButton(ControlsForm);
        cycBackGndPushButton->setObjectName(QStringLiteral("cycBackGndPushButton"));

        gridLayout->addWidget(cycBackGndPushButton, 0, 6, 1, 1);

        loadVidPushButton = new QPushButton(ControlsForm);
        loadVidPushButton->setObjectName(QStringLiteral("loadVidPushButton"));

        gridLayout->addWidget(loadVidPushButton, 1, 1, 1, 1);

        resetPosPushButton = new QPushButton(ControlsForm);
        resetPosPushButton->setObjectName(QStringLiteral("resetPosPushButton"));

        gridLayout->addWidget(resetPosPushButton, 1, 6, 1, 1);

        loadAlphaPushButton = new QPushButton(ControlsForm);
        loadAlphaPushButton->setObjectName(QStringLiteral("loadAlphaPushButton"));

        gridLayout->addWidget(loadAlphaPushButton, 1, 3, 1, 1);

        rotateCheckBox = new QCheckBox(ControlsForm);
        rotateCheckBox->setObjectName(QStringLiteral("rotateCheckBox"));
        rotateCheckBox->setChecked(true);

        gridLayout->addWidget(rotateCheckBox, 0, 5, 1, 1);

        loadModelPushButton = new QPushButton(ControlsForm);
        loadModelPushButton->setObjectName(QStringLiteral("loadModelPushButton"));

        gridLayout->addWidget(loadModelPushButton, 1, 2, 1, 1);

        exitPushButton = new QPushButton(ControlsForm);
        exitPushButton->setObjectName(QStringLiteral("exitPushButton"));

        gridLayout->addWidget(exitPushButton, 1, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        showYUVPushButton = new QPushButton(ControlsForm);
        showYUVPushButton->setObjectName(QStringLiteral("showYUVPushButton"));

        gridLayout->addWidget(showYUVPushButton, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ControlsForm);

        QMetaObject::connectSlotsByName(ControlsForm);
    } // setupUi

    void retranslateUi(QWidget *ControlsForm)
    {
        ControlsForm->setWindowTitle(QApplication::translate("ControlsForm", "Form", 0));
        cycVidShadPushButton->setText(QApplication::translate("ControlsForm", "Cycle Vid Shader", 0));
        cycModShadPushButton->setText(QApplication::translate("ControlsForm", "Cycle Model Shader", 0));
        stackVidsCheckBox->setText(QApplication::translate("ControlsForm", "Stack Videos", 0));
        cycBackGndPushButton->setText(QApplication::translate("ControlsForm", "Cycle Background", 0));
        loadVidPushButton->setText(QApplication::translate("ControlsForm", "Load Video", 0));
        resetPosPushButton->setText(QApplication::translate("ControlsForm", "Reset Position", 0));
        loadAlphaPushButton->setText(QApplication::translate("ControlsForm", "Load Alphamask", 0));
        rotateCheckBox->setText(QApplication::translate("ControlsForm", "Rotate", 0));
        loadModelPushButton->setText(QApplication::translate("ControlsForm", "Load Model", 0));
        exitPushButton->setText(QApplication::translate("ControlsForm", "Exit", 0));
        showYUVPushButton->setText(QApplication::translate("ControlsForm", "Show YUV Window", 0));
    } // retranslateUi

};

namespace Ui {
    class ControlsForm: public Ui_ControlsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLSFORM_H
