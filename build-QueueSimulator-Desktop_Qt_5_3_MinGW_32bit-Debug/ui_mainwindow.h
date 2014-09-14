/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *simulateButton;
    QComboBox *simModeBox;
    QCheckBox *randTimeBox;
    QCheckBox *cartTimeBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *servedCust30;
    QSpacerItem *horizontalSpacer_4;
    QLabel *servedCust60;
    QSpacerItem *horizontalSpacer_5;
    QLabel *servedCust120;
    QSpacerItem *horizontalSpacer_6;
    QLabel *servedCust480;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *averageWait30;
    QSpacerItem *horizontalSpacer_7;
    QLabel *averageWait60;
    QSpacerItem *horizontalSpacer_8;
    QLabel *averageWait120;
    QSpacerItem *horizontalSpacer_9;
    QLabel *averageWait480;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *longestWait30;
    QSpacerItem *horizontalSpacer_10;
    QLabel *longestWait60;
    QSpacerItem *horizontalSpacer_11;
    QLabel *longestWait120;
    QSpacerItem *horizontalSpacer_12;
    QLabel *longestWait480;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *simNumberBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *cashierNumBox;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *minServiceBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *maxServiceBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpinBox *minItemsBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QSpinBox *maxItemsBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(502, 362);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 220, 51, 41));
        label_17->setTextFormat(Qt::AutoText);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_17->setWordWrap(true);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 280, 66, 13));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 330, 63, 13));
        simulateButton = new QPushButton(centralWidget);
        simulateButton->setObjectName(QStringLiteral("simulateButton"));
        simulateButton->setEnabled(true);
        simulateButton->setGeometry(QRect(30, 100, 75, 23));
        simulateButton->setDefault(false);
        simulateButton->setFlat(false);
        simModeBox = new QComboBox(centralWidget);
        simModeBox->setObjectName(QStringLiteral("simModeBox"));
        simModeBox->setGeometry(QRect(30, 40, 69, 22));
        randTimeBox = new QCheckBox(centralWidget);
        randTimeBox->setObjectName(QStringLiteral("randTimeBox"));
        randTimeBox->setGeometry(QRect(350, 10, 100, 17));
        cartTimeBox = new QCheckBox(centralWidget);
        cartTimeBox->setObjectName(QStringLiteral("cartTimeBox"));
        cartTimeBox->setGeometry(QRect(350, 40, 82, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 180, 380, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        servedCust30 = new QLabel(widget);
        servedCust30->setObjectName(QStringLiteral("servedCust30"));

        horizontalLayout_2->addWidget(servedCust30);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        servedCust60 = new QLabel(widget);
        servedCust60->setObjectName(QStringLiteral("servedCust60"));

        horizontalLayout_2->addWidget(servedCust60);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        servedCust120 = new QLabel(widget);
        servedCust120->setObjectName(QStringLiteral("servedCust120"));

        horizontalLayout_2->addWidget(servedCust120);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        servedCust480 = new QLabel(widget);
        servedCust480->setObjectName(QStringLiteral("servedCust480"));

        horizontalLayout_2->addWidget(servedCust480);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        averageWait30 = new QLabel(widget);
        averageWait30->setObjectName(QStringLiteral("averageWait30"));

        horizontalLayout_3->addWidget(averageWait30);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        averageWait60 = new QLabel(widget);
        averageWait60->setObjectName(QStringLiteral("averageWait60"));

        horizontalLayout_3->addWidget(averageWait60);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        averageWait120 = new QLabel(widget);
        averageWait120->setObjectName(QStringLiteral("averageWait120"));

        horizontalLayout_3->addWidget(averageWait120);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        averageWait480 = new QLabel(widget);
        averageWait480->setObjectName(QStringLiteral("averageWait480"));

        horizontalLayout_3->addWidget(averageWait480);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        longestWait30 = new QLabel(widget);
        longestWait30->setObjectName(QStringLiteral("longestWait30"));

        horizontalLayout_4->addWidget(longestWait30);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        longestWait60 = new QLabel(widget);
        longestWait60->setObjectName(QStringLiteral("longestWait60"));

        horizontalLayout_4->addWidget(longestWait60);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        longestWait120 = new QLabel(widget);
        longestWait120->setObjectName(QStringLiteral("longestWait120"));

        horizontalLayout_4->addWidget(longestWait120);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        longestWait480 = new QLabel(widget);
        longestWait480->setObjectName(QStringLiteral("longestWait480"));

        horizontalLayout_4->addWidget(longestWait480);


        verticalLayout->addLayout(horizontalLayout_4);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 10, 137, 22));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        simNumberBox = new QSpinBox(widget1);
        simNumberBox->setObjectName(QStringLiteral("simNumberBox"));
        simNumberBox->setMinimum(100);
        simNumberBox->setMaximum(1000);
        simNumberBox->setSingleStep(10);

        horizontalLayout_5->addWidget(simNumberBox);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(30, 70, 137, 22));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cashierNumBox = new QSpinBox(widget2);
        cashierNumBox->setObjectName(QStringLiteral("cashierNumBox"));
        cashierNumBox->setMinimum(2);

        horizontalLayout_6->addWidget(cashierNumBox);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(340, 60, 131, 108));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(widget3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        minServiceBox = new QSpinBox(widget3);
        minServiceBox->setObjectName(QStringLiteral("minServiceBox"));
        minServiceBox->setMinimum(1);

        horizontalLayout_7->addWidget(minServiceBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(widget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        maxServiceBox = new QSpinBox(widget3);
        maxServiceBox->setObjectName(QStringLiteral("maxServiceBox"));
        maxServiceBox->setMinimum(2);

        horizontalLayout_8->addWidget(maxServiceBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(widget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);

        minItemsBox = new QSpinBox(widget3);
        minItemsBox->setObjectName(QStringLiteral("minItemsBox"));
        minItemsBox->setMinimum(1);

        horizontalLayout_10->addWidget(minItemsBox);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(widget3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        maxItemsBox = new QSpinBox(widget3);
        maxItemsBox->setObjectName(QStringLiteral("maxItemsBox"));
        maxItemsBox->setMinimum(2);

        horizontalLayout_9->addWidget(maxItemsBox);


        verticalLayout_2->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Queue Simulator", 0));
        label_17->setText(QApplication::translate("MainWindow", "Average Customers Served", 0));
        label_18->setText(QApplication::translate("MainWindow", "Average Wait", 0));
        label_19->setText(QApplication::translate("MainWindow", "Longest Wait", 0));
        simulateButton->setText(QApplication::translate("MainWindow", "Simulate", 0));
        randTimeBox->setText(QApplication::translate("MainWindow", "Random time on", 0));
        cartTimeBox->setText(QApplication::translate("MainWindow", "Cart time on", 0));
        label->setText(QApplication::translate("MainWindow", "30 minutes", 0));
        label_2->setText(QApplication::translate("MainWindow", "60 minutes", 0));
        label_3->setText(QApplication::translate("MainWindow", "120 minutes", 0));
        label_4->setText(QApplication::translate("MainWindow", "480 minutes", 0));
        servedCust30->setText(QApplication::translate("MainWindow", "30 minutes", 0));
        servedCust60->setText(QApplication::translate("MainWindow", "60 minutes", 0));
        servedCust120->setText(QApplication::translate("MainWindow", "120 minutes", 0));
        servedCust480->setText(QApplication::translate("MainWindow", "480 minutes", 0));
        averageWait30->setText(QApplication::translate("MainWindow", "30 minutes", 0));
        averageWait60->setText(QApplication::translate("MainWindow", "60 minutes", 0));
        averageWait120->setText(QApplication::translate("MainWindow", "120 minutes", 0));
        averageWait480->setText(QApplication::translate("MainWindow", "480 minutes", 0));
        longestWait30->setText(QApplication::translate("MainWindow", "30 minutes", 0));
        longestWait60->setText(QApplication::translate("MainWindow", "60 minutes", 0));
        longestWait120->setText(QApplication::translate("MainWindow", "120 minutes", 0));
        longestWait480->setText(QApplication::translate("MainWindow", "480 minutes", 0));
        label_5->setText(QApplication::translate("MainWindow", "# of simulations:", 0));
        label_6->setText(QApplication::translate("MainWindow", "# of lines/cashiers:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Min service time:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Max service time:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Min # of items:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Max # of items:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
