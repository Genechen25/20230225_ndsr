/********************************************************************************
** Form generated from reading UI file 'frmconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCONFIG_H
#define UI_FRMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <battery.h>
#include <led.h>
#include "switchbutton.h"

QT_BEGIN_NAMESPACE

class Ui_frmConfig
{
public:
    QHBoxLayout *horizontalLayout_9;
    QWidget *widgetLeft;
    QVBoxLayout *verticalLayout;
    QPushButton *btnConfigSystem;
    QPushButton *btnConfigPort;
    QPushButton *btnConfigDevice;
    QPushButton *btnConfigNode;
    QPushButton *btnConfigMap;
    QPushButton *btnConfigPosition;
    QPushButton *btnConfigUser;
    QPushButton *btnConfigDebug;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *ConfigSystemRealtime;
    QTableWidget *battery_realdata_table;
    QWidget *widget_batteryicon;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QSlider *verticalSlider;
    QVBoxLayout *verticalLayout_2;
    Battery *widget_battery_B;
    QVBoxLayout *verticalLayout_27;
    Battery *widget_battery_1;
    QVBoxLayout *verticalLayout_4;
    Battery *widget_battery_2;
    QVBoxLayout *verticalLayout_28;
    Battery *widget_battery_3;
    QVBoxLayout *verticalLayout_33;
    Battery *widget_battery_4;
    QVBoxLayout *verticalLayout_29;
    Battery *widget_battery_5;
    QVBoxLayout *verticalLayout_35;
    Battery *widget_battery_6;
    QVBoxLayout *verticalLayout_34;
    Battery *widget_battery_7;
    QVBoxLayout *verticalLayout_32;
    Battery *widget_battery_8;
    QVBoxLayout *verticalLayout_30;
    Battery *widget_battery_9;
    QVBoxLayout *verticalLayout_31;
    Battery *widget_battery_10;
    QWidget *ConfigPortWater;
    QTableWidget *tableWidget_watercoolcontrl;
    QWidget *ConfigDeviceFault;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *CAT_1;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_41;
    QSpacerItem *horizontalSpacer_30;
    LED *LED1_4;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_42;
    QSpacerItem *horizontalSpacer_31;
    LED *widget_28;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_43;
    QSpacerItem *horizontalSpacer_32;
    LED *widget_29;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_44;
    QSpacerItem *horizontalSpacer_33;
    LED *widget_30;
    QHBoxLayout *horizontalLayout_50;
    QLabel *label_45;
    QSpacerItem *horizontalSpacer_34;
    LED *widget_31;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_46;
    QSpacerItem *horizontalSpacer_35;
    LED *widget_32;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_64;
    QLabel *label_59;
    QSpacerItem *horizontalSpacer_48;
    LED *LED1_7;
    QHBoxLayout *horizontalLayout_65;
    QLabel *label_60;
    QSpacerItem *horizontalSpacer_49;
    LED *widget_43;
    QPushButton *faultenble;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    LED *LED1;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    LED *widget_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    LED *widget_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_4;
    LED *widget_4;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_5;
    LED *widget_5;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_11;
    LED *widget_10;
    QGroupBox *CAT_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_72;
    QLabel *label_65;
    QSpacerItem *horizontalSpacer_54;
    LED *LED1_8;
    QHBoxLayout *horizontalLayout_73;
    QLabel *label_66;
    QSpacerItem *horizontalSpacer_55;
    LED *widget_48;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_47;
    QSpacerItem *horizontalSpacer_36;
    LED *LED1_6;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_48;
    QSpacerItem *horizontalSpacer_37;
    LED *widget_33;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_49;
    QSpacerItem *horizontalSpacer_38;
    LED *widget_34;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_50;
    QSpacerItem *horizontalSpacer_39;
    LED *widget_35;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_51;
    QSpacerItem *horizontalSpacer_40;
    LED *widget_36;
    QHBoxLayout *horizontalLayout_57;
    QLabel *label_52;
    QSpacerItem *horizontalSpacer_41;
    LED *widget_37;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_12;
    LED *LED1_5;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_13;
    LED *widget_11;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_14;
    LED *widget_12;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_15;
    LED *widget_13;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_16;
    LED *widget_14;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_17;
    LED *widget_15;
    QGroupBox *CAT_3;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_74;
    QLabel *label_67;
    QSpacerItem *horizontalSpacer_56;
    LED *widget_49;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_58;
    QLabel *label_53;
    QSpacerItem *horizontalSpacer_42;
    LED *LED1_10;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_54;
    QSpacerItem *horizontalSpacer_43;
    LED *widget_38;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_55;
    QSpacerItem *horizontalSpacer_44;
    LED *widget_39;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_56;
    QSpacerItem *horizontalSpacer_45;
    LED *widget_40;
    QHBoxLayout *horizontalLayout_62;
    QLabel *label_57;
    QSpacerItem *horizontalSpacer_46;
    LED *widget_41;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_58;
    QSpacerItem *horizontalSpacer_47;
    LED *widget_42;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_18;
    LED *LED1_9;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_19;
    LED *widget_16;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_25;
    QSpacerItem *horizontalSpacer_20;
    LED *widget_17;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_21;
    LED *widget_18;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer_22;
    LED *widget_19;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer_23;
    LED *widget_20;
    QWidget *widget7;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_79;
    QLabel *label_71;
    QSpacerItem *horizontalSpacer_60;
    LED *LED1_11;
    QHBoxLayout *horizontalLayout_80;
    QLabel *label_72;
    QSpacerItem *horizontalSpacer_61;
    LED *widget_53;
    QHBoxLayout *horizontalLayout_66;
    QLabel *label_73;
    QSpacerItem *horizontalSpacer_62;
    LED *widget_54;
    QHBoxLayout *horizontalLayout_82;
    QLabel *label_74;
    QSpacerItem *horizontalSpacer_63;
    LED *widget_55;
    QHBoxLayout *horizontalLayout_83;
    QLabel *label_75;
    QSpacerItem *horizontalSpacer_64;
    LED *widget_56;
    QHBoxLayout *horizontalLayout_84;
    QLabel *label_76;
    QSpacerItem *horizontalSpacer_65;
    LED *widget_57;
    QWidget *ConfigNodeIOContrl;
    QWidget *widget8;
    QVBoxLayout *verticalLayout_36;
    QGroupBox *IOContr;
    QLabel *label_86;
    QComboBox *comboBox_4;
    QFrame *frame;
    QWidget *widget9;
    QVBoxLayout *verticalLayout_37;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *label_82;
    QLabel *label_83;
    QLabel *label_84;
    QLabel *label_85;
    QLabel *label_87;
    QLabel *label_88;
    QPushButton *btnfaultclear;
    QWidget *widget10;
    QVBoxLayout *verticalLayout_38;
    SwitchButton *widget11;
    SwitchButton *widget_21;
    SwitchButton *widget_22;
    SwitchButton *widget_44;
    SwitchButton *widget_45;
    QGroupBox *SOX;
    QLabel *label_78;
    QLabel *label_79;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *btnSOCset;
    QPushButton *btnSOPset;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QWidget *widget12;
    QHBoxLayout *horizontalLayout_67;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QWidget *ConfigMapParmEdit;
    QTabWidget *tabWidget;
    QWidget *tabWidget_SOC;
    QWidget *tabWidget_Volt;
    QWidget *tabWidget_Temp;
    QWidget *tabWidget_Curr;
    QWidget *tabWidget_other;
    QLabel *label_89;
    QComboBox *comboBox_5;
    QWidget *widget13;
    QHBoxLayout *horizontalLayout_68;
    QPushButton *btnReaddata;
    QPushButton *btnWritedata;
    QPushButton *btnOutputdata;
    QWidget *ConfigPositionUpdate;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_24;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_23;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QGroupBox *groupBox;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *btnchooseFile;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QProgressBar *progressBar;
    QPushButton *btnstartUpdate;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *ConfigUserSetting;
    QWidget *ConfigDebugInterface;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_8;
    QFrame *datasave;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_savepath;
    QLineEdit *lineEdit_savepath;
    QPushButton *pushButton_savepath;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_filename;
    QLineEdit *lineEdit_filename;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_sampletime;
    QLineEdit *lineEdit_sampletime;
    QLabel *label_sampletime_ms;
    QFrame *bbmssetting;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_rbmsnum;
    QLineEdit *lineEdit_rbmsnum;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_pbmunum;
    QLineEdit *lineEdit_pbmunum;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_pbmutempnum;
    QLineEdit *lineEdit_pbmutempnum;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_pbmucellnum;
    QLineEdit *lineEdit_pbmucellnum;
    QFrame *comcanfd;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_33;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_devicetype;
    QComboBox *comboBox_devicetype;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_comindex;
    QComboBox *comboBox_comindex;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_numbcan;
    QComboBox *comboBox_numbtongdao;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_baud;
    QComboBox *comboBox_baud;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_mesformat;
    QComboBox *comboBox_mesformat;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_mestype;
    QComboBox *comboBox_mestype;
    QPushButton *btnsave;
    QPushButton *btncancel;
    QLabel *label_datasave;
    QLabel *label_bbmssetting;
    QLabel *label_canfdsetting;

    void setupUi(QWidget *frmConfig)
    {
        if (frmConfig->objectName().isEmpty())
            frmConfig->setObjectName(QString::fromUtf8("frmConfig"));
        frmConfig->resize(1204, 744);
        horizontalLayout_9 = new QHBoxLayout(frmConfig);
        horizontalLayout_9->setSpacing(1);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 1, 0, 0);
        widgetLeft = new QWidget(frmConfig);
        widgetLeft->setObjectName(QString::fromUtf8("widgetLeft"));
        widgetLeft->setMinimumSize(QSize(135, 0));
        widgetLeft->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(widgetLeft);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 1, 0, 0);
        btnConfigSystem = new QPushButton(widgetLeft);
        btnConfigSystem->setObjectName(QString::fromUtf8("btnConfigSystem"));

        verticalLayout->addWidget(btnConfigSystem);

        btnConfigPort = new QPushButton(widgetLeft);
        btnConfigPort->setObjectName(QString::fromUtf8("btnConfigPort"));

        verticalLayout->addWidget(btnConfigPort);

        btnConfigDevice = new QPushButton(widgetLeft);
        btnConfigDevice->setObjectName(QString::fromUtf8("btnConfigDevice"));

        verticalLayout->addWidget(btnConfigDevice);

        btnConfigNode = new QPushButton(widgetLeft);
        btnConfigNode->setObjectName(QString::fromUtf8("btnConfigNode"));

        verticalLayout->addWidget(btnConfigNode);

        btnConfigMap = new QPushButton(widgetLeft);
        btnConfigMap->setObjectName(QString::fromUtf8("btnConfigMap"));

        verticalLayout->addWidget(btnConfigMap);

        btnConfigPosition = new QPushButton(widgetLeft);
        btnConfigPosition->setObjectName(QString::fromUtf8("btnConfigPosition"));

        verticalLayout->addWidget(btnConfigPosition);

        btnConfigUser = new QPushButton(widgetLeft);
        btnConfigUser->setObjectName(QString::fromUtf8("btnConfigUser"));

        verticalLayout->addWidget(btnConfigUser);

        btnConfigDebug = new QPushButton(widgetLeft);
        btnConfigDebug->setObjectName(QString::fromUtf8("btnConfigDebug"));

        verticalLayout->addWidget(btnConfigDebug);

        verticalSpacer = new QSpacerItem(20, 414, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_9->addWidget(widgetLeft);

        stackedWidget = new QStackedWidget(frmConfig);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        ConfigSystemRealtime = new QWidget();
        ConfigSystemRealtime->setObjectName(QString::fromUtf8("ConfigSystemRealtime"));
        battery_realdata_table = new QTableWidget(ConfigSystemRealtime);
        battery_realdata_table->setObjectName(QString::fromUtf8("battery_realdata_table"));
        battery_realdata_table->setGeometry(QRect(1, 210, 1400, 481));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(battery_realdata_table->sizePolicy().hasHeightForWidth());
        battery_realdata_table->setSizePolicy(sizePolicy);
        battery_realdata_table->setMinimumSize(QSize(1400, 0));
        widget_batteryicon = new QWidget(ConfigSystemRealtime);
        widget_batteryicon->setObjectName(QString::fromUtf8("widget_batteryicon"));
        widget_batteryicon->setGeometry(QRect(1, 0, 1400, 200));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(200);
        sizePolicy1.setHeightForWidth(widget_batteryicon->sizePolicy().hasHeightForWidth());
        widget_batteryicon->setSizePolicy(sizePolicy1);
        widget_batteryicon->setMinimumSize(QSize(1400, 200));
        widget_batteryicon->setAutoFillBackground(false);
        widget_batteryicon->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        horizontalLayout_11 = new QHBoxLayout(widget_batteryicon);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(100, -1, 30, -1);
        verticalSlider = new QSlider(widget_batteryicon);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_10->addWidget(verticalSlider);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_battery_B = new Battery(widget_batteryicon);
        widget_battery_B->setObjectName(QString::fromUtf8("widget_battery_B"));

        verticalLayout_2->addWidget(widget_battery_B);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        widget_battery_1 = new Battery(widget_batteryicon);
        widget_battery_1->setObjectName(QString::fromUtf8("widget_battery_1"));

        verticalLayout_27->addWidget(widget_battery_1);


        horizontalLayout_10->addLayout(verticalLayout_27);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_battery_2 = new Battery(widget_batteryicon);
        widget_battery_2->setObjectName(QString::fromUtf8("widget_battery_2"));

        verticalLayout_4->addWidget(widget_battery_2);


        horizontalLayout_10->addLayout(verticalLayout_4);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        widget_battery_3 = new Battery(widget_batteryicon);
        widget_battery_3->setObjectName(QString::fromUtf8("widget_battery_3"));

        verticalLayout_28->addWidget(widget_battery_3);


        horizontalLayout_10->addLayout(verticalLayout_28);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        widget_battery_4 = new Battery(widget_batteryicon);
        widget_battery_4->setObjectName(QString::fromUtf8("widget_battery_4"));

        verticalLayout_33->addWidget(widget_battery_4);


        horizontalLayout_10->addLayout(verticalLayout_33);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        widget_battery_5 = new Battery(widget_batteryicon);
        widget_battery_5->setObjectName(QString::fromUtf8("widget_battery_5"));

        verticalLayout_29->addWidget(widget_battery_5);


        horizontalLayout_10->addLayout(verticalLayout_29);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        widget_battery_6 = new Battery(widget_batteryicon);
        widget_battery_6->setObjectName(QString::fromUtf8("widget_battery_6"));

        verticalLayout_35->addWidget(widget_battery_6);


        horizontalLayout_10->addLayout(verticalLayout_35);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        widget_battery_7 = new Battery(widget_batteryicon);
        widget_battery_7->setObjectName(QString::fromUtf8("widget_battery_7"));

        verticalLayout_34->addWidget(widget_battery_7);


        horizontalLayout_10->addLayout(verticalLayout_34);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        widget_battery_8 = new Battery(widget_batteryicon);
        widget_battery_8->setObjectName(QString::fromUtf8("widget_battery_8"));

        verticalLayout_32->addWidget(widget_battery_8);


        horizontalLayout_10->addLayout(verticalLayout_32);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        widget_battery_9 = new Battery(widget_batteryicon);
        widget_battery_9->setObjectName(QString::fromUtf8("widget_battery_9"));

        verticalLayout_30->addWidget(widget_battery_9);


        horizontalLayout_10->addLayout(verticalLayout_30);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        widget_battery_10 = new Battery(widget_batteryicon);
        widget_battery_10->setObjectName(QString::fromUtf8("widget_battery_10"));

        verticalLayout_31->addWidget(widget_battery_10);


        horizontalLayout_10->addLayout(verticalLayout_31);


        horizontalLayout_11->addLayout(horizontalLayout_10);

        stackedWidget->addWidget(ConfigSystemRealtime);
        ConfigPortWater = new QWidget();
        ConfigPortWater->setObjectName(QString::fromUtf8("ConfigPortWater"));
        tableWidget_watercoolcontrl = new QTableWidget(ConfigPortWater);
        tableWidget_watercoolcontrl->setObjectName(QString::fromUtf8("tableWidget_watercoolcontrl"));
        tableWidget_watercoolcontrl->setGeometry(QRect(1, 6, 1400, 680));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_watercoolcontrl->sizePolicy().hasHeightForWidth());
        tableWidget_watercoolcontrl->setSizePolicy(sizePolicy2);
        tableWidget_watercoolcontrl->setMinimumSize(QSize(1400, 0));
        stackedWidget->addWidget(ConfigPortWater);
        ConfigDeviceFault = new QWidget();
        ConfigDeviceFault->setObjectName(QString::fromUtf8("ConfigDeviceFault"));
        widget = new QWidget(ConfigDeviceFault);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 1022, 691));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        CAT_1 = new QGroupBox(widget);
        CAT_1->setObjectName(QString::fromUtf8("CAT_1"));
        CAT_1->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 250, 255);"));
        layoutWidget_3 = new QWidget(CAT_1);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(310, 21, 161, 164));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        label_41 = new QLabel(layoutWidget_3);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_46->addWidget(label_41);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_30);

        LED1_4 = new LED(layoutWidget_3);
        LED1_4->setObjectName(QString::fromUtf8("LED1_4"));
        LED1_4->setMinimumSize(QSize(20, 20));

        horizontalLayout_46->addWidget(LED1_4);


        verticalLayout_14->addLayout(horizontalLayout_46);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        label_42 = new QLabel(layoutWidget_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_47->addWidget(label_42);

        horizontalSpacer_31 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_31);

        widget_28 = new LED(layoutWidget_3);
        widget_28->setObjectName(QString::fromUtf8("widget_28"));
        widget_28->setMinimumSize(QSize(20, 20));

        horizontalLayout_47->addWidget(widget_28);


        verticalLayout_14->addLayout(horizontalLayout_47);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        label_43 = new QLabel(layoutWidget_3);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_48->addWidget(label_43);

        horizontalSpacer_32 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_48->addItem(horizontalSpacer_32);

        widget_29 = new LED(layoutWidget_3);
        widget_29->setObjectName(QString::fromUtf8("widget_29"));
        widget_29->setMinimumSize(QSize(20, 20));

        horizontalLayout_48->addWidget(widget_29);


        verticalLayout_14->addLayout(horizontalLayout_48);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        label_44 = new QLabel(layoutWidget_3);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_49->addWidget(label_44);

        horizontalSpacer_33 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_33);

        widget_30 = new LED(layoutWidget_3);
        widget_30->setObjectName(QString::fromUtf8("widget_30"));
        widget_30->setMinimumSize(QSize(20, 20));

        horizontalLayout_49->addWidget(widget_30);


        verticalLayout_14->addLayout(horizontalLayout_49);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        label_45 = new QLabel(layoutWidget_3);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_50->addWidget(label_45);

        horizontalSpacer_34 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_34);

        widget_31 = new LED(layoutWidget_3);
        widget_31->setObjectName(QString::fromUtf8("widget_31"));
        widget_31->setMinimumSize(QSize(20, 20));

        horizontalLayout_50->addWidget(widget_31);


        verticalLayout_14->addLayout(horizontalLayout_50);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        label_46 = new QLabel(layoutWidget_3);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        horizontalLayout_51->addWidget(label_46);

        horizontalSpacer_35 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_51->addItem(horizontalSpacer_35);

        widget_32 = new LED(layoutWidget_3);
        widget_32->setObjectName(QString::fromUtf8("widget_32"));
        widget_32->setMinimumSize(QSize(20, 20));

        horizontalLayout_51->addWidget(widget_32);


        verticalLayout_14->addLayout(horizontalLayout_51);

        layoutWidget_7 = new QWidget(CAT_1);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(590, 20, 151, 52));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_64 = new QHBoxLayout();
        horizontalLayout_64->setObjectName(QString::fromUtf8("horizontalLayout_64"));
        label_59 = new QLabel(layoutWidget_7);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        horizontalLayout_64->addWidget(label_59);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_64->addItem(horizontalSpacer_48);

        LED1_7 = new LED(layoutWidget_7);
        LED1_7->setObjectName(QString::fromUtf8("LED1_7"));
        LED1_7->setMinimumSize(QSize(20, 20));

        horizontalLayout_64->addWidget(LED1_7);


        verticalLayout_17->addLayout(horizontalLayout_64);

        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setObjectName(QString::fromUtf8("horizontalLayout_65"));
        label_60 = new QLabel(layoutWidget_7);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        horizontalLayout_65->addWidget(label_60);

        horizontalSpacer_49 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_65->addItem(horizontalSpacer_49);

        widget_43 = new LED(layoutWidget_7);
        widget_43->setObjectName(QString::fromUtf8("widget_43"));
        widget_43->setMinimumSize(QSize(20, 20));

        horizontalLayout_65->addWidget(widget_43);


        verticalLayout_17->addLayout(horizontalLayout_65);

        faultenble = new QPushButton(CAT_1);
        faultenble->setObjectName(QString::fromUtf8("faultenble"));
        faultenble->setGeometry(QRect(894, 180, 91, 23));
        widget1 = new QWidget(CAT_1);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(23, 22, 161, 164));
        verticalLayout_9 = new QVBoxLayout(widget1);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_12->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        LED1 = new LED(widget1);
        LED1->setObjectName(QString::fromUtf8("LED1"));
        LED1->setMinimumSize(QSize(20, 20));

        horizontalLayout_12->addWidget(LED1);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_13->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        widget_2 = new LED(widget1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(20, 20));

        horizontalLayout_13->addWidget(widget_2);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_16->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);

        widget_3 = new LED(widget1);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(20, 20));

        horizontalLayout_16->addWidget(widget_3);


        verticalLayout_9->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(widget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_17->addWidget(label_14);

        horizontalSpacer_4 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        widget_4 = new LED(widget1);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(20, 20));

        horizontalLayout_17->addWidget(widget_4);


        verticalLayout_9->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_15 = new QLabel(widget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_18->addWidget(label_15);

        horizontalSpacer_5 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_5);

        widget_5 = new LED(widget1);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(20, 20));

        horizontalLayout_18->addWidget(widget_5);


        verticalLayout_9->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_16 = new QLabel(widget1);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_19->addWidget(label_16);

        horizontalSpacer_11 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_11);

        widget_10 = new LED(widget1);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMinimumSize(QSize(20, 20));

        horizontalLayout_19->addWidget(widget_10);


        verticalLayout_9->addLayout(horizontalLayout_19);


        verticalLayout_3->addWidget(CAT_1);

        CAT_2 = new QGroupBox(widget);
        CAT_2->setObjectName(QString::fromUtf8("CAT_2"));
        CAT_2->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 250, 255);"));
        widget2 = new QWidget(CAT_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(590, 20, 151, 52));
        verticalLayout_18 = new QVBoxLayout(widget2);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_72 = new QHBoxLayout();
        horizontalLayout_72->setObjectName(QString::fromUtf8("horizontalLayout_72"));
        label_65 = new QLabel(widget2);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setMinimumSize(QSize(0, 0));

        horizontalLayout_72->addWidget(label_65);

        horizontalSpacer_54 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_72->addItem(horizontalSpacer_54);

        LED1_8 = new LED(widget2);
        LED1_8->setObjectName(QString::fromUtf8("LED1_8"));
        LED1_8->setMinimumSize(QSize(20, 20));

        horizontalLayout_72->addWidget(LED1_8);


        verticalLayout_18->addLayout(horizontalLayout_72);

        horizontalLayout_73 = new QHBoxLayout();
        horizontalLayout_73->setObjectName(QString::fromUtf8("horizontalLayout_73"));
        label_66 = new QLabel(widget2);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setMinimumSize(QSize(0, 0));

        horizontalLayout_73->addWidget(label_66);

        horizontalSpacer_55 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_73->addItem(horizontalSpacer_55);

        widget_48 = new LED(widget2);
        widget_48->setObjectName(QString::fromUtf8("widget_48"));
        widget_48->setMinimumSize(QSize(20, 20));

        horizontalLayout_73->addWidget(widget_48);


        verticalLayout_18->addLayout(horizontalLayout_73);

        widget3 = new QWidget(CAT_2);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(310, 20, 161, 164));
        verticalLayout_15 = new QVBoxLayout(widget3);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        label_47 = new QLabel(widget3);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        horizontalLayout_52->addWidget(label_47);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_36);

        LED1_6 = new LED(widget3);
        LED1_6->setObjectName(QString::fromUtf8("LED1_6"));
        LED1_6->setMinimumSize(QSize(20, 20));

        horizontalLayout_52->addWidget(LED1_6);


        verticalLayout_15->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        label_48 = new QLabel(widget3);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        horizontalLayout_53->addWidget(label_48);

        horizontalSpacer_37 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_53->addItem(horizontalSpacer_37);

        widget_33 = new LED(widget3);
        widget_33->setObjectName(QString::fromUtf8("widget_33"));
        widget_33->setMinimumSize(QSize(20, 20));

        horizontalLayout_53->addWidget(widget_33);


        verticalLayout_15->addLayout(horizontalLayout_53);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName(QString::fromUtf8("horizontalLayout_54"));
        label_49 = new QLabel(widget3);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        horizontalLayout_54->addWidget(label_49);

        horizontalSpacer_38 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_54->addItem(horizontalSpacer_38);

        widget_34 = new LED(widget3);
        widget_34->setObjectName(QString::fromUtf8("widget_34"));
        widget_34->setMinimumSize(QSize(20, 20));

        horizontalLayout_54->addWidget(widget_34);


        verticalLayout_15->addLayout(horizontalLayout_54);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QString::fromUtf8("horizontalLayout_55"));
        label_50 = new QLabel(widget3);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        horizontalLayout_55->addWidget(label_50);

        horizontalSpacer_39 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_55->addItem(horizontalSpacer_39);

        widget_35 = new LED(widget3);
        widget_35->setObjectName(QString::fromUtf8("widget_35"));
        widget_35->setMinimumSize(QSize(20, 20));

        horizontalLayout_55->addWidget(widget_35);


        verticalLayout_15->addLayout(horizontalLayout_55);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName(QString::fromUtf8("horizontalLayout_56"));
        label_51 = new QLabel(widget3);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        horizontalLayout_56->addWidget(label_51);

        horizontalSpacer_40 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_56->addItem(horizontalSpacer_40);

        widget_36 = new LED(widget3);
        widget_36->setObjectName(QString::fromUtf8("widget_36"));
        widget_36->setMinimumSize(QSize(20, 20));

        horizontalLayout_56->addWidget(widget_36);


        verticalLayout_15->addLayout(horizontalLayout_56);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QString::fromUtf8("horizontalLayout_57"));
        label_52 = new QLabel(widget3);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        horizontalLayout_57->addWidget(label_52);

        horizontalSpacer_41 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_57->addItem(horizontalSpacer_41);

        widget_37 = new LED(widget3);
        widget_37->setObjectName(QString::fromUtf8("widget_37"));
        widget_37->setMinimumSize(QSize(20, 20));

        horizontalLayout_57->addWidget(widget_37);


        verticalLayout_15->addLayout(horizontalLayout_57);

        widget4 = new QWidget(CAT_2);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(22, 22, 161, 164));
        verticalLayout_10 = new QVBoxLayout(widget4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_17 = new QLabel(widget4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_20->addWidget(label_17);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_12);

        LED1_5 = new LED(widget4);
        LED1_5->setObjectName(QString::fromUtf8("LED1_5"));
        LED1_5->setMinimumSize(QSize(20, 20));

        horizontalLayout_20->addWidget(LED1_5);


        verticalLayout_10->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_18 = new QLabel(widget4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_21->addWidget(label_18);

        horizontalSpacer_13 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_13);

        widget_11 = new LED(widget4);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMinimumSize(QSize(20, 20));

        horizontalLayout_21->addWidget(widget_11);


        verticalLayout_10->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_19 = new QLabel(widget4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_22->addWidget(label_19);

        horizontalSpacer_14 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_14);

        widget_12 = new LED(widget4);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMinimumSize(QSize(20, 20));

        horizontalLayout_22->addWidget(widget_12);


        verticalLayout_10->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_20 = new QLabel(widget4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_23->addWidget(label_20);

        horizontalSpacer_15 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_15);

        widget_13 = new LED(widget4);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setMinimumSize(QSize(20, 20));

        horizontalLayout_23->addWidget(widget_13);


        verticalLayout_10->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_21 = new QLabel(widget4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_24->addWidget(label_21);

        horizontalSpacer_16 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_16);

        widget_14 = new LED(widget4);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setMinimumSize(QSize(20, 20));

        horizontalLayout_24->addWidget(widget_14);


        verticalLayout_10->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_22 = new QLabel(widget4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_25->addWidget(label_22);

        horizontalSpacer_17 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_17);

        widget_15 = new LED(widget4);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setMinimumSize(QSize(20, 20));

        horizontalLayout_25->addWidget(widget_15);


        verticalLayout_10->addLayout(horizontalLayout_25);


        verticalLayout_3->addWidget(CAT_2);

        CAT_3 = new QGroupBox(widget);
        CAT_3->setObjectName(QString::fromUtf8("CAT_3"));
        CAT_3->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 250, 255);"));
        layoutWidget_8 = new QWidget(CAT_3);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(810, 23, 141, 22));
        horizontalLayout_74 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_74->setObjectName(QString::fromUtf8("horizontalLayout_74"));
        horizontalLayout_74->setContentsMargins(0, 0, 0, 0);
        label_67 = new QLabel(layoutWidget_8);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setMinimumSize(QSize(0, 0));

        horizontalLayout_74->addWidget(label_67);

        horizontalSpacer_56 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_74->addItem(horizontalSpacer_56);

        widget_49 = new LED(layoutWidget_8);
        widget_49->setObjectName(QString::fromUtf8("widget_49"));
        widget_49->setMinimumSize(QSize(20, 20));

        horizontalLayout_74->addWidget(widget_49);

        widget5 = new QWidget(CAT_3);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(311, 21, 161, 164));
        verticalLayout_16 = new QVBoxLayout(widget5);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName(QString::fromUtf8("horizontalLayout_58"));
        label_53 = new QLabel(widget5);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        horizontalLayout_58->addWidget(label_53);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_58->addItem(horizontalSpacer_42);

        LED1_10 = new LED(widget5);
        LED1_10->setObjectName(QString::fromUtf8("LED1_10"));
        LED1_10->setMinimumSize(QSize(20, 20));

        horizontalLayout_58->addWidget(LED1_10);


        verticalLayout_16->addLayout(horizontalLayout_58);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName(QString::fromUtf8("horizontalLayout_59"));
        label_54 = new QLabel(widget5);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        horizontalLayout_59->addWidget(label_54);

        horizontalSpacer_43 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_59->addItem(horizontalSpacer_43);

        widget_38 = new LED(widget5);
        widget_38->setObjectName(QString::fromUtf8("widget_38"));
        widget_38->setMinimumSize(QSize(20, 20));

        horizontalLayout_59->addWidget(widget_38);


        verticalLayout_16->addLayout(horizontalLayout_59);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setObjectName(QString::fromUtf8("horizontalLayout_60"));
        label_55 = new QLabel(widget5);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        horizontalLayout_60->addWidget(label_55);

        horizontalSpacer_44 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_60->addItem(horizontalSpacer_44);

        widget_39 = new LED(widget5);
        widget_39->setObjectName(QString::fromUtf8("widget_39"));
        widget_39->setMinimumSize(QSize(20, 20));

        horizontalLayout_60->addWidget(widget_39);


        verticalLayout_16->addLayout(horizontalLayout_60);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        label_56 = new QLabel(widget5);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_61->addWidget(label_56);

        horizontalSpacer_45 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_61->addItem(horizontalSpacer_45);

        widget_40 = new LED(widget5);
        widget_40->setObjectName(QString::fromUtf8("widget_40"));
        widget_40->setMinimumSize(QSize(20, 20));

        horizontalLayout_61->addWidget(widget_40);


        verticalLayout_16->addLayout(horizontalLayout_61);

        horizontalLayout_62 = new QHBoxLayout();
        horizontalLayout_62->setObjectName(QString::fromUtf8("horizontalLayout_62"));
        label_57 = new QLabel(widget5);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        horizontalLayout_62->addWidget(label_57);

        horizontalSpacer_46 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_62->addItem(horizontalSpacer_46);

        widget_41 = new LED(widget5);
        widget_41->setObjectName(QString::fromUtf8("widget_41"));
        widget_41->setMinimumSize(QSize(20, 20));

        horizontalLayout_62->addWidget(widget_41);


        verticalLayout_16->addLayout(horizontalLayout_62);

        horizontalLayout_63 = new QHBoxLayout();
        horizontalLayout_63->setObjectName(QString::fromUtf8("horizontalLayout_63"));
        label_58 = new QLabel(widget5);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        horizontalLayout_63->addWidget(label_58);

        horizontalSpacer_47 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_63->addItem(horizontalSpacer_47);

        widget_42 = new LED(widget5);
        widget_42->setObjectName(QString::fromUtf8("widget_42"));
        widget_42->setMinimumSize(QSize(20, 20));

        horizontalLayout_63->addWidget(widget_42);


        verticalLayout_16->addLayout(horizontalLayout_63);

        widget6 = new QWidget(CAT_3);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(21, 21, 161, 164));
        verticalLayout_11 = new QVBoxLayout(widget6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_23 = new QLabel(widget6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_26->addWidget(label_23);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_18);

        LED1_9 = new LED(widget6);
        LED1_9->setObjectName(QString::fromUtf8("LED1_9"));
        LED1_9->setMinimumSize(QSize(20, 20));

        horizontalLayout_26->addWidget(LED1_9);


        verticalLayout_11->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_24 = new QLabel(widget6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_27->addWidget(label_24);

        horizontalSpacer_19 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_19);

        widget_16 = new LED(widget6);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setMinimumSize(QSize(20, 20));

        horizontalLayout_27->addWidget(widget_16);


        verticalLayout_11->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_25 = new QLabel(widget6);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_28->addWidget(label_25);

        horizontalSpacer_20 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_20);

        widget_17 = new LED(widget6);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setMinimumSize(QSize(20, 20));

        horizontalLayout_28->addWidget(widget_17);


        verticalLayout_11->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        label_26 = new QLabel(widget6);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_29->addWidget(label_26);

        horizontalSpacer_21 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_21);

        widget_18 = new LED(widget6);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        widget_18->setMinimumSize(QSize(20, 20));

        horizontalLayout_29->addWidget(widget_18);


        verticalLayout_11->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_27 = new QLabel(widget6);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_30->addWidget(label_27);

        horizontalSpacer_22 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_22);

        widget_19 = new LED(widget6);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        widget_19->setMinimumSize(QSize(20, 20));

        horizontalLayout_30->addWidget(widget_19);


        verticalLayout_11->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_28 = new QLabel(widget6);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_31->addWidget(label_28);

        horizontalSpacer_23 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_23);

        widget_20 = new LED(widget6);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        widget_20->setMinimumSize(QSize(20, 20));

        horizontalLayout_31->addWidget(widget_20);


        verticalLayout_11->addLayout(horizontalLayout_31);

        widget7 = new QWidget(CAT_3);
        widget7->setObjectName(QString::fromUtf8("widget7"));
        widget7->setGeometry(QRect(590, 20, 161, 164));
        verticalLayout_19 = new QVBoxLayout(widget7);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_79 = new QHBoxLayout();
        horizontalLayout_79->setObjectName(QString::fromUtf8("horizontalLayout_79"));
        label_71 = new QLabel(widget7);
        label_71->setObjectName(QString::fromUtf8("label_71"));

        horizontalLayout_79->addWidget(label_71);

        horizontalSpacer_60 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_79->addItem(horizontalSpacer_60);

        LED1_11 = new LED(widget7);
        LED1_11->setObjectName(QString::fromUtf8("LED1_11"));
        LED1_11->setMinimumSize(QSize(20, 20));

        horizontalLayout_79->addWidget(LED1_11);


        verticalLayout_19->addLayout(horizontalLayout_79);

        horizontalLayout_80 = new QHBoxLayout();
        horizontalLayout_80->setObjectName(QString::fromUtf8("horizontalLayout_80"));
        label_72 = new QLabel(widget7);
        label_72->setObjectName(QString::fromUtf8("label_72"));

        horizontalLayout_80->addWidget(label_72);

        horizontalSpacer_61 = new QSpacerItem(108, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_80->addItem(horizontalSpacer_61);

        widget_53 = new LED(widget7);
        widget_53->setObjectName(QString::fromUtf8("widget_53"));
        widget_53->setMinimumSize(QSize(20, 20));

        horizontalLayout_80->addWidget(widget_53);


        verticalLayout_19->addLayout(horizontalLayout_80);

        horizontalLayout_66 = new QHBoxLayout();
        horizontalLayout_66->setObjectName(QString::fromUtf8("horizontalLayout_66"));
        label_73 = new QLabel(widget7);
        label_73->setObjectName(QString::fromUtf8("label_73"));

        horizontalLayout_66->addWidget(label_73);

        horizontalSpacer_62 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_66->addItem(horizontalSpacer_62);

        widget_54 = new LED(widget7);
        widget_54->setObjectName(QString::fromUtf8("widget_54"));
        widget_54->setMinimumSize(QSize(20, 20));

        horizontalLayout_66->addWidget(widget_54);


        verticalLayout_19->addLayout(horizontalLayout_66);

        horizontalLayout_82 = new QHBoxLayout();
        horizontalLayout_82->setObjectName(QString::fromUtf8("horizontalLayout_82"));
        label_74 = new QLabel(widget7);
        label_74->setObjectName(QString::fromUtf8("label_74"));

        horizontalLayout_82->addWidget(label_74);

        horizontalSpacer_63 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_82->addItem(horizontalSpacer_63);

        widget_55 = new LED(widget7);
        widget_55->setObjectName(QString::fromUtf8("widget_55"));
        widget_55->setMinimumSize(QSize(20, 20));

        horizontalLayout_82->addWidget(widget_55);


        verticalLayout_19->addLayout(horizontalLayout_82);

        horizontalLayout_83 = new QHBoxLayout();
        horizontalLayout_83->setObjectName(QString::fromUtf8("horizontalLayout_83"));
        label_75 = new QLabel(widget7);
        label_75->setObjectName(QString::fromUtf8("label_75"));

        horizontalLayout_83->addWidget(label_75);

        horizontalSpacer_64 = new QSpacerItem(95, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_83->addItem(horizontalSpacer_64);

        widget_56 = new LED(widget7);
        widget_56->setObjectName(QString::fromUtf8("widget_56"));
        widget_56->setMinimumSize(QSize(20, 20));

        horizontalLayout_83->addWidget(widget_56);


        verticalLayout_19->addLayout(horizontalLayout_83);

        horizontalLayout_84 = new QHBoxLayout();
        horizontalLayout_84->setObjectName(QString::fromUtf8("horizontalLayout_84"));
        label_76 = new QLabel(widget7);
        label_76->setObjectName(QString::fromUtf8("label_76"));

        horizontalLayout_84->addWidget(label_76);

        horizontalSpacer_65 = new QSpacerItem(92, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_84->addItem(horizontalSpacer_65);

        widget_57 = new LED(widget7);
        widget_57->setObjectName(QString::fromUtf8("widget_57"));
        widget_57->setMinimumSize(QSize(20, 20));

        horizontalLayout_84->addWidget(widget_57);


        verticalLayout_19->addLayout(horizontalLayout_84);


        verticalLayout_3->addWidget(CAT_3);

        stackedWidget->addWidget(ConfigDeviceFault);
        ConfigNodeIOContrl = new QWidget();
        ConfigNodeIOContrl->setObjectName(QString::fromUtf8("ConfigNodeIOContrl"));
        widget8 = new QWidget(ConfigNodeIOContrl);
        widget8->setObjectName(QString::fromUtf8("widget8"));
        widget8->setGeometry(QRect(10, 10, 1038, 662));
        verticalLayout_36 = new QVBoxLayout(widget8);
        verticalLayout_36->setSpacing(10);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        IOContr = new QGroupBox(widget8);
        IOContr->setObjectName(QString::fromUtf8("IOContr"));
        IOContr->setMinimumSize(QSize(0, 400));
        label_86 = new QLabel(IOContr);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(30, 30, 54, 12));
        comboBox_4 = new QComboBox(IOContr);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(70, 25, 69, 22));
        frame = new QFrame(IOContr);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 50, 981, 341));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget9 = new QWidget(frame);
        widget9->setObjectName(QString::fromUtf8("widget9"));
        widget9->setGeometry(QRect(20, 30, 181, 301));
        verticalLayout_37 = new QVBoxLayout(widget9);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
        label_80 = new QLabel(widget9);
        label_80->setObjectName(QString::fromUtf8("label_80"));

        verticalLayout_37->addWidget(label_80);

        label_81 = new QLabel(widget9);
        label_81->setObjectName(QString::fromUtf8("label_81"));

        verticalLayout_37->addWidget(label_81);

        label_82 = new QLabel(widget9);
        label_82->setObjectName(QString::fromUtf8("label_82"));

        verticalLayout_37->addWidget(label_82);

        label_83 = new QLabel(widget9);
        label_83->setObjectName(QString::fromUtf8("label_83"));

        verticalLayout_37->addWidget(label_83);

        label_84 = new QLabel(widget9);
        label_84->setObjectName(QString::fromUtf8("label_84"));

        verticalLayout_37->addWidget(label_84);

        label_85 = new QLabel(widget9);
        label_85->setObjectName(QString::fromUtf8("label_85"));

        verticalLayout_37->addWidget(label_85);

        label_87 = new QLabel(frame);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(20, 10, 131, 16));
        label_88 = new QLabel(frame);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(280, 15, 54, 12));
        btnfaultclear = new QPushButton(frame);
        btnfaultclear->setObjectName(QString::fromUtf8("btnfaultclear"));
        btnfaultclear->setGeometry(QRect(275, 300, 75, 23));
        widget10 = new QWidget(frame);
        widget10->setObjectName(QString::fromUtf8("widget10"));
        widget10->setGeometry(QRect(270, 33, 81, 251));
        verticalLayout_38 = new QVBoxLayout(widget10);
        verticalLayout_38->setSpacing(10);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        widget11 = new SwitchButton(widget10);
        widget11->setObjectName(QString::fromUtf8("widget11"));
        widget11->setMinimumSize(QSize(30, 20));

        verticalLayout_38->addWidget(widget11);

        widget_21 = new SwitchButton(widget10);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        widget_21->setMinimumSize(QSize(30, 20));

        verticalLayout_38->addWidget(widget_21);

        widget_22 = new SwitchButton(widget10);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        widget_22->setMinimumSize(QSize(30, 20));

        verticalLayout_38->addWidget(widget_22);

        widget_44 = new SwitchButton(widget10);
        widget_44->setObjectName(QString::fromUtf8("widget_44"));
        widget_44->setMinimumSize(QSize(30, 20));

        verticalLayout_38->addWidget(widget_44);

        widget_45 = new SwitchButton(widget10);
        widget_45->setObjectName(QString::fromUtf8("widget_45"));
        widget_45->setMinimumSize(QSize(30, 20));

        verticalLayout_38->addWidget(widget_45);


        verticalLayout_36->addWidget(IOContr);

        SOX = new QGroupBox(widget8);
        SOX->setObjectName(QString::fromUtf8("SOX"));
        SOX->setMinimumSize(QSize(0, 250));
        label_78 = new QLabel(SOX);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(34, 92, 81, 16));
        label_79 = new QLabel(SOX);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(34, 133, 191, 16));
        comboBox_2 = new QComboBox(SOX);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(270, 91, 81, 21));
        comboBox_3 = new QComboBox(SOX);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(270, 127, 81, 21));
        btnSOCset = new QPushButton(SOX);
        btnSOCset->setObjectName(QString::fromUtf8("btnSOCset"));
        btnSOCset->setGeometry(QRect(510, 92, 75, 23));
        btnSOPset = new QPushButton(SOX);
        btnSOPset->setObjectName(QString::fromUtf8("btnSOPset"));
        btnSOPset->setGeometry(QRect(510, 125, 75, 23));
        lineEdit_3 = new QLineEdit(SOX);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(740, 95, 133, 20));
        lineEdit_3->setMinimumSize(QSize(40, 0));
        lineEdit_4 = new QLineEdit(SOX);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(740, 127, 133, 20));
        lineEdit_4->setMinimumSize(QSize(40, 0));
        widget12 = new QWidget(SOX);
        widget12->setObjectName(QString::fromUtf8("widget12"));
        widget12->setGeometry(QRect(30, 50, 981, 16));
        horizontalLayout_67 = new QHBoxLayout(widget12);
        horizontalLayout_67->setObjectName(QString::fromUtf8("horizontalLayout_67"));
        horizontalLayout_67->setContentsMargins(0, 0, 0, 0);
        label_61 = new QLabel(widget12);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        horizontalLayout_67->addWidget(label_61);

        label_62 = new QLabel(widget12);
        label_62->setObjectName(QString::fromUtf8("label_62"));

        horizontalLayout_67->addWidget(label_62);

        label_63 = new QLabel(widget12);
        label_63->setObjectName(QString::fromUtf8("label_63"));

        horizontalLayout_67->addWidget(label_63);

        label_64 = new QLabel(widget12);
        label_64->setObjectName(QString::fromUtf8("label_64"));

        horizontalLayout_67->addWidget(label_64);


        verticalLayout_36->addWidget(SOX);

        stackedWidget->addWidget(ConfigNodeIOContrl);
        ConfigMapParmEdit = new QWidget();
        ConfigMapParmEdit->setObjectName(QString::fromUtf8("ConfigMapParmEdit"));
        tabWidget = new QTabWidget(ConfigMapParmEdit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 70, 941, 351));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        tabWidget_SOC = new QWidget();
        tabWidget_SOC->setObjectName(QString::fromUtf8("tabWidget_SOC"));
        tabWidget_SOC->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        tabWidget->addTab(tabWidget_SOC, QString());
        tabWidget_Volt = new QWidget();
        tabWidget_Volt->setObjectName(QString::fromUtf8("tabWidget_Volt"));
        tabWidget->addTab(tabWidget_Volt, QString());
        tabWidget_Temp = new QWidget();
        tabWidget_Temp->setObjectName(QString::fromUtf8("tabWidget_Temp"));
        tabWidget_Temp->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        tabWidget->addTab(tabWidget_Temp, QString());
        tabWidget_Curr = new QWidget();
        tabWidget_Curr->setObjectName(QString::fromUtf8("tabWidget_Curr"));
        tabWidget_Curr->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        tabWidget->addTab(tabWidget_Curr, QString());
        tabWidget_other = new QWidget();
        tabWidget_other->setObjectName(QString::fromUtf8("tabWidget_other"));
        tabWidget_other->setStyleSheet(QString::fromUtf8("background-color: rgb(216, 216, 216);"));
        tabWidget->addTab(tabWidget_other, QString());
        label_89 = new QLabel(ConfigMapParmEdit);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setGeometry(QRect(30, 35, 54, 12));
        comboBox_5 = new QComboBox(ConfigMapParmEdit);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(70, 30, 69, 22));
        widget13 = new QWidget(ConfigMapParmEdit);
        widget13->setObjectName(QString::fromUtf8("widget13"));
        widget13->setGeometry(QRect(730, 450, 239, 51));
        horizontalLayout_68 = new QHBoxLayout(widget13);
        horizontalLayout_68->setObjectName(QString::fromUtf8("horizontalLayout_68"));
        horizontalLayout_68->setContentsMargins(0, 0, 0, 0);
        btnReaddata = new QPushButton(widget13);
        btnReaddata->setObjectName(QString::fromUtf8("btnReaddata"));

        horizontalLayout_68->addWidget(btnReaddata);

        btnWritedata = new QPushButton(widget13);
        btnWritedata->setObjectName(QString::fromUtf8("btnWritedata"));

        horizontalLayout_68->addWidget(btnWritedata);

        btnOutputdata = new QPushButton(widget13);
        btnOutputdata->setObjectName(QString::fromUtf8("btnOutputdata"));

        horizontalLayout_68->addWidget(btnOutputdata);

        stackedWidget->addWidget(ConfigMapParmEdit);
        ConfigPositionUpdate = new QWidget();
        ConfigPositionUpdate->setObjectName(QString::fromUtf8("ConfigPositionUpdate"));
        layoutWidget = new QWidget(ConfigPositionUpdate);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 601, 561));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(380, 20, 201, 151));
        verticalLayout_24 = new QVBoxLayout(layoutWidget1);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout_24->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(layoutWidget1);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        verticalLayout_24->addWidget(lineEdit_9);

        lineEdit_10 = new QLineEdit(layoutWidget1);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        verticalLayout_24->addWidget(lineEdit_10);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(90, 20, 201, 191));
        verticalLayout_23 = new QVBoxLayout(layoutWidget2);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_23->addWidget(lineEdit_2);

        lineEdit_5 = new QLineEdit(layoutWidget2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_23->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_23->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_23->addWidget(lineEdit_7);

        layoutWidget3 = new QWidget(groupBox_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(12, 23, 74, 181));
        verticalLayout_25 = new QVBoxLayout(layoutWidget3);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_25->addWidget(label_6);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_25->addWidget(label_7);

        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_25->addWidget(label_9);

        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_25->addWidget(label_10);

        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(300, 30, 74, 131));
        verticalLayout_26 = new QVBoxLayout(layoutWidget4);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_26->addWidget(label_11);

        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_26->addWidget(label_13);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_26->addWidget(label_12);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 90, 551, 91));
        verticalLayout_20 = new QVBoxLayout(layoutWidget5);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_7->addWidget(lineEdit);

        btnchooseFile = new QPushButton(layoutWidget5);
        btnchooseFile->setObjectName(QString::fromUtf8("btnchooseFile"));

        horizontalLayout_7->addWidget(btnchooseFile);


        verticalLayout_20->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        progressBar = new QProgressBar(layoutWidget5);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_8->addWidget(progressBar);

        btnstartUpdate = new QPushButton(layoutWidget5);
        btnstartUpdate->setObjectName(QString::fromUtf8("btnstartUpdate"));

        horizontalLayout_8->addWidget(btnstartUpdate);


        verticalLayout_20->addLayout(horizontalLayout_8);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 58, 54, 12));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(86, 53, 401, 22));

        verticalLayout_7->addWidget(groupBox);

        stackedWidget->addWidget(ConfigPositionUpdate);
        ConfigUserSetting = new QWidget();
        ConfigUserSetting->setObjectName(QString::fromUtf8("ConfigUserSetting"));
        stackedWidget->addWidget(ConfigUserSetting);
        ConfigDebugInterface = new QWidget();
        ConfigDebugInterface->setObjectName(QString::fromUtf8("ConfigDebugInterface"));
        ConfigDebugInterface->setContextMenuPolicy(Qt::DefaultContextMenu);
        layoutWidget6 = new QWidget(ConfigDebugInterface);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(40, 50, 551, 481));
        verticalLayout_8 = new QVBoxLayout(layoutWidget6);
        verticalLayout_8->setSpacing(11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        datasave = new QFrame(layoutWidget6);
        datasave->setObjectName(QString::fromUtf8("datasave"));
        datasave->setFrameShape(QFrame::StyledPanel);
        datasave->setFrameShadow(QFrame::Plain);
        datasave->setLineWidth(2);
        layoutWidget7 = new QWidget(datasave);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 20, 401, 102));
        verticalLayout_5 = new QVBoxLayout(layoutWidget7);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_savepath = new QLabel(layoutWidget7);
        label_savepath->setObjectName(QString::fromUtf8("label_savepath"));

        horizontalLayout->addWidget(label_savepath);

        lineEdit_savepath = new QLineEdit(layoutWidget7);
        lineEdit_savepath->setObjectName(QString::fromUtf8("lineEdit_savepath"));

        horizontalLayout->addWidget(lineEdit_savepath);

        pushButton_savepath = new QPushButton(layoutWidget7);
        pushButton_savepath->setObjectName(QString::fromUtf8("pushButton_savepath"));

        horizontalLayout->addWidget(pushButton_savepath);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_filename = new QLabel(layoutWidget7);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));

        horizontalLayout_2->addWidget(label_filename);

        lineEdit_filename = new QLineEdit(layoutWidget7);
        lineEdit_filename->setObjectName(QString::fromUtf8("lineEdit_filename"));

        horizontalLayout_2->addWidget(lineEdit_filename);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_sampletime = new QLabel(layoutWidget7);
        label_sampletime->setObjectName(QString::fromUtf8("label_sampletime"));

        horizontalLayout_3->addWidget(label_sampletime);

        lineEdit_sampletime = new QLineEdit(layoutWidget7);
        lineEdit_sampletime->setObjectName(QString::fromUtf8("lineEdit_sampletime"));

        horizontalLayout_3->addWidget(lineEdit_sampletime);

        label_sampletime_ms = new QLabel(layoutWidget7);
        label_sampletime_ms->setObjectName(QString::fromUtf8("label_sampletime_ms"));

        horizontalLayout_3->addWidget(label_sampletime_ms);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_8->addWidget(datasave);

        bbmssetting = new QFrame(layoutWidget6);
        bbmssetting->setObjectName(QString::fromUtf8("bbmssetting"));
        bbmssetting->setFrameShape(QFrame::StyledPanel);
        bbmssetting->setFrameShadow(QFrame::Plain);
        bbmssetting->setLineWidth(2);
        layoutWidget8 = new QWidget(bbmssetting);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(20, 30, 197, 108));
        verticalLayout_6 = new QVBoxLayout(layoutWidget8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_rbmsnum = new QLabel(layoutWidget8);
        label_rbmsnum->setObjectName(QString::fromUtf8("label_rbmsnum"));

        horizontalLayout_4->addWidget(label_rbmsnum);

        lineEdit_rbmsnum = new QLineEdit(layoutWidget8);
        lineEdit_rbmsnum->setObjectName(QString::fromUtf8("lineEdit_rbmsnum"));

        horizontalLayout_4->addWidget(lineEdit_rbmsnum);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_pbmunum = new QLabel(layoutWidget8);
        label_pbmunum->setObjectName(QString::fromUtf8("label_pbmunum"));

        horizontalLayout_5->addWidget(label_pbmunum);

        lineEdit_pbmunum = new QLineEdit(layoutWidget8);
        lineEdit_pbmunum->setObjectName(QString::fromUtf8("lineEdit_pbmunum"));

        horizontalLayout_5->addWidget(lineEdit_pbmunum);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_pbmutempnum = new QLabel(layoutWidget8);
        label_pbmutempnum->setObjectName(QString::fromUtf8("label_pbmutempnum"));

        horizontalLayout_6->addWidget(label_pbmutempnum);

        lineEdit_pbmutempnum = new QLineEdit(layoutWidget8);
        lineEdit_pbmutempnum->setObjectName(QString::fromUtf8("lineEdit_pbmutempnum"));

        horizontalLayout_6->addWidget(lineEdit_pbmutempnum);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        label_pbmucellnum = new QLabel(layoutWidget8);
        label_pbmucellnum->setObjectName(QString::fromUtf8("label_pbmucellnum"));

        horizontalLayout_32->addWidget(label_pbmucellnum);

        lineEdit_pbmucellnum = new QLineEdit(layoutWidget8);
        lineEdit_pbmucellnum->setObjectName(QString::fromUtf8("lineEdit_pbmucellnum"));

        horizontalLayout_32->addWidget(lineEdit_pbmucellnum);


        verticalLayout_6->addLayout(horizontalLayout_32);


        verticalLayout_8->addWidget(bbmssetting);

        comcanfd = new QFrame(layoutWidget6);
        comcanfd->setObjectName(QString::fromUtf8("comcanfd"));
        comcanfd->setFrameShape(QFrame::StyledPanel);
        comcanfd->setFrameShadow(QFrame::Plain);
        comcanfd->setLineWidth(2);
        layoutWidget9 = new QWidget(comcanfd);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(30, 30, 391, 111));
        horizontalLayout_33 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        label_devicetype = new QLabel(layoutWidget9);
        label_devicetype->setObjectName(QString::fromUtf8("label_devicetype"));

        horizontalLayout_34->addWidget(label_devicetype);

        comboBox_devicetype = new QComboBox(layoutWidget9);
        comboBox_devicetype->addItem(QString());
        comboBox_devicetype->addItem(QString());
        comboBox_devicetype->setObjectName(QString::fromUtf8("comboBox_devicetype"));

        horizontalLayout_34->addWidget(comboBox_devicetype);


        verticalLayout_21->addLayout(horizontalLayout_34);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        label_comindex = new QLabel(layoutWidget9);
        label_comindex->setObjectName(QString::fromUtf8("label_comindex"));

        horizontalLayout_35->addWidget(label_comindex);

        comboBox_comindex = new QComboBox(layoutWidget9);
        comboBox_comindex->addItem(QString());
        comboBox_comindex->addItem(QString());
        comboBox_comindex->addItem(QString());
        comboBox_comindex->addItem(QString());
        comboBox_comindex->setObjectName(QString::fromUtf8("comboBox_comindex"));

        horizontalLayout_35->addWidget(comboBox_comindex);


        verticalLayout_21->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_numbcan = new QLabel(layoutWidget9);
        label_numbcan->setObjectName(QString::fromUtf8("label_numbcan"));

        horizontalLayout_36->addWidget(label_numbcan);

        comboBox_numbtongdao = new QComboBox(layoutWidget9);
        comboBox_numbtongdao->addItem(QString());
        comboBox_numbtongdao->addItem(QString());
        comboBox_numbtongdao->addItem(QString());
        comboBox_numbtongdao->setObjectName(QString::fromUtf8("comboBox_numbtongdao"));

        horizontalLayout_36->addWidget(comboBox_numbtongdao);


        verticalLayout_21->addLayout(horizontalLayout_36);


        horizontalLayout_33->addLayout(verticalLayout_21);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_baud = new QLabel(layoutWidget9);
        label_baud->setObjectName(QString::fromUtf8("label_baud"));

        horizontalLayout_37->addWidget(label_baud);

        comboBox_baud = new QComboBox(layoutWidget9);
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));

        horizontalLayout_37->addWidget(comboBox_baud);


        verticalLayout_22->addLayout(horizontalLayout_37);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_mesformat = new QLabel(layoutWidget9);
        label_mesformat->setObjectName(QString::fromUtf8("label_mesformat"));

        horizontalLayout_38->addWidget(label_mesformat);

        comboBox_mesformat = new QComboBox(layoutWidget9);
        comboBox_mesformat->setObjectName(QString::fromUtf8("comboBox_mesformat"));

        horizontalLayout_38->addWidget(comboBox_mesformat);


        verticalLayout_22->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_mestype = new QLabel(layoutWidget9);
        label_mestype->setObjectName(QString::fromUtf8("label_mestype"));

        horizontalLayout_39->addWidget(label_mestype);

        comboBox_mestype = new QComboBox(layoutWidget9);
        comboBox_mestype->addItem(QString());
        comboBox_mestype->addItem(QString());
        comboBox_mestype->setObjectName(QString::fromUtf8("comboBox_mestype"));

        horizontalLayout_39->addWidget(comboBox_mestype);


        verticalLayout_22->addLayout(horizontalLayout_39);


        horizontalLayout_33->addLayout(verticalLayout_22);


        verticalLayout_8->addWidget(comcanfd);

        comcanfd->raise();
        datasave->raise();
        bbmssetting->raise();
        btnsave = new QPushButton(ConfigDebugInterface);
        btnsave->setObjectName(QString::fromUtf8("btnsave"));
        btnsave->setGeometry(QRect(430, 550, 75, 23));
        btncancel = new QPushButton(ConfigDebugInterface);
        btncancel->setObjectName(QString::fromUtf8("btncancel"));
        btncancel->setGeometry(QRect(520, 550, 75, 23));
        label_datasave = new QLabel(ConfigDebugInterface);
        label_datasave->setObjectName(QString::fromUtf8("label_datasave"));
        label_datasave->setGeometry(QRect(50, 40, 61, 20));
        label_bbmssetting = new QLabel(ConfigDebugInterface);
        label_bbmssetting->setObjectName(QString::fromUtf8("label_bbmssetting"));
        label_bbmssetting->setGeometry(QRect(50, 206, 71, 20));
        label_canfdsetting = new QLabel(ConfigDebugInterface);
        label_canfdsetting->setObjectName(QString::fromUtf8("label_canfdsetting"));
        label_canfdsetting->setGeometry(QRect(50, 371, 101, 16));
        stackedWidget->addWidget(ConfigDebugInterface);
        layoutWidget->raise();
        btnsave->raise();
        btncancel->raise();
        label_datasave->raise();
        label_canfdsetting->raise();
        label_bbmssetting->raise();

        horizontalLayout_9->addWidget(stackedWidget);


        retranslateUi(frmConfig);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), widget_battery_B, SLOT(setValue(int)));

        stackedWidget->setCurrentIndex(4);
        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(frmConfig);
    } // setupUi

    void retranslateUi(QWidget *frmConfig)
    {
        frmConfig->setWindowTitle(QApplication::translate("frmConfig", "Form", nullptr));
        btnConfigSystem->setText(QString());
        btnConfigPort->setText(QString());
        btnConfigDevice->setText(QString());
        btnConfigNode->setText(QString());
        btnConfigMap->setText(QString());
        btnConfigPosition->setText(QString());
        btnConfigUser->setText(QString());
        btnConfigDebug->setText(QString());
        CAT_1->setTitle(QApplication::translate("frmConfig", "CAT 1", nullptr));
        label_41->setText(QApplication::translate("frmConfig", "\345\215\225\344\275\223\346\254\240\345\216\2131\347\272\247", nullptr));
        label_42->setText(QApplication::translate("frmConfig", "\345\216\213\345\267\256\350\277\207\345\210\2061\347\272\247", nullptr));
        label_43->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\350\277\207\346\270\2511\347\272\247", nullptr));
        label_44->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\350\277\207\346\270\2511\347\272\247", nullptr));
        label_45->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\344\275\216\346\270\2511\347\272\247", nullptr));
        label_46->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\344\275\216\346\270\2511\347\272\247", nullptr));
        label_59->setText(QApplication::translate("frmConfig", "\346\270\251\345\267\256\350\277\207\345\244\2471\347\272\247", nullptr));
        label_60->setText(QApplication::translate("frmConfig", "\347\273\235\347\274\230\347\224\265\351\230\273\344\275\2161\347\272\247", nullptr));
        faultenble->setText(QApplication::translate("frmConfig", "\346\225\205\351\232\234\344\275\277\350\203\275\347\244\272\344\276\213", nullptr));
        label_3->setText(QApplication::translate("frmConfig", "\346\200\273\345\216\213\350\277\207\345\216\2131\347\272\247", nullptr));
        label_4->setText(QApplication::translate("frmConfig", "\346\200\273\345\216\213\346\254\240\345\216\2131\347\272\247", nullptr));
        label_8->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\350\277\207\346\265\2011\347\272\247", nullptr));
        label_14->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\350\277\207\346\265\2011\347\272\247", nullptr));
        label_15->setText(QApplication::translate("frmConfig", "SOC\344\275\2161\347\272\247", nullptr));
        label_16->setText(QApplication::translate("frmConfig", "\345\215\225\344\275\223\350\277\207\345\216\2131\347\272\247", nullptr));
        CAT_2->setTitle(QApplication::translate("frmConfig", "CAT 2", nullptr));
        label_65->setText(QApplication::translate("frmConfig", "\346\270\251\345\267\256\350\277\207\345\244\2472\347\272\247", nullptr));
        label_66->setText(QApplication::translate("frmConfig", "\347\273\235\347\274\230\347\224\265\351\230\273\344\275\2162\347\272\247", nullptr));
        label_47->setText(QApplication::translate("frmConfig", "\345\215\225\344\275\223\346\254\240\345\216\2132\347\272\247", nullptr));
        label_48->setText(QApplication::translate("frmConfig", "\345\216\213\345\267\256\350\277\207\345\210\2062\347\272\247", nullptr));
        label_49->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\350\277\207\346\270\2512\347\272\247", nullptr));
        label_50->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\350\277\207\346\270\2512\347\272\247", nullptr));
        label_51->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\344\275\216\346\270\2512\347\272\247", nullptr));
        label_52->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\344\275\216\346\270\2512\347\272\247", nullptr));
        label_17->setText(QApplication::translate("frmConfig", "\346\200\273\345\216\213\350\277\207\345\216\2132\347\272\247", nullptr));
        label_18->setText(QApplication::translate("frmConfig", "\346\200\273\345\216\213\346\254\240\345\216\2132\347\272\247", nullptr));
        label_19->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\350\277\207\346\265\2012\347\272\247", nullptr));
        label_20->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\350\277\207\346\265\2012\347\272\247", nullptr));
        label_21->setText(QApplication::translate("frmConfig", "SOC\344\275\2162\347\272\247", nullptr));
        label_22->setText(QApplication::translate("frmConfig", "\345\215\225\344\275\223\350\277\207\345\216\2132\347\272\247", nullptr));
        CAT_3->setTitle(QApplication::translate("frmConfig", "CAT 3", nullptr));
        label_67->setText(QApplication::translate("frmConfig", "\347\237\255\350\267\257\346\225\205\351\232\234", nullptr));
        label_53->setText(QApplication::translate("frmConfig", "\345\215\225\344\275\223\346\254\240\345\216\2133\347\272\247", nullptr));
        label_54->setText(QApplication::translate("frmConfig", "\345\216\213\345\267\256\350\277\207\345\210\2063\347\272\247", nullptr));
        label_55->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\350\277\207\346\270\2513\347\272\247", nullptr));
        label_56->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\350\277\207\346\270\2513\347\272\247", nullptr));
        label_57->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\344\275\216\346\270\2513\347\272\247", nullptr));
        label_58->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\344\275\216\346\270\2513\347\272\247", nullptr));
        label_23->setText(QApplication::translate("frmConfig", "\346\200\273\345\216\213\350\277\207\345\216\2133\347\272\247", nullptr));
        label_24->setText(QApplication::translate("frmConfig", "\346\200\273\345\216\213\346\254\240\345\216\2133\347\272\247", nullptr));
        label_25->setText(QApplication::translate("frmConfig", "\345\205\205\347\224\265\350\277\207\346\265\2013\347\272\247", nullptr));
        label_26->setText(QApplication::translate("frmConfig", "\346\224\276\347\224\265\350\277\207\346\265\2013\347\272\247", nullptr));
        label_27->setText(QApplication::translate("frmConfig", "SOC\344\275\2163\347\272\247", nullptr));
        label_28->setText(QApplication::translate("frmConfig", "\345\215\225\344\275\223\350\277\207\345\216\2133\347\272\247", nullptr));
        label_71->setText(QApplication::translate("frmConfig", "\346\270\251\345\267\256\350\277\207\345\244\2473\347\272\247", nullptr));
        label_72->setText(QApplication::translate("frmConfig", "\351\200\232\344\277\241\346\225\205\351\232\234", nullptr));
        label_73->setText(QApplication::translate("frmConfig", "\344\270\273\346\255\243\345\233\236\350\267\257\345\274\200\345\205\263\347\262\230\350\277\236\346\225\205\351\232\234", nullptr));
        label_74->setText(QApplication::translate("frmConfig", "\344\270\273\350\264\237\345\233\236\350\267\257\345\274\200\345\205\263\347\262\230\350\277\236\346\225\205\351\232\234", nullptr));
        label_75->setText(QApplication::translate("frmConfig", "\351\242\204\345\205\205\346\225\205\351\232\234", nullptr));
        label_76->setText(QApplication::translate("frmConfig", "\347\273\235\347\274\230\347\224\265\351\230\273\344\275\2163\347\272\247", nullptr));
        IOContr->setTitle(QApplication::translate("frmConfig", "IO \346\216\247\345\210\266", nullptr));
        label_86->setText(QApplication::translate("frmConfig", "\346\237\234\345\217\267\357\274\232", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("frmConfig", "All", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("frmConfig", "BBMS", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("frmConfig", "RBMS01", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("frmConfig", "RBMS02", nullptr));
        comboBox_4->setItemText(4, QApplication::translate("frmConfig", "RBMS03", nullptr));
        comboBox_4->setItemText(5, QApplication::translate("frmConfig", "RBMS04", nullptr));
        comboBox_4->setItemText(6, QApplication::translate("frmConfig", "RBMS05", nullptr));
        comboBox_4->setItemText(7, QApplication::translate("frmConfig", "RBMS06", nullptr));
        comboBox_4->setItemText(8, QApplication::translate("frmConfig", "RBMS07", nullptr));
        comboBox_4->setItemText(9, QApplication::translate("frmConfig", "RBMS08", nullptr));
        comboBox_4->setItemText(10, QApplication::translate("frmConfig", "RBMS09", nullptr));
        comboBox_4->setItemText(11, QApplication::translate("frmConfig", "RBMS10", nullptr));

        label_80->setText(QApplication::translate("frmConfig", "LCR_RackRlyManCtrlEnaCmd", nullptr));
        label_81->setText(QApplication::translate("frmConfig", "LCR_RackRlyManCtrlMask", nullptr));
        label_82->setText(QApplication::translate("frmConfig", "LCR_RackRlyManCtrlCmd", nullptr));
        label_83->setText(QApplication::translate("frmConfig", "LCR_SetEnaIsoManual", nullptr));
        label_84->setText(QApplication::translate("frmConfig", "LCR_IDLearnManualCtrl", nullptr));
        label_85->setText(QApplication::translate("frmConfig", "Fault Clear", nullptr));
        label_87->setText(QApplication::translate("frmConfig", "IO \346\217\217\350\277\260", nullptr));
        label_88->setText(QApplication::translate("frmConfig", "\346\216\247\345\210\266\345\221\275\344\273\244", nullptr));
        btnfaultclear->setText(QApplication::translate("frmConfig", "Clear", nullptr));
        SOX->setTitle(QApplication::translate("frmConfig", "SOX \346\240\207\345\256\232", nullptr));
        label_78->setText(QApplication::translate("frmConfig", "Rack SOC", nullptr));
        label_79->setText(QApplication::translate("frmConfig", "Bank Accumulated Energy kWh", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("frmConfig", "Rack1", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("frmConfig", "Rack2", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("frmConfig", "Rack3", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("frmConfig", "Rack4", nullptr));

        comboBox_3->setItemText(0, QApplication::translate("frmConfig", "Discharge", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("frmConfig", "Charge", nullptr));

        btnSOCset->setText(QApplication::translate("frmConfig", "Set", nullptr));
        btnSOPset->setText(QApplication::translate("frmConfig", "Set", nullptr));
        label_61->setText(QApplication::translate("frmConfig", "Parameters", nullptr));
        label_62->setText(QApplication::translate("frmConfig", "Target", nullptr));
        label_63->setText(QApplication::translate("frmConfig", "Comnand", nullptr));
        label_64->setText(QApplication::translate("frmConfig", "   Value", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidget_SOC), QApplication::translate("frmConfig", "SOC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidget_Volt), QApplication::translate("frmConfig", "\347\224\265\345\216\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidget_Temp), QApplication::translate("frmConfig", "\347\224\265\346\265\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidget_Curr), QApplication::translate("frmConfig", "\346\270\251\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidget_other), QApplication::translate("frmConfig", "\345\205\266\345\256\203\345\217\202\346\225\260", nullptr));
        label_89->setText(QApplication::translate("frmConfig", "\346\237\234\345\217\267\357\274\232", nullptr));
        comboBox_5->setItemText(0, QApplication::translate("frmConfig", "All", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("frmConfig", "BBMS", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("frmConfig", "RBMS01", nullptr));
        comboBox_5->setItemText(3, QApplication::translate("frmConfig", "RBMS02", nullptr));
        comboBox_5->setItemText(4, QApplication::translate("frmConfig", "RBMS03", nullptr));
        comboBox_5->setItemText(5, QApplication::translate("frmConfig", "RBMS04", nullptr));
        comboBox_5->setItemText(6, QApplication::translate("frmConfig", "RBMS05", nullptr));
        comboBox_5->setItemText(7, QApplication::translate("frmConfig", "RBMS06", nullptr));
        comboBox_5->setItemText(8, QApplication::translate("frmConfig", "RBMS07", nullptr));
        comboBox_5->setItemText(9, QApplication::translate("frmConfig", "RBMS08", nullptr));
        comboBox_5->setItemText(10, QApplication::translate("frmConfig", "RBMS09", nullptr));
        comboBox_5->setItemText(11, QApplication::translate("frmConfig", "RBMS10", nullptr));

        btnReaddata->setText(QApplication::translate("frmConfig", "\350\257\273\345\217\226", nullptr));
        btnWritedata->setText(QApplication::translate("frmConfig", "\345\206\231\345\205\245", nullptr));
        btnOutputdata->setText(QApplication::translate("frmConfig", "\345\257\274\345\207\272", nullptr));
        groupBox_2->setTitle(QApplication::translate("frmConfig", "\347\211\210\346\234\254\344\277\241\346\201\257", nullptr));
        label_6->setText(QApplication::translate("frmConfig", "  \344\272\247\345\223\201\345\236\213\345\217\267\357\274\232", nullptr));
        label_7->setText(QApplication::translate("frmConfig", "\347\241\254\344\273\266\345\272\217\345\210\227\345\217\267\357\274\232", nullptr));
        label_9->setText(QApplication::translate("frmConfig", "\347\241\254\344\273\266\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        label_10->setText(QApplication::translate("frmConfig", "Boot\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        label_11->setText(QApplication::translate("frmConfig", "      \347\212\266\346\200\201\357\274\232", nullptr));
        label_13->setText(QApplication::translate("frmConfig", "\345\233\272\344\273\266\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        label_12->setText(QApplication::translate("frmConfig", "\350\275\257\344\273\266\347\211\210\346\234\254\345\217\267\357\274\232", nullptr));
        groupBox->setTitle(QApplication::translate("frmConfig", "\350\275\257\344\273\266\346\233\264\346\226\260", nullptr));
        label_2->setText(QApplication::translate("frmConfig", "\351\200\211\346\213\251\351\225\234\345\203\217\357\274\232", nullptr));
        btnchooseFile->setText(QApplication::translate("frmConfig", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_5->setText(QApplication::translate("frmConfig", "\345\215\207\347\272\247\350\277\233\345\272\246\357\274\232", nullptr));
        btnstartUpdate->setText(QApplication::translate("frmConfig", "\345\274\200\345\247\213\345\215\207\347\272\247", nullptr));
        label->setText(QApplication::translate("frmConfig", "\345\215\207\347\272\247\345\257\271\350\261\241\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("frmConfig", "#1", nullptr));
        comboBox->setItemText(1, QApplication::translate("frmConfig", "#2", nullptr));
        comboBox->setItemText(2, QApplication::translate("frmConfig", "#3", nullptr));

#ifndef QT_NO_ACCESSIBILITY
        ConfigDebugInterface->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_savepath->setText(QApplication::translate("frmConfig", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        pushButton_savepath->setText(QApplication::translate("frmConfig", "\346\265\217\350\247\210", nullptr));
        label_filename->setText(QApplication::translate("frmConfig", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_sampletime->setText(QApplication::translate("frmConfig", "\346\227\266\351\227\264\351\227\264\351\232\224\357\274\232", nullptr));
        label_sampletime_ms->setText(QApplication::translate("frmConfig", "ms", nullptr));
        label_rbmsnum->setText(QApplication::translate("frmConfig", "RBMS\346\225\260\351\207\217\357\274\232", nullptr));
        label_pbmunum->setText(QApplication::translate("frmConfig", "PBMU\346\225\260\351\207\217\357\274\232", nullptr));
        label_pbmutempnum->setText(QApplication::translate("frmConfig", "PBMU\346\270\251\345\272\246\351\200\232\351\201\223\346\225\260\351\207\217\357\274\232", nullptr));
        label_pbmucellnum->setText(QApplication::translate("frmConfig", "PBMU\347\224\265\350\212\257\351\200\232\351\201\223\346\225\260\351\207\217\357\274\232", nullptr));
        label_devicetype->setText(QApplication::translate("frmConfig", "\350\256\276\345\244\207\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox_devicetype->setItemText(0, QApplication::translate("frmConfig", "can_xxx", nullptr));
        comboBox_devicetype->setItemText(1, QApplication::translate("frmConfig", "can_xxxx", nullptr));

        label_comindex->setText(QApplication::translate("frmConfig", "\347\264\242\345\274\225\345\217\267\357\274\232", nullptr));
        comboBox_comindex->setItemText(0, QApplication::translate("frmConfig", "1", nullptr));
        comboBox_comindex->setItemText(1, QApplication::translate("frmConfig", "2", nullptr));
        comboBox_comindex->setItemText(2, QApplication::translate("frmConfig", "3", nullptr));
        comboBox_comindex->setItemText(3, QApplication::translate("frmConfig", "4", nullptr));

        label_numbcan->setText(QApplication::translate("frmConfig", "\351\200\232\351\201\223\345\217\267\357\274\232", nullptr));
        comboBox_numbtongdao->setItemText(0, QApplication::translate("frmConfig", "1", nullptr));
        comboBox_numbtongdao->setItemText(1, QApplication::translate("frmConfig", "2", nullptr));
        comboBox_numbtongdao->setItemText(2, QApplication::translate("frmConfig", "3", nullptr));

        label_baud->setText(QApplication::translate("frmConfig", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_baud->setItemText(0, QApplication::translate("frmConfig", "500k", nullptr));

        label_mesformat->setText(QApplication::translate("frmConfig", "\345\270\247\346\240\274\345\274\217\357\274\232", nullptr));
        label_mestype->setText(QApplication::translate("frmConfig", "\345\270\247\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox_mestype->setItemText(0, QApplication::translate("frmConfig", "Standard", nullptr));
        comboBox_mestype->setItemText(1, QApplication::translate("frmConfig", "Extended", nullptr));

        btnsave->setText(QApplication::translate("frmConfig", "\344\277\235\345\255\230", nullptr));
        btncancel->setText(QApplication::translate("frmConfig", "\345\217\226\346\266\210", nullptr));
        label_datasave->setText(QApplication::translate("frmConfig", " \346\225\260\346\215\256\345\255\230\345\202\250 ", nullptr));
        label_bbmssetting->setText(QApplication::translate("frmConfig", " BBMS\350\256\276\347\275\256 ", nullptr));
        label_canfdsetting->setText(QApplication::translate("frmConfig", " CANFD\351\200\232\350\256\257\350\256\276\347\275\256 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmConfig: public Ui_frmConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCONFIG_H
