#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect( ui->pushButton,SIGNAL(clicked()),
this, SLOT(button()));

   /*
    mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/sqlite3/mydb.db");
    if (!mydb.open())
        ui->label_4->setText("fail to open database");
    else
        ui->label_4->setText("connected to database");*/
}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug()<<"closing the connection";
    mydb.close();

}
void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit_username->setText("");
    ui->lineEdit_password->setText("");
}


void MainWindow::button ()
{
    QString name[]={"jastika","safari","purnima"};
    QString pass[]={"jas","saf","pur"};

    QString Username,Password;
    Username=ui->lineEdit_username->text();
    Password=ui->lineEdit_password->text();

    bool found=false;
    for (int i=0;name->length();i++){
        if(Username==name[i]&& Password==pass[i]){
            this->hide();
            dashboard dash;
            dash.setModal(true);
            dash.exec();
            found=true;
            break;
        }
        else if(!found){
            QMessageBox::information(this,"Error Box", "invalid username and password");
        }
    }
  /*  QString Username,Password;
    Username=ui->lineEdit_username->text();
    Password=ui->lineEdit_password->text();
    if(!mydb.isOpen()){
        qDebug()<<"failed to open databse";
        return;
    }
    QSqlQuery qry;
    if(qry.exec("SELECT *from Login where username='"+Username +"'and password='"+Password+"'" ))
    {
        int count=0;
        while(qry.next()){
            count++;
        }
        if (count==1){
            ui->label->setText("login successfully");
            this->hide();
            dashboard dash;
            dash.setModal(true);
            dash.exec();
        }
        if (count>1)
            ui->label->setText("username and password is Dublicate");
        if (count<1)
            ui->label->setText("username and password is not correct");
    }*/
}




