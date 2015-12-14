#ifndef CONTROLSFORM_H
#define CONTROLSFORM_H

#include <QWidget>
#include "senslocwindow.h"

class GLWidget;

namespace Ui {
class ControlsForm;
}

class ControlsForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit ControlsForm(GLWidget *glWidgetToInsert, QWidget *parent = 0);
    ~ControlsForm();
    sensLocWindow *getsenslocpointer(){return senslocpointer;}
    void setsenslocpointer(sensLocWindow *pointer){senslocpointer = pointer;}

protected:
    void closeEvent(QCloseEvent* event);
    
private slots:
    void on_sensLocPushButton_clicked();

private:
    Ui::ControlsForm *ui;
    sensLocWindow *secondwindow;
    sensLocWindow *senslocpointer;
};

#endif // CONTROLSFORM_H
