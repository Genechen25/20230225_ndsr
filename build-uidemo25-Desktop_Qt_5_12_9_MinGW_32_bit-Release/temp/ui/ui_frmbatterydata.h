/********************************************************************************
** Form generated from reading UI file 'frmbatterydata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMBATTERYDATA_H
#define UI_FRMBATTERYDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmbatterydata
{
public:
    QComboBox *comboBox;
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *frmbatterydata)
    {
        if (frmbatterydata->objectName().isEmpty())
            frmbatterydata->setObjectName(QString::fromUtf8("frmbatterydata"));
        frmbatterydata->resize(800, 600);
        frmbatterydata->setMinimumSize(QSize(800, 600));
        comboBox = new QComboBox(frmbatterydata);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 560, 69, 22));
        tableView = new QTableView(frmbatterydata);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 601, 501));
        widget = new QWidget(frmbatterydata);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(620, 20, 171, 501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout->addWidget(groupBox_2);


        retranslateUi(frmbatterydata);

        QMetaObject::connectSlotsByName(frmbatterydata);
    } // setupUi

    void retranslateUi(QWidget *frmbatterydata)
    {
        frmbatterydata->setWindowTitle(QApplication::translate("frmbatterydata", "Form", nullptr));
        comboBox->setItemText(0, QApplication::translate("frmbatterydata", "SBMU01", nullptr));
        comboBox->setItemText(1, QApplication::translate("frmbatterydata", "SBMU02", nullptr));
        comboBox->setItemText(2, QApplication::translate("frmbatterydata", "SBMU03", nullptr));
        comboBox->setItemText(3, QApplication::translate("frmbatterydata", "SBMU04", nullptr));
        comboBox->setItemText(4, QApplication::translate("frmbatterydata", "SBMU05", nullptr));
        comboBox->setItemText(5, QApplication::translate("frmbatterydata", "SBMU06", nullptr));
        comboBox->setItemText(6, QApplication::translate("frmbatterydata", "SBMU07", nullptr));
        comboBox->setItemText(7, QApplication::translate("frmbatterydata", "SBMU08", nullptr));
        comboBox->setItemText(8, QApplication::translate("frmbatterydata", "SBMU09", nullptr));
        comboBox->setItemText(9, QApplication::translate("frmbatterydata", "SBMU10", nullptr));

        groupBox->setTitle(QApplication::translate("frmbatterydata", "Voltage", nullptr));
        groupBox_2->setTitle(QApplication::translate("frmbatterydata", "Temperature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmbatterydata: public Ui_frmbatterydata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMBATTERYDATA_H
