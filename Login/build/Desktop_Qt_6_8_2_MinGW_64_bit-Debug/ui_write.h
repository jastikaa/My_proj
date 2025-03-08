/********************************************************************************
** Form generated from reading UI file 'write.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITE_H
#define UI_WRITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_write
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *write)
    {
        if (write->objectName().isEmpty())
            write->setObjectName("write");
        write->resize(400, 300);
        pushButton = new QPushButton(write);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 270, 331, 24));
        pushButton->setStyleSheet(QString::fromUtf8("text color: red;\n"
""));
        lineEdit = new QLineEdit(write);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 50, 331, 161));
        label = new QLabel(write);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 210, 331, 16));
        radioButton = new QRadioButton(write);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(30, 230, 89, 20));
        radioButton_2 = new QRadioButton(write);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(130, 230, 89, 20));
        radioButton_3 = new QRadioButton(write);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(240, 230, 89, 20));
        radioButton_4 = new QRadioButton(write);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(30, 250, 89, 20));
        radioButton_5 = new QRadioButton(write);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(130, 250, 89, 20));
        radioButton_6 = new QRadioButton(write);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(240, 250, 89, 20));
        label_2 = new QLabel(write);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 20, 49, 16));
        lineEdit_2 = new QLineEdit(write);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 20, 261, 22));

        retranslateUi(write);

        QMetaObject::connectSlotsByName(write);
    } // setupUi

    void retranslateUi(QDialog *write)
    {
        write->setWindowTitle(QCoreApplication::translate("write", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("write", "Post", nullptr));
        label->setText(QCoreApplication::translate("write", "Choose categories", nullptr));
        radioButton->setText(QCoreApplication::translate("write", "Friendship", nullptr));
        radioButton_2->setText(QCoreApplication::translate("write", "Family", nullptr));
        radioButton_3->setText(QCoreApplication::translate("write", "love", nullptr));
        radioButton_4->setText(QCoreApplication::translate("write", "Nature", nullptr));
        radioButton_5->setText(QCoreApplication::translate("write", "Inspirational", nullptr));
        radioButton_6->setText(QCoreApplication::translate("write", "life", nullptr));
        label_2->setText(QCoreApplication::translate("write", "Title :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class write: public Ui_write {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITE_H
