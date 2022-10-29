#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLayout>


class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

private:
    QPushButton *button; //pointer to a button
    QVBoxLayout *vLayout;

signals:

private slots: //can receive signal
    void buttonPressed(); //custom slot to connect functionality to


};

#endif // WINDOW_H
