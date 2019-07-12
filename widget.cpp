#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int n){
    money += n;
    ui->lcdNumber->display(QString::number(money));
    ui->pbCoffe->setEnabled(false);
    QMessageBox msg;
    msg.information(nullptr, "title", "text");
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);

}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
   changeMoney(100);
}

void Widget::on_pb500_clicked()
{
   changeMoney(500);
}

void Widget::on_pbCoffe_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
}

void Widget::on_pbGongcha_clicked()
{
    changeMoney(-200);
}
