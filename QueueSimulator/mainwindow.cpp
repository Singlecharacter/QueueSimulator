#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    simulateButton = ui->simulateButton;
    simNumberBox = ui->simNumberBox;
    cashierNumBox = ui->cashierNumBox;
    minServiceBox = ui->minServiceBox;
    maxServiceBox = ui->maxServiceBox;
    minItemsBox = ui->minItemsBox;
    maxItemsBox = ui->maxItemsBox;
    simModeBox = ui->simModeBox;
    randTimeBox = ui->randTimeBox;
    cartTimeBox = ui->cartTimeBox;

    simModeBox->addItem("One queue, one cashier");
    simModeBox->addItem("One queue, multiple cashiers");
    simModeBox->addItem("Multiple queues, multiple cashiers");
    simModeBox->adjustSize();

    servedCust30 = ui->servedCust30;
    servedCust60 = ui->servedCust60;
    servedCust120 = ui->servedCust120;
    servedCust480 = ui->servedCust480;

    averageWait30 = ui->averageWait30;
    averageWait60 = ui->averageWait60;
    averageWait120 = ui->averageWait120;
    averageWait480 = ui->averageWait480;

    longestWait30 = ui->longestWait30;
    longestWait60 = ui->longestWait60;
    longestWait120 = ui->longestWait120;
    longestWait480 = ui->longestWait480;

    servedCust30->setText("");
    servedCust60->setText("");
    servedCust120->setText("");
    servedCust480->setText("");

    averageWait30->setText("");
    averageWait60->setText("");
    averageWait120->setText("");
    averageWait480->setText("");

    longestWait30->setText("");
    longestWait60->setText("");
    longestWait120->setText("");
    longestWait480->setText("");

    connect(simulateButton,SIGNAL(clicked()),this,SLOT(simulateClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::simulateClicked()
{
    float totalCust30 = 0;
    float totalCust60 = 0;
    float totalCust120 = 0;
    float totalCust480 = 0;
    float totalAverage30 = 0;
    float totalAverage60 = 0;
    float totalAverage120 = 0;
    float totalAverage480 = 0;
    int longest30 = 0;
    int longest60 = 0;
    int longest120 = 0;
    int longest480 = 0;
    int simTimes = simNumberBox->value();
    int serviceLow = 0;
    int serviceHigh = 0;

    if(randTimeBox->isChecked())
    {
        if(!cartTimeBox->isChecked())
        {
            serviceLow = minServiceBox->value();
            serviceHigh = maxServiceBox->value();
        }
        else
        {
            serviceLow = minItemsBox->value();
            serviceHigh = maxItemsBox->value();
        }
    }
    else
    {
        serviceLow = 1;
        serviceHigh = 1;
    }

    std::vector<float> simValues;

    for(int i = 0; i < simTimes; i++)
    {
        if(simModeBox->currentIndex() == 0)
        {
            simValues = mySimmer.basicSim(30,serviceLow,serviceHigh,false);
        }
        else if(simModeBox->currentIndex() == 1)
        {
            simValues = mySimmer.multiCashierSim(30,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        else
        {
            simValues = mySimmer.multiQueueSim(30,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        totalCust30 += simValues.at(0);
        totalAverage30 += simValues.at(1);
        if(simValues.at(2) > longest30)
        {
            longest30 = simValues.at(2);
        }

        if(simModeBox->currentIndex() == 0)
        {
            simValues = mySimmer.basicSim(60,serviceLow,serviceHigh,false);
        }
        else if(simModeBox->currentIndex() == 1)
        {
            simValues = mySimmer.multiCashierSim(60,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        else
        {
            simValues = mySimmer.multiQueueSim(60,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        totalCust60 += simValues.at(0);
        totalAverage60 += simValues.at(1);
        if(simValues.at(2) > longest60)
        {
            longest60 = simValues.at(2);
        }

        if(simModeBox->currentIndex() == 0)
        {
            simValues = mySimmer.basicSim(120,serviceLow,serviceHigh,false);
        }
        else if(simModeBox->currentIndex() == 1)
        {
            simValues = mySimmer.multiCashierSim(120,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        else
        {
            simValues = mySimmer.multiQueueSim(120,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        totalCust120 += simValues.at(0);
        totalAverage120 += simValues.at(1);
        if(simValues.at(2) > longest120)
        {
            longest120 = simValues.at(2);
        }

        if(simModeBox->currentIndex() == 0)
        {
            simValues = mySimmer.basicSim(480,serviceLow,serviceHigh,false);
        }
        else if(simModeBox->currentIndex() == 1)
        {
            simValues = mySimmer.multiCashierSim(480,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        else
        {
            simValues = mySimmer.multiQueueSim(480,serviceLow,serviceHigh,false,cashierNumBox->value());
        }
        totalCust480 += simValues.at(0);
        totalAverage480 += simValues.at(1);
        if(simValues.at(2) > longest480)
        {
            longest480 = simValues.at(2);
        }
    }

    float average30 = totalAverage30/simTimes;
    float average60 = totalAverage60/simTimes;
    float average120 = totalAverage120/simTimes;
    float average480 = totalAverage480/simTimes;

    float averageCust30 = totalCust30/simTimes;
    float averageCust60 = totalCust60/simTimes;
    float averageCust120 = totalCust120/simTimes;
    float averageCust480 = totalCust480/simTimes;

    QString labelHolder = "";

    labelHolder.setNum(averageCust30);
    servedCust30->setText(labelHolder);

    labelHolder.setNum(averageCust60);
    servedCust60->setText(labelHolder);

    labelHolder.setNum(averageCust120);
    servedCust120->setText(labelHolder);

    labelHolder.setNum(averageCust480);
    servedCust480->setText(labelHolder);

    labelHolder.setNum(average30);
    averageWait30->setText(labelHolder);

    labelHolder.setNum(average60);
    averageWait60->setText(labelHolder);

    labelHolder.setNum(average120);
    averageWait120->setText(labelHolder);

    labelHolder.setNum(average480);
    averageWait480->setText(labelHolder);

    labelHolder.setNum(longest30);
    longestWait30->setText(labelHolder);

    labelHolder.setNum(longest60);
    longestWait60->setText(labelHolder);

    labelHolder.setNum(longest120);
    longestWait120->setText(labelHolder);

    labelHolder.setNum(longest480);
    longestWait480->setText(labelHolder);
}
