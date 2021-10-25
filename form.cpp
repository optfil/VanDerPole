#include "form.h"
#include <QLayout>

Form::Form(QWidget *parent)
    : QWidget(parent)
{
    labelL = new QLabel("L");
    labelR = new QLabel("R");
    labelC = new QLabel("C");
    labelM = new QLabel("M");
    labelS0 = new QLabel("S0");
    labelS2 = new QLabel("S2");
    labelU0 = new QLabel("U0");
    labelI0 = new QLabel("I0");
    doubleSpinBoxL = new QDoubleSpinBox;
    doubleSpinBoxR = new QDoubleSpinBox;
    doubleSpinBoxC = new QDoubleSpinBox;
    doubleSpinBoxM = new QDoubleSpinBox;
    doubleSpinBoxS0 = new QDoubleSpinBox;
    doubleSpinBoxS2 = new QDoubleSpinBox;
    doubleSpinBoxU0 = new QDoubleSpinBox;
    doubleSpinBoxI0 = new QDoubleSpinBox;
    pushButtonStart = new QPushButton("Start");
    pushButtonStop = new QPushButton("Stop");
    textEditLog = new QTextEdit;

    doubleSpinBoxL->setValue(1.0);
    doubleSpinBoxC->setValue(1.0);
    doubleSpinBoxU0->setValue(1.0);
    doubleSpinBoxM->setMinimum(-99.99);
    textEditLog->setReadOnly(true);

    QGridLayout *layoutParameters = new QGridLayout;
    layoutParameters->addWidget(labelL, 0, 0);
    layoutParameters->addWidget(labelR, 1, 0);
    layoutParameters->addWidget(labelC, 2, 0);
    layoutParameters->addWidget(labelU0, 3, 0);
    layoutParameters->addWidget(doubleSpinBoxL, 0, 1);
    layoutParameters->addWidget(doubleSpinBoxR, 1, 1);
    layoutParameters->addWidget(doubleSpinBoxC, 2, 1);
    layoutParameters->addWidget(doubleSpinBoxU0, 3, 1);
    layoutParameters->addWidget(labelM, 0, 2);
    layoutParameters->addWidget(labelS0, 1, 2);
    layoutParameters->addWidget(labelS2, 2, 2);
    layoutParameters->addWidget(labelI0, 3, 2);
    layoutParameters->addWidget(doubleSpinBoxM, 0, 3);
    layoutParameters->addWidget(doubleSpinBoxS0, 1, 3);
    layoutParameters->addWidget(doubleSpinBoxS2, 2, 3);
    layoutParameters->addWidget(doubleSpinBoxI0, 3, 3);

    QHBoxLayout *layoutButtons = new QHBoxLayout;
    layoutButtons->addWidget(pushButtonStart);
    layoutButtons->addWidget(pushButtonStop);

    QVBoxLayout *layoutMain = new QVBoxLayout;
    layoutMain->addLayout(layoutParameters);
    layoutMain->addLayout(layoutButtons);
    layoutMain->addWidget(textEditLog);

    this->setLayout(layoutMain);
}

Form::~Form()
{
}

