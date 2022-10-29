#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    w = new Window(nullptr); //null ptr makes it not parented to anything
    connect(ui->pushButton, SIGNAL(clicked()), w, SLOT(show()));
            //👆 because in ui can just ui->   👆 w window that is set up
            //pushButoon default, also push button_2 + _3
}

MainWindow::~MainWindow()
{
    delete ui;
}

