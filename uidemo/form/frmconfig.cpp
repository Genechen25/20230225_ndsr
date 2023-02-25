#include "frmconfig.h"
#include "ui_frmconfig.h"
#include "quiwidget.h"
#include "iconfont.h"
#include <QStringList>
#include "flatui.h"
#include "frmbatterydata.h"
frmConfig::frmConfig(QWidget *parent) : QWidget(parent), ui(new Ui::frmConfig)
{
    ui->setupUi(this);
    this->initForm();
    this->initNav();
    this->initIcon();
    Read_Data();
    FlatUI::Instance()->setSliderQss(ui->horizontalSlider, "#505050", "#1ABC9C", "#1ABC9C");
    ui->horizontalSlider->setValue(100);
    FlatUI::Instance()->setSliderQss(ui->horizontalSlider_2, "#505050", "#1ABC9C", "#1ABC9C");
    ui->horizontalSlider_2->setValue(29);
    FlatUI::Instance()->setSliderQss(ui->horizontalSlider_3, "#505050", "#1ABC9C", "#1ABC9C");
    ui->horizontalSlider_3->setValue(0);

}

frmConfig::~frmConfig()
{
    delete ui;
}

bool frmConfig::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        //双击查看电池详细信息
        if (watched == ui->widget_battery_1) {
            on_pushButton_3_clicked();
        }
    }

    return QWidget::eventFilter(watched, event);
}
void frmConfig::initForm()
{
    ui->widgetLeft->setProperty("flag", "btn");
    ui->widgetLeft->setFixedWidth(150);
    ui->widget_batteryicon->setProperty("flag", "batteryrealtime");
    ui->widget_batteryicon->setFixedHeight(200);
}



void frmConfig::initNav()
{
    QList<QString> texts;
    btns << ui->btnConfigSystem << ui->btnConfigPort << ui->btnConfigDevice << ui->btnConfigNode << ui->btnConfigMap << ui->btnConfigPosition << ui->btnConfigUser << ui->btnConfigDebug;
    texts << "实 时 监 控" << "水 冷 系 统" << "故 障 告 警" << "I O  控    制" << "参 数 修 改" << "程 序 升 级" << "用 户 管 理" << "界 面 设 置";


    //这里临时用qlabel加粗显示,可以改成自己的widget窗体
    QString qss = "font:80pt;";
    for (int i = 0; i < btns.count(); i++) {
        QLabel *lab = new QLabel;
        lab->setAlignment(Qt::AlignCenter);
        lab->setText(texts.at(i));
        lab->setStyleSheet(qss);
        lab->setAutoFillBackground(true);
        ui->stackedWidget->addWidget(lab);
    }

    for (int i = 0; i < btns.count(); i++) {
        QPushButton *btn = (QPushButton *)btns.at(i);
        btn->setIconSize(QSize(30, 20));
        btn->setCheckable(true);
        btn->setText(texts.at(i) + "  ");
        connect(btn, SIGNAL(clicked(bool)), this, SLOT(buttonClicked()));
    }


    ui->btnConfigSystem->click();
    ui->widget_battery_1->installEventFilter(this);
}


void frmConfig::initIcon()
{
    //从图形字体库中设置图标
    ui->btnConfigSystem->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe60d, 20, 30, 20));
    ui->btnConfigPort->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe9c1, 20, 30, 20));
    ui->btnConfigDevice->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea00, 20, 30, 20));
    ui->btnConfigNode->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe603, 20, 30, 20));
    ui->btnConfigMap->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe6a3, 20, 30, 20));
    ui->btnConfigPosition->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xe702, 20, 30, 20));
    ui->btnConfigUser->setIcon(IconFont::Instance()->getPixmap(QUIConfig::TextColor, 0xea59, 20, 30, 20));
    ui->btnConfigDebug->setIcon(IconHelper::Instance()->getPixmap(QUIConfig::TextColor, 0xf188, 20, 30, 20));
}

void frmConfig::buttonClicked()
{
    QPushButton *btn = (QPushButton *)sender();
    int index = btns.indexOf(btn);
    ui->stackedWidget->setCurrentIndex(index);

    //取消其他按钮选中
    foreach (QPushButton *b, btns) {
        b->setChecked(b == btn);
    }
}

void frmConfig::Read_Data()
{
    ui->battery_realdata_table->setColumnCount(12);
    QStringList m_header;
    m_header<<"Items"<<"BBMS"<<"RBMS01"<<"RBMS02"<<"RBMS03"<<"RBMS04"<<"RBMS05"<<"RBMS06"<<"RBMS07"<<"RBMS08"<<"RBMS09"<<"RBMS10";
    ui->battery_realdata_table->setHorizontalHeaderLabels(m_header);
    ui->battery_realdata_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->battery_realdata_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->battery_realdata_table->setColumnWidth(0,120);
    for(int i = 1; i< 12;i++)
    {
        ui->battery_realdata_table->setColumnWidth(i,112);
    }

    ui->battery_realdata_table->verticalHeader()->setVisible(false);
    ui->battery_realdata_table->horizontalHeader()->setFont(QFont("黑体",12));
    ui->battery_realdata_table->setAlternatingRowColors(true);
//    ui->battery_realdata_table->setTextAlignment();

    ui->tableWidget_watercoolcontrl->setColumnCount(12);
    m_header<<"Items"<<"BBMS"<<"RBMS01"<<"RBMS02"<<"RBMS03"<<"RBMS04"<<"RBMS05"<<"RBMS06"<<"RBMS07"<<"RBMS08"<<"RBMS09"<<"RBMS10";
    ui->tableWidget_watercoolcontrl->setHorizontalHeaderLabels(m_header);
    ui->tableWidget_watercoolcontrl->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_watercoolcontrl->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget_watercoolcontrl->setColumnWidth(0,180);
    for(int i = 1; i< 12;i++)
    {

        ui->tableWidget_watercoolcontrl->setColumnWidth(i,105);
    }
    ui->tableWidget_watercoolcontrl->verticalHeader()->setVisible(false);
    ui->tableWidget_watercoolcontrl->horizontalHeader()->setFont(QFont("黑体",12));
    ui->tableWidget_watercoolcontrl->setAlternatingRowColors(true);
    insertTableItems();

}


void frmConfig::insertTableItems()
{
    QTableWidgetItem *item[12];
    int i, nCount;
    QStringList m_Items;
    m_Items<<"电池电压 (V)"<<"母线电压 (V)"<<"支路电流 (A)"<<"SOC (%)"<<"SOH (%)"<<"允许Icmax（A）"<<"允许Idmax (A)"<<"电芯Vmax (V)"<<"电芯Vmin (V)"
           <<" 电芯Vavg (V)"<<"电芯压差Vmax (V)"<<"电池Tmax (℃)"<<"电池Tmin (℃)"<<"电池Tavg (℃)"<<"电池温差Tmax (℃)"<<"累计充电容量 (Ah)"<<"累计放电容量 (Ah)"<<"充电剩余容量 (Ah)"
            <<"放电剩余容量 (Ah)"<<"主正继电器"<<"主负继电器"<<"预充继电器";
    for(i=0;i<22;i++)
    {
        nCount = ui->battery_realdata_table->rowCount();
        ui->battery_realdata_table->insertRow(nCount);
        item[0]=new QTableWidgetItem(m_Items[i]);
        ui->battery_realdata_table->setItem(i,0,item[0]);
    }
    QTableWidgetItem *w_item[12];
    int j, wCount;
    QStringList w_Items;
    w_Items<<"BMS请求模式设定模式"<<"TMS运行状态"<<"TMS通讯丢失"<<"运行模式与BMS控制指令冲突"<<"TMS致电柜停机故障"<<"TMS高压继电器状态"<<"TMS故障码"<<
    "TMS故障码等级"<<"BMS请求设定温度"<<"TMS出水温度"<<"TMS回水温度"<<"TMS环境温度"<<"TMS 需求公里"<<"一级消防故障"<<"二级消防故障"<<"温感状态"<<"烟感状态"
    <<"气溶胶状态"<<"气溶胶故障状态"<<"门禁状态"<<"主控箱风机状态"<<"主控箱高温告警"<<"单柜开关状态"<<"故障清除指令"<<"TMS出水口压力"<< "TMS回水口压力";
    for(j=0;j<26;j++)
    {
        wCount = ui->tableWidget_watercoolcontrl->rowCount();
        ui->tableWidget_watercoolcontrl->insertRow(wCount);
        w_item[0]=new QTableWidgetItem(w_Items[j]);
        ui->tableWidget_watercoolcontrl->setItem(j,0,w_item[0]);
    }

}

void frmConfig::on_pushButton_3_clicked()
{
    frmbatterydata *configWindow = new frmbatterydata;
   configWindow->setWindowModality(Qt::ApplicationModal);
        configWindow->show();

//        frmbatterydata w;
//        w.show();

}
