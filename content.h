#ifndef CONTENT_H
#define CONTENT_H

#include<QtWidgets/QDialog>
#include"baseinfo.h"
#include"contact.h"
#include"detail.h"
#include<QStackedWidget>

class Content : public QFrame
{
    Q_OBJECT

public:
    Content(QWidget *parent = nullptr);
    ~Content();
public:
    QStackedWidget* stack;
    QPushButton* amend_btn;
    QPushButton* close_btn;
    Baseinfo* base_info;
    Contact* contact;
    Detail* detail;
};

#endif // !CONTENT_H
