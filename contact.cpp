#include "contact.h"
Contact::Contact(QWidget* parent) :QWidget(parent) {
    email_label = new QLabel(tr("email:"));
    email_line_edit = new QLineEdit;
    addr_label = new QLabel(tr("address:"));
    addr_line_edit = new QLineEdit;
    code_label = new QLabel(tr("code:"));
    code_line_edit = new QLineEdit;
    movi_tel_label = new QLabel(tr("phone number:"));
    movi_tel_line_edit = new QLineEdit;
    movi_tel_check_book = new QCheckBox(tr("recive message"));
    protel_label = new QLabel(tr("work number"));
    protel_line_edit = new QLineEdit;
    main_layout = new QGridLayout(this);
    main_layout->setSpacing(10);
    main_layout->addWidget(email_label);
    main_layout->addWidget(email_line_edit);
    main_layout->addWidget(addr_label);
    main_layout->addWidget(addr_line_edit);
    main_layout->addWidget(code_label);
    main_layout->addWidget(code_line_edit);
    main_layout->addWidget(movi_tel_label);
    main_layout->addWidget(movi_tel_line_edit);
    main_layout->addWidget(movi_tel_check_book);
    main_layout->addWidget(protel_label);
    main_layout->addWidget(protel_line_edit);
    main_layout->setSizeConstraint(QLayout::SetFixedSize);
}
