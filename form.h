#ifndef FORM_H
#define FORM_H

#include <QWidget>

class Form : public QWidget
{
    Q_OBJECT

public:
    Form(QWidget *parent = nullptr);
    ~Form();
};
#endif // FORM_H
