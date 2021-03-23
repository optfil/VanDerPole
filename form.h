#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QTextEdit>

class Form : public QWidget
{
    Q_OBJECT

    QLabel *labelR, *labelL, *labelC, *labelM, *labelG0, *labelG2, *labelU0, *labelI0;
    QDoubleSpinBox *doubleSpinBoxR, *doubleSpinBoxL, *doubleSpinBoxC, *doubleSpinBoxM, *doubleSpinBoxG0, *doubleSpinBoxG2, *doubleSpinBoxU0, *doubleSpinBoxI0;
    QPushButton *pushButtonStart, *pushButtonStop;
    QTextEdit *textEditLog;

private slots:
    void start_calculation();

public:
    Form(QWidget *parent = nullptr);
    ~Form();
};
#endif // FORM_H
