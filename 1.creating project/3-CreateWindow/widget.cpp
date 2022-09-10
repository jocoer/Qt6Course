#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Hello Qt");
    //setWindowOpacity(0.8);
    setFixedSize(300, 500);
    setStyleSheet("background: red");
    setWindowIcon(QIcon(":images/icon-123.png"));
}

Widget::~Widget()
{
}

