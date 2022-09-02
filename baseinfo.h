#ifndef BASEINFO_H
#define BASEINFO_H

#include<QLabel>
#include<QLineEdit>
#include<QComboBox>
#include<qtextedit.h>
#include<qgridlayout.h>
#include<qpushbutton.h>
class Baseinfo:public QWidget
{
    Q_OBJECT
public:
    explicit Baseinfo(QWidget* parent = nullptr);
private:
    QLabel* user_name_label;
    QLineEdit* user_name_line_edit;
    QLabel* name_label;
    QLineEdit* name_line_edit;
    QLabel* sex_label;
    QComboBox* sex_combo_box;
    QLabel* department_label;
    QTextEdit* department_text_edit;
    QLabel* age_label;
    QLineEdit* age_line_edit;
    QLabel* other_label;
    QGridLayout* left_layout;

    //右侧
    QLabel* head_label;
    QLabel* head_icon_label;
    QPushButton* update_head_btn;
    QHBoxLayout* top_right_layout;
    QLabel* inoduction_label;
    QTextEdit* inoduction_text_edit;
    QVBoxLayout* right_layout;
};
#endif // !BASEINFO_H
