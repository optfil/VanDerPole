#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QTextEdit>
#include <QTimer>

#include <QVector>

#include "dynsystem.h"

class Form : public QWidget
{
    Q_OBJECT

    QLabel *labelR, *labelL, *labelC, *labelM, *labelG0, *labelG2, *labelU0, *labelI0, *labelDt;
    QDoubleSpinBox *doubleSpinBoxR, *doubleSpinBoxL, *doubleSpinBoxC, *doubleSpinBoxM, *doubleSpinBoxG0, *doubleSpinBoxG2, *doubleSpinBoxU0, *doubleSpinBoxI0, *doubleSpinBoxDt;
    QPushButton *pushButtonStart, *pushButtonStop;
    QTextEdit *textEditLog;

    QTimer *timer;

    DynSystem *sys;
    double dt;

    QVector<double> tt, uu, ii;

private slots:
    void start_calculation();
    void stop_calculation();
    void make_step();

public:
    Form(QWidget *parent = nullptr);
    ~Form();
};
#endif // FORM_H
