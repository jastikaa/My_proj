/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_2;
    QPushButton *pushButton_9;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(579, 350);
        label_4 = new QLabel(dashboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(420, 30, 141, 141));
        label = new QLabel(dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 141, 141));
        label_2 = new QLabel(dashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 30, 141, 141));
        label_3 = new QLabel(dashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 200, 141, 141));
        label_5 = new QLabel(dashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(420, 200, 141, 141));
        label_6 = new QLabel(dashboard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 200, 141, 141));
        label_7 = new QLabel(dashboard);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 0, 221, 31));
        label_7->setStyleSheet(QString::fromUtf8("border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255));"));
        pushButton_3 = new QPushButton(dashboard);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 150, 101, 24));
        pushButton_4 = new QPushButton(dashboard);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 150, 101, 24));
        pushButton_5 = new QPushButton(dashboard);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(420, 150, 101, 24));
        pushButton_6 = new QPushButton(dashboard);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(110, 320, 111, 24));
        pushButton_7 = new QPushButton(dashboard);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(260, 320, 111, 24));
        pushButton_8 = new QPushButton(dashboard);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(420, 320, 111, 24));
        widget = new QWidget(dashboard);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 80, 79, 88));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Button_2 = new QPushButton(widget);
        Button_2->setObjectName("Button_2");

        verticalLayout->addWidget(Button_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout_2->addWidget(pushButton_9);


        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("dashboard", "Lets Explore Some Poems", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dashboard", "View", nullptr));
        pushButton_4->setText(QCoreApplication::translate("dashboard", "View", nullptr));
        pushButton_5->setText(QCoreApplication::translate("dashboard", "View", nullptr));
        pushButton_6->setText(QCoreApplication::translate("dashboard", "View", nullptr));
        pushButton_7->setText(QCoreApplication::translate("dashboard", "View", nullptr));
        pushButton_8->setText(QCoreApplication::translate("dashboard", "View", nullptr));
        pushButton->setText(QCoreApplication::translate("dashboard", "Home", nullptr));
        Button_2->setText(QCoreApplication::translate("dashboard", "Write Poem", nullptr));
        pushButton_9->setText(QCoreApplication::translate("dashboard", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
