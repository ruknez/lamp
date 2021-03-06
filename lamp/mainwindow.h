#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "iLampImplementation.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( QWidget * parent = nullptr );
    virtual ~MainWindow();

private:
    Ui::MainWindow * ui;
};
#endif // MAINWINDOW_H
