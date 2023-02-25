#ifndef FRMCONFIG_H
#define FRMCONFIG_H

#include <QWidget>

class QPushButton;

namespace Ui {
class frmConfig;
}

class frmConfig : public QWidget
{
    Q_OBJECT

public:
    explicit frmConfig(QWidget *parent = 0);
    ~frmConfig();
    void Read_Data();
    void insertTableItems();
protected:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::frmConfig *ui;
    QList<QPushButton *> btns;

private slots:
    void initForm();
    void initNav();
    void initIcon();
    void buttonClicked();
    void on_pushButton_3_clicked();
};

#endif // FRMCONFIG_H
