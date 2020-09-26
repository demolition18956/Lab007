#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dragndroplabel.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QHBoxLayout *mainLay;

    QVBoxLayout *aLay;
    DragnDropLabel *d11;
    DragnDropLabel *d12;
    DragnDropLabel *d13;

    QVBoxLayout *bLay;
    DragnDropLabel *d21;
    DragnDropLabel *d22;
    DragnDropLabel *d23;

    QVBoxLayout *cLay;
    DragnDropLabel *d31;
    DragnDropLabel *d32;
    DragnDropLabel *d33;

};

#endif // MAINWINDOW_H
