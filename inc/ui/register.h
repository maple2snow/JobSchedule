﻿#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QKeyEvent>
#include "ui_register.h"

namespace Ui {
class Register;
}

class Register : public QWidget, public Ui::Register
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();
    void keyPressEvent(QKeyEvent *event);
private slots:
    void on_OkBtn_clicked();

    void on_CancelBtn_clicked();

private:
};

#endif // REGISTER_H
