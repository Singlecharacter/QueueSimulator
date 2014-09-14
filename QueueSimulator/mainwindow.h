#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSpinBox>
#include <QComboBox>
#include <QLabel>
#include <QCheckBox>

#include <vector>

#include "simrunner.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void simulateClicked();

private:

    Ui::MainWindow *ui;

    //Pointers to ui elements
    QPushButton *simulateButton;
    QSpinBox *simNumberBox;
    QSpinBox *cashierNumBox;
    QSpinBox *minServiceBox;
    QSpinBox *maxServiceBox;
    QSpinBox *minItemsBox;
    QSpinBox *maxItemsBox;
    QComboBox *simModeBox;
    QCheckBox *randTimeBox;
    QCheckBox *cartTimeBox;

    QLabel *servedCust30;
    QLabel *servedCust60;
    QLabel *servedCust120;
    QLabel *servedCust480;
    QLabel *averageWait30;
    QLabel *averageWait60;
    QLabel *averageWait120;
    QLabel *averageWait480;
    QLabel *longestWait30;
    QLabel *longestWait60;
    QLabel *longestWait120;
    QLabel *longestWait480;

    SimRunner mySimmer;
};

#endif // MAINWINDOW_H
