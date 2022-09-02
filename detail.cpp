#include "detail.h"

Detail::Detail(QWidget * parent): QWidget(parent)
{
   national_label = new QLabel("国家/地址：");
   national_comboBox = new QComboBox;
   national_comboBox->addItem("中国");
   national_comboBox->addItem("美国");
   national_comboBox->addItem("日本");
   province_label = new QLabel("省份");
   province_comboBox = new QComboBox;
   province_comboBox->addItem("北京市");
   city_label = new QLabel("城市");
   city_lineEdit = new QLineEdit;
   introduct_label = new QLabel("个人说明：");
   introduct_textEdit = new QTextEdit;
   main_layout = new QGridLayout(this);
   main_layout->addWidget(national_label,0,0);
   main_layout->addWidget(national_comboBox,0,1);
   main_layout->addWidget(province_label,1,0);
   main_layout->addWidget(province_comboBox,1,1);
   main_layout->addWidget(city_label,2,0);
   main_layout->addWidget(city_lineEdit,2,1);
   main_layout->addWidget(introduct_label,3,0);
   main_layout->addWidget(introduct_textEdit,3,1);
}
