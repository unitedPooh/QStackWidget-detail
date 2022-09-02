#include "content.h"
#include <QApplication>

#include<QSplitter>
#include<QListWidget>
#include<QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("AR PL KaitiM GB",12);
    a.setFont(font);
    QSplitter * splitter_main = new QSplitter(Qt::Horizontal,0);
    splitter_main->setOpaqueResize(true);
    QListWidget * list = new QListWidget(splitter_main);
    list->addItem("基本信息");
    list->addItem("联系方式");
    list->addItem("详细资料");
    Content *content = new Content(splitter_main);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),content->stack, SLOT(setCurrentIndex(int)));
    splitter_main->show();
    return a.exec();
}
