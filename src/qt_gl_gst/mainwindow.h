#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "senslocwindow.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(int argc, char *argv[], QWidget *parent = 0);
    sensLocWindow* getsenslocpointer(){return senslocpointer;}
    void setsenslocpointer(sensLocWindow * senslocpointer_){senslocpointer = senslocpointer_;}
    
signals:
    
public slots:

private:
    sensLocWindow *senslocpointer;
    
};

#endif // MAINWINDOW_H
