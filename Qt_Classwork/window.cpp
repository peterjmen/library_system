#include "window.h"

Window::Window(QWidget *parent)
    : QWidget{parent}
{
    setBaseSize(500, 200); //resolution like 1920/1080
    setMaximumSize(1000,400);
    setMinimumSize(250, 200);
    //setFixedSize(0,0) window cannot be scaled

    vLayout = new QVBoxLayout(this); //this declares parent object for this
    //layout is going to be👆 THIS window

    button = new QPushButton("text", this);
            //👆🔘                     👆parent to own window
    vLayout-> addWidget(button, 0); //0 stretches all way accross screen

    //need to connect signal to slot
    connect(button, SIGNAL(clicked()), this, SLOT(buttonPressed()));
            //👆🔘 button is sending   👆because getting function from this window
            //

}

// 👇 creates function that "listens for signal (is part of a class and defining it outside a class
void Window::buttonPressed(){ // need to say class to call it
    //now can make anyt functionality i.e. running test
    qDebug() << "window.cpp Window::buttonPressed";
}
