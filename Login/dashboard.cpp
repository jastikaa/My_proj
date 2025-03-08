#include "dashboard.h"
#include "ui_dashboard.h"
#include<QPixmap>

dashboard::dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);

    QPixmap pix1("C:/Users/Hp/Documents/Login/img1.jpg");
    ui->label->setPixmap(pix1);
    ui->label->setScaledContents(true);

    QPixmap pix2("C:/Users/Hp/Documents/Login/img2.jpg");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);

    QPixmap pix3("C:/Users/Hp/Documents/Login/img3.jpg");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);

    QPixmap pix4("C:/Users/Hp/Documents/Login/img4.jpg");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);

    QPixmap pix5("C:/Users/Hp/Documents/Login/img5.jpg");
    ui->label_5->setPixmap(pix5);
    ui->label_5->setScaledContents(true);

    QPixmap pix6("C:/Users/Hp/Documents/Login/img6.jpg");
    ui->label_6->setPixmap(pix6);
    ui->label_6->setScaledContents(true);



}

dashboard::~dashboard()
{
    delete ui;
}


void dashboard::on_Button_2_clicked()
{
    this->hide();
    write wr;
    wr.setModal(true);
    wr.exec();
}

