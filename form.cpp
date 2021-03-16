#include "form.h"

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
}

Form::~Form()
{
}

