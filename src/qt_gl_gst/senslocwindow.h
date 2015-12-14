#ifndef SENSLOCWINDOW_H
#define SENSLOCWINDOW_H

#include <QDialog>
#include <QSpinBox>
#include <QSlider>

namespace Ui {
class sensLocWindow;
}

class sensLocWindow : public QDialog
{
    Q_OBJECT

public:
    explicit sensLocWindow(QWidget *parent = 0);
//    sensLocWindow();
    ~sensLocWindow();

    int getx0Rot(){return x0Rot;}
    int gety0Rot(){return y0Rot;}
    int getz0Rot(){return z0Rot;}
    int getx1Rot(){return x1Rot;}
    int gety1Rot(){return y1Rot;}
    int getz1Rot(){return z1Rot;}
    int getx2Rot(){return x2Rot;}
    int gety2Rot(){return y2Rot;}
    int getz2Rot(){return z2Rot;}

private slots:

    void on_vid0zRot_valueChanged(int value);

    void on_vid0yRot_valueChanged(int value);

    void on_vid0xRot_valueChanged(int value);

    void on_vid1xRot_valueChanged(int value);

    void on_vid1yRot_valueChanged(int value);

    void on_vid1zRot_valueChanged(int value);

    void on_vid2xRot_valueChanged(int value);

    void on_vid2yRot_valueChanged(int value);

    void on_vid2zRot_valueChanged(int value);

private:
    Ui::sensLocWindow *ui;
    int x0Rot;
    int y0Rot;
    int z0Rot;
    int x1Rot;
    int y1Rot;
    int z1Rot;
    int x2Rot;
    int y2Rot;
    int z2Rot;
};

#endif // SENSLOCWINDOW_H
