﻿#ifndef WIDGET_H
#define WIDGET_H

#include <QTimer>
#include <QWidget>
#include <string>
#include <vector>
#include <memory>
#include "ui_widget.h"

namespace Ui {
class Widget;
}
class Widget : public QWidget, public Ui::Widget
{
    class ValidJob;
    ValidJob* validJob;
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    /* if PSA and PM chosed*/
    void on_PSA_clicked(bool checked);
    void on_PM_clicked(bool checked);

    /* action operate */
    void on_ClearAllDataBtn_clicked();

    /* choose schedule algorithm */
    void on_FCFS_clicked();
    void on_MFQ_clicked();
    void on_RR_clicked();
    void on_SJF_clicked();
    void on_HRRN_clicked();
    void on_EDF_clicked();

    /* save job info */
    void on_PriorityCombo_currentIndexChanged(int index);

    /* clear or commit a new job */
    void on_ClearInputBtn_clicked();
    void on_CommitInputBtn_clicked();

    /* add job from file */
    void on_OpenFile_clicked();


    void on_RunBtn_clicked();
    void on_PauseBtn_clicked();
    void on_StopBtn_clicked();
    void on_PauseBtn_pressed();

private:
    QTimer *timer;
    std::string scheduleMethod;
    bool    isRun;
    bool    isRSA;
    bool    isPM;
    static unsigned short runtime;
    std::vector<std::string> jobNames;


};

#endif // WIDGET_H
