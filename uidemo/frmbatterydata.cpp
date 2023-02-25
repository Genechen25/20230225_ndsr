#include "frmbatterydata.h"
#include "ui_frmbatterydata.h"
#include "quiwidget.h"
#include "framelesshelper.h"

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

    this->setProperty("form", true);
    //this->setProperty("canMove", true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);

    //无边框可拉伸类
    frameless = new FramelessHelper(this);
    //激活当前窗体
    frameless->activateOn(this);
    //设置窗体可移动
    frameless->setWidgetMovable(true);
    //设置窗体可缩放
    frameless->setWidgetResizable(true);

    //设置底部状态栏


    //添加换肤菜单
    QStringList styleNames;
    styleNames << "银色" << "蓝色" << "浅蓝色" << "深蓝色" << "灰色" << "浅灰色" << "深灰色" << "黑色"
               << "浅黑色" << "深黑色" << "PS黑色" << "黑色扁平" << "白色扁平" << "蓝色扁平" << "紫色" << "黑蓝色" << "视频黑";
    this->setContextMenuPolicy(Qt::ActionsContextMenu);

    foreach (QString styleName, styleNames) {
        QAction *action = new QAction(styleName, this);
        connect(action, SIGNAL(triggered(bool)), this, SLOT(initStyle()));
        this->addAction(action);
    }
}
