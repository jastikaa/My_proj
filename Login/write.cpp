#include "write.h"
#include "ui_write.h"
#include<QMessageBox>
write::write(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::write)
{
    ui->setupUi(this);
}

write::~write()
{
    delete ui;
}

void write::on_pushButton_clicked()
{
    QMessageBox:: question(this,tr("The title"), tr("Are you sure you want to post"));
}

