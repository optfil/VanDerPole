#include "form.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

#include "dynsystem.h"

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
    doubleSpinBoxL->setMinimum(0.01);
    doubleSpinBoxL->setValue(1.0);
    doubleSpinBoxC = new QDoubleSpinBox;
    doubleSpinBoxC->setMinimum(0.01);
    doubleSpinBoxC->setValue(1.0);
    doubleSpinBoxM = new QDoubleSpinBox;
    doubleSpinBoxM->setMinimum(-100.0);
    doubleSpinBoxG0 = new QDoubleSpinBox;
    doubleSpinBoxG0->setMinimum(-100.0);
    doubleSpinBoxG2 = new QDoubleSpinBox;
    doubleSpinBoxG2->setMinimum(-100.0);
    doubleSpinBoxU0 = new QDoubleSpinBox;
    doubleSpinBoxU0->setMinimum(-100.0);
    doubleSpinBoxU0->setValue(1.0);
    doubleSpinBoxI0 = new QDoubleSpinBox;
    doubleSpinBoxI0->setMinimum(-100.0);

    pushButtonStart = new QPushButton("Start");
    pushButtonStop = new QPushButton("Stop");

    textEditLog = new QTextEdit;
    textEditLog->setReadOnly(true);

    QGridLayout *layoutParameters = new QGridLayout;
    layoutParameters->addWidget(labelR, 0, 0);
    layoutParameters->addWidget(labelL, 1, 0);
    layoutParameters->addWidget(labelC, 2, 0);
    layoutParameters->addWidget(labelM, 3, 0);
    layoutParameters->addWidget(labelG0, 4, 0);
    layoutParameters->addWidget(labelG2, 5, 0);
    layoutParameters->addWidget(labelU0, 6, 0);
    layoutParameters->addWidget(labelI0, 7, 0);
    layoutParameters->addWidget(doubleSpinBoxR, 0, 1);
    layoutParameters->addWidget(doubleSpinBoxL, 1, 1);
    layoutParameters->addWidget(doubleSpinBoxC, 2, 1);
    layoutParameters->addWidget(doubleSpinBoxM, 3, 1);
    layoutParameters->addWidget(doubleSpinBoxG0, 4, 1);
    layoutParameters->addWidget(doubleSpinBoxG2, 5, 1);
    layoutParameters->addWidget(doubleSpinBoxU0, 6, 1);
    layoutParameters->addWidget(doubleSpinBoxI0, 7, 1);

    QHBoxLayout *layoutButtons = new QHBoxLayout;
    layoutButtons->addWidget(pushButtonStart);
    layoutButtons->addWidget(pushButtonStop);

    QVBoxLayout *layoutMain = new QVBoxLayout;
    layoutMain->addLayout(layoutParameters);
    layoutMain->addLayout(layoutButtons);
    layoutMain->addWidget(textEditLog);

    setLayout(layoutMain);

    connect(pushButtonStart, &QPushButton::clicked, this, &Form::start_calculation);
}

Form::~Form()
{
}

void Form::start_calculation()
{
    DynSystem sys{{
        {"L", doubleSpinBoxL->value()},
        {"R", doubleSpinBoxR->value()},
        {"C", doubleSpinBoxC->value()},
        {"M", doubleSpinBoxM->value()},
        {"g0", doubleSpinBoxG0->value()},
        {"g2", doubleSpinBoxG2->value()},
        {"U0", doubleSpinBoxU0->value()},
        {"I0", doubleSpinBoxI0->value()}
    }};

    textEditLog->append("U0 = " + QString::number(sys.u()));
    textEditLog->append("I0 = " + QString::number(sys.i()));
}
