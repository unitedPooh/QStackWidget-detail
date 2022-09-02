#ifndef CONTACT_H
#define CONTACT_H

#include<qwidget.h>
#include<qlabel.h>
#include<qgridlayout.h>
#include<qlineedit.h>
#include<qcheckbox.h>
class Contact: public QWidget
{
    Q_OBJECT
public:
    explicit Contact(QWidget* parent = nullptr);
private:
    QLabel* email_label;
    QLineEdit* email_line_edit;
    QLabel* addr_label;
    QLineEdit* addr_line_edit;
    QLabel* code_label;
    QLineEdit* code_line_edit;
    QLabel* movi_tel_label;
    QLineEdit* movi_tel_line_edit;
    QCheckBox* movi_tel_check_book;
    QLabel* protel_label;
    QLineEdit* protel_line_edit;
    QGridLayout* main_layout;
};

#endif // !CONTACT_H
