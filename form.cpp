#include "form.h"

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
}

Form::~Form()
{
}

