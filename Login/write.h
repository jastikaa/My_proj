#ifndef WRITE_H
#define WRITE_H

#include <QDialog>

namespace Ui {
class write;
}

class write : public QDialog
{
    Q_OBJECT

public:
    explicit write(QWidget *parent = nullptr);
    ~write();

private slots:
    void on_pushButton_clicked();

private:
    Ui::write *ui;
};

#endif // WRITE_H
