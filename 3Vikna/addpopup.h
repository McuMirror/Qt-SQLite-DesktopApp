#ifndef ADDPOPUP_H
#define ADDPOPUP_H

#include <QDialog>

namespace Ui
{
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_field1_textChanged();


private:
    Ui::Dialog *ui;
};

#endif // ADDPOPUP_H
