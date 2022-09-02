#ifndef DETAIL_H
#define DETAIL_H
#include<QLabel>
#include<QComboBox>
#include<QLineEdit>
#include<QTextEdit>
#include<QGridLayout>

class Detail:public QWidget
{
public:
    explicit Detail(QWidget* parent = nullptr);
private:
    QLabel * national_label;
    QComboBox *national_comboBox;
    QLabel *province_label;
    QComboBox * province_comboBox;
    QLabel * city_label;
    QLineEdit * city_lineEdit;
    QLabel * introduct_label;
    QTextEdit * introduct_textEdit;
    QGridLayout * main_layout;

};

#endif // DETAIL_H
