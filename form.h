#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QTextEdit>

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

private:
    System *sys_;

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
};
#endif // FORM_H
