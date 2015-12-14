#include "senslocwindow.h"
#include "ui_senslocwindow.h"
#include "glwidget.h"
#include <iostream>

sensLocWindow::sensLocWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sensLocWindow)
{
    ui->setupUi(this);

    x0Rot = 0;
    y0Rot = 0;
    z0Rot = 0;
    x1Rot = 0;
    y1Rot = 0;
    z1Rot = 0;
    x2Rot = 0;
    y2Rot = 0;
    z2Rot = 0;
}



sensLocWindow::~sensLocWindow()
{
    delete ui;
}


void sensLocWindow::on_vid0zRot_valueChanged(int value)
{
    z0Rot = value;
}

void sensLocWindow::on_vid0yRot_valueChanged(int value)
{
    y0Rot = value;
}

void sensLocWindow::on_vid0xRot_valueChanged(int value)
{
    x0Rot = value;
}

void sensLocWindow::on_vid1xRot_valueChanged(int value)
{
    x1Rot = value;
}

void sensLocWindow::on_vid1yRot_valueChanged(int value)
{
    y1Rot = value;
}

void sensLocWindow::on_vid1zRot_valueChanged(int value)
{
    z1Rot = value;
}

void sensLocWindow::on_vid2xRot_valueChanged(int value)
{
    x2Rot = value;
}

void sensLocWindow::on_vid2yRot_valueChanged(int value)
{
    y2Rot = value;
}

void sensLocWindow::on_vid2zRot_valueChanged(int value)
{
    z2Rot = value;
}
