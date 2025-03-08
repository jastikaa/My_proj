#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>

#include"write.h"
namespace Ui {
class dashboard;
}

class dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:

    void on_Button_2_clicked();

private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
