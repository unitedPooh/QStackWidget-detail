#include "baseinfo.h"
Baseinfo::Baseinfo(QWidget* parent) :QWidget(parent) {
    user_name_label = new QLabel(("username:"));
    user_name_line_edit = new QLineEdit;
    name_label = new QLabel(("name:"));
    name_line_edit = new QLineEdit;
    sex_label = new QLabel(("sex:"));
    sex_combo_box = new QComboBox;
    sex_combo_box->addItem(("male"));
    sex_combo_box->addItem(("remale"));
    department_label = new QLabel(("部门:"));
    department_text_edit = new QTextEdit;
    age_label = new QLabel(("age："));
    age_line_edit = new QLineEdit;
    other_label = new QLabel(("备注："));
    other_label->setFrameStyle(QFrame::StyledPanel | QFrame::Raised);//设置控件风格

    left_layout = new QGridLayout();
    left_layout->addWidget(user_name_label, 0, 0);
    left_layout->addWidget(user_name_line_edit, 0, 1);
    left_layout->addWidget(name_label, 1, 0);
    left_layout->addWidget(name_line_edit, 1, 1);
    left_layout->addWidget(sex_label, 2, 0);
    left_layout->addWidget(sex_combo_box, 2, 1);
    left_layout->addWidget(department_label, 3, 0);
    left_layout->addWidget(department_text_edit, 3, 1);
    left_layout->addWidget(age_label, 4, 0);
    left_layout->addWidget(age_line_edit, 4, 1);
    left_layout->addWidget(other_label, 5, 0, 1, 2);
    head_label = new QLabel(("头像："));
    head_icon_label = new QLabel;
    QPixmap icon("E:\\图标库\\莱莎.ico");
    head_icon_label->setPixmap(icon);
    head_icon_label->resize(icon.width(), icon.height());
    update_head_btn = new QPushButton(("更新"));

    top_right_layout = new QHBoxLayout();//水平布局
    top_right_layout->setSpacing(20);
    top_right_layout->addWidget(head_label);
    top_right_layout->addWidget(head_icon_label);
    top_right_layout->addWidget(update_head_btn);
    inoduction_label = new QLabel(("个人说明："));
    inoduction_text_edit = new QTextEdit;

    right_layout = new QVBoxLayout();//垂直布局
    right_layout->addLayout(top_right_layout);
    right_layout->addWidget(inoduction_label);
    right_layout->addWidget(inoduction_text_edit);

    QGridLayout* main_layout = new QGridLayout(this);//二维布局
    main_layout->setSpacing(10);

    //addLayout(&布局,int 起始行,int起始列,int 占用行,int 占用列,alignment);
    main_layout->addLayout(left_layout, 0, 0);
    main_layout->addLayout(right_layout, 0, 1);
    main_layout->setSizeConstraint(QLayout::SetFixedSize);

}
