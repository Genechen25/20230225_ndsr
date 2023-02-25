#ifndef FRMBATTERYDATA_H
#define FRMBATTERYDATA_H

#include <QWidget>
class FramelessHelper;
namespace Ui {
class frmbatterydata;
}

class frmbatterydata : public QWidget
{
    Q_OBJECT

public:
    explicit frmbatterydata(QWidget *parent = nullptr);
    ~frmbatterydata();

private:
    Ui::frmbatterydata *ui;
        FramelessHelper *frameless;
private slots:
    void initForm();
};

#endif // FRMBATTERYDATA_H
