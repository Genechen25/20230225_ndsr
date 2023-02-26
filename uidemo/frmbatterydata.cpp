#include "frmbatterydata.h"
#include "ui_frmbatterydata.h"
#include "quiwidget.h"
#include "framelesshelper.h"
#include "appinit.h"

frmbatterydata::frmbatterydata(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmbatterydata)
{
    ui->setupUi(this);
    this->initForm();
    QUIHelper::setFormInCenter(this);
}

frmbatterydata::~frmbatterydata()
{
    delete ui;
}

void frmbatterydata::initForm()
{

//    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);

    //无边框可拉伸类
    frameless = new FramelessHelper(this);
    //激活当前窗体
    frameless->activateOn(this);
    //设置窗体可移动
    frameless->setWidgetMovable(true);
//    //设置窗体可缩放
   frameless->setWidgetResizable(false);






}
