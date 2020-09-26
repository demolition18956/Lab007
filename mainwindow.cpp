#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainLay = new QHBoxLayout(this);
    aLay = new QVBoxLayout();
    bLay = new QVBoxLayout();
    cLay = new QVBoxLayout();

    ui->centralWidget->setLayout(mainLay);
    mainLay->addStretch();
    mainLay->addLayout(aLay);
    mainLay->addStretch();
    mainLay->addLayout(bLay);
    mainLay->addStretch();
    mainLay->addLayout(cLay);
    mainLay->addStretch();

    d11 = new DragnDropLabel(":/images/red.png");
    d12 = new DragnDropLabel(":/images/red.png");
    d13 = new DragnDropLabel(":/images/red.png");

    aLay->addStretch();
    aLay->addWidget(d11);
    aLay->addWidget(d12);
    aLay->addWidget(d13);
    aLay->addStretch();

    d21 = new DragnDropLabel(":/images/purple.png");
    d22 = new DragnDropLabel(":/images/purple.png");
    d23 = new DragnDropLabel(":/images/purple.png");

    bLay->addStretch();
    bLay->addWidget(d21);
    bLay->addWidget(d22);
    bLay->addWidget(d23);
    bLay->addStretch();

    d31 = new DragnDropLabel(":/images/green.png");
    d32 = new DragnDropLabel(":/images/green.png");
    d33 = new DragnDropLabel(":/images/green.png");

    cLay->addStretch();
    cLay->addWidget(d31);
    cLay->addWidget(d32);
    cLay->addWidget(d33);
    cLay->addStretch();
}

MainWindow::~MainWindow()
{
    delete ui;
}
