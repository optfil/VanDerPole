#include "form.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

Form::Form(QWidget *parent)
    : QWidget(parent)
{
    labelR = new QLabel("R");
    labelL = new QLabel("L");
    labelC = new QLabel("C");
    labelM = new QLabel("M");
    labelG0 = new QLabel("G0");
    labelG2 = new QLabel("G2");
    labelU0 = new QLabel("U0");
    labelI0 = new QLabel("I0");

    doubleSpinBoxR = new QDoubleSpinBox;
    doubleSpinBoxL = new QDoubleSpinBox;
    doubleSpinBoxC = new QDoubleSpinBox;
    doubleSpinBoxM = new QDoubleSpinBox;
    doubleSpinBoxG0 = new QDoubleSpinBox;
    doubleSpinBoxG2 = new QDoubleSpinBox;
    doubleSpinBoxU0 = new QDoubleSpinBox;
    doubleSpinBoxI0 = new QDoubleSpinBox;

    pushButtonStart = new QPushButton("Start");
    pushButtonStop = new QPushButton("Stop");

    textEditLog = new QTextEdit;

    QGridLayout *gridLayoutParameters = new QGridLayout;
    gridLayoutParameters->addWidget(labelR, 0, 0);
    gridLayoutParameters->addWidget(labelL, 1, 0);
    gridLayoutParameters->addWidget(labelC, 2, 0);
    gridLayoutParameters->addWidget(labelM, 3, 0);
    gridLayoutParameters->addWidget(labelG0, 4, 0);
    gridLayoutParameters->addWidget(labelG2, 5, 0);
    gridLayoutParameters->addWidget(labelU0, 6, 0);
    gridLayoutParameters->addWidget(labelI0, 7, 0);
    gridLayoutParameters->addWidget(doubleSpinBoxR, 0, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxL, 1, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxC, 2, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxM, 3, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxG0, 4, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxG2, 5, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxU0, 6, 1);
    gridLayoutParameters->addWidget(doubleSpinBoxI0, 7, 1);

    QHBoxLayout *layoutButtons = new QHBoxLayout;
    layoutButtons->addWidget(pushButtonStart);
    layoutButtons->addWidget(pushButtonStop);

    QVBoxLayout *layoutMain = new QVBoxLayout;
    layoutMain->addLayout(gridLayoutParameters);
    layoutMain->addLayout(layoutButtons);
    layoutMain->addWidget(textEditLog);

    setLayout(layoutMain);
}

Form::~Form()
{
}

