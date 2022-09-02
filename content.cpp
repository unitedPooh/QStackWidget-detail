#include "content.h"

Content::Content(QWidget *parent): QFrame(parent){
    stack = new QStackedWidget(this);
    stack->setFrameStyle(QFrame::Panel | QFrame::Raised);
    base_info = new Baseinfo();
    contact = new Contact();
    detail = new Detail();

    stack->addWidget(base_info);
    stack->addWidget(contact);
    stack->addWidget(detail);

    amend_btn = new QPushButton(QString::fromLocal8Bit("change"));
    close_btn = new QPushButton(QString::fromLocal8Bit("close"));
    QHBoxLayout* btn_layout = new QHBoxLayout;
    btn_layout->addStretch(3);
    btn_layout->addWidget(amend_btn);
    btn_layout->addWidget(close_btn);

    QVBoxLayout* right_layout = new QVBoxLayout(this);
    right_layout->setSpacing(6);
    right_layout->addWidget(stack);
    right_layout->addLayout(btn_layout);
}

Content::~Content(){}
