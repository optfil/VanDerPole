#ifndef FORM_H
#define FORM_H

#include <memory>

#include <QWidget>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QTextEdit>
#include <QTimer>

#include <qwt_plot.h>

#include "system.h"

class Form : public QWidget
{
    Q_OBJECT

public:
    Form(QWidget *parent = nullptr);
    ~Form();

public slots:
    void startCalculation();
    void stopCalculation();
    void makeStep();

private:
    std::unique_ptr<System> sys_;
    QVector<double> tt_, uu_, ii_;

    QLabel *labelL,
           *labelR,
           *labelC,
           *labelM,
           *labelS0,
           *labelS2,
           *labelU0,
           *labelI0;
    QDoubleSpinBox *doubleSpinBoxL,
                   *doubleSpinBoxR,
                   *doubleSpinBoxC,
                   *doubleSpinBoxM,
                   *doubleSpinBoxS0,
                   *doubleSpinBoxS2,
                   *doubleSpinBoxU0,
                   *doubleSpinBoxI0;
    QPushButton *pushButtonStart,
                *pushButtonStop;
    QTextEdit *textEditLog;

    QwtPlot *plotTime;

    QTimer *timer;
};
#endif // FORM_H
