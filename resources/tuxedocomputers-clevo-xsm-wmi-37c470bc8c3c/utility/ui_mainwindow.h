/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buttonApply;
    QPushButton *pushButton;
    QCheckBox *stateCheckBox;
    QGroupBox *group_mode;
    QRadioButton *radio_flash;
    QRadioButton *radio_wave;
    QRadioButton *radio_dance;
    QRadioButton *radio_tempo;
    QRadioButton *radio_cycle;
    QRadioButton *radio_random_color;
    QRadioButton *radio_breathe;
    QRadioButton *radio_custom;
    QGroupBox *group_brightness;
    QSlider *slider_brightness;
    QGroupBox *group_color;
    QLabel *labelExtraColor;
    QLabel *labelRightColor;
    QLabel *labelCenterColor;
    QComboBox *selectRight;
    QComboBox *selectExtra;
    QLabel *labelLeftColor;
    QComboBox *selectCenter;
    QComboBox *selectLeft;
    QTextEdit *notifyFailure;
    QButtonGroup *radioModeGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(609, 286);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonApply = new QPushButton(centralWidget);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        buttonApply->setGeometry(QRect(430, 250, 80, 25));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 250, 80, 25));
        stateCheckBox = new QCheckBox(centralWidget);
        stateCheckBox->setObjectName(QString::fromUtf8("stateCheckBox"));
        stateCheckBox->setGeometry(QRect(10, 250, 95, 25));
        group_mode = new QGroupBox(centralWidget);
        group_mode->setObjectName(QString::fromUtf8("group_mode"));
        group_mode->setGeometry(QRect(10, 10, 591, 51));
        radio_flash = new QRadioButton(group_mode);
        radioModeGroup = new QButtonGroup(MainWindow);
        radioModeGroup->setObjectName(QString::fromUtf8("radioModeGroup"));
        radioModeGroup->addButton(radio_flash);
        radio_flash->setObjectName(QString::fromUtf8("radio_flash"));
        radio_flash->setGeometry(QRect(510, 20, 51, 23));
        radio_wave = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_wave);
        radio_wave->setObjectName(QString::fromUtf8("radio_wave"));
        radio_wave->setGeometry(QRect(320, 20, 51, 23));
        radio_dance = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_dance);
        radio_dance->setObjectName(QString::fromUtf8("radio_dance"));
        radio_dance->setGeometry(QRect(380, 20, 61, 23));
        radio_tempo = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_tempo);
        radio_tempo->setObjectName(QString::fromUtf8("radio_tempo"));
        radio_tempo->setGeometry(QRect(440, 20, 61, 23));
        radio_cycle = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_cycle);
        radio_cycle->setObjectName(QString::fromUtf8("radio_cycle"));
        radio_cycle->setGeometry(QRect(260, 20, 61, 23));
        radio_random_color = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_random_color);
        radio_random_color->setObjectName(QString::fromUtf8("radio_random_color"));
        radio_random_color->setGeometry(QRect(10, 20, 111, 23));
        radio_breathe = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_breathe);
        radio_breathe->setObjectName(QString::fromUtf8("radio_breathe"));
        radio_breathe->setGeometry(QRect(190, 20, 71, 23));
        radio_custom = new QRadioButton(group_mode);
        radioModeGroup->addButton(radio_custom);
        radio_custom->setObjectName(QString::fromUtf8("radio_custom"));
        radio_custom->setGeometry(QRect(120, 20, 71, 23));
        group_brightness = new QGroupBox(centralWidget);
        group_brightness->setObjectName(QString::fromUtf8("group_brightness"));
        group_brightness->setGeometry(QRect(10, 70, 591, 61));
        slider_brightness = new QSlider(group_brightness);
        slider_brightness->setObjectName(QString::fromUtf8("slider_brightness"));
        slider_brightness->setGeometry(QRect(20, 30, 551, 16));
        slider_brightness->setMaximum(10);
        slider_brightness->setPageStep(5);
        slider_brightness->setOrientation(Qt::Horizontal);
        group_color = new QGroupBox(centralWidget);
        group_color->setObjectName(QString::fromUtf8("group_color"));
        group_color->setGeometry(QRect(10, 140, 591, 81));
        labelExtraColor = new QLabel(group_color);
        labelExtraColor->setObjectName(QString::fromUtf8("labelExtraColor"));
        labelExtraColor->setGeometry(QRect(440, 30, 90, 17));
        labelRightColor = new QLabel(group_color);
        labelRightColor->setObjectName(QString::fromUtf8("labelRightColor"));
        labelRightColor->setGeometry(QRect(300, 30, 61, 17));
        labelCenterColor = new QLabel(group_color);
        labelCenterColor->setObjectName(QString::fromUtf8("labelCenterColor"));
        labelCenterColor->setGeometry(QRect(160, 30, 53, 17));
        selectRight = new QComboBox(group_color);
        selectRight->setObjectName(QString::fromUtf8("selectRight"));
        selectRight->setGeometry(QRect(300, 50, 131, 25));
        selectExtra = new QComboBox(group_color);
        selectExtra->setObjectName(QString::fromUtf8("selectExtra"));
        selectExtra->setGeometry(QRect(440, 50, 131, 25));
        labelLeftColor = new QLabel(group_color);
        labelLeftColor->setObjectName(QString::fromUtf8("labelLeftColor"));
        labelLeftColor->setGeometry(QRect(20, 30, 53, 17));
        selectCenter = new QComboBox(group_color);
        selectCenter->setObjectName(QString::fromUtf8("selectCenter"));
        selectCenter->setGeometry(QRect(160, 50, 131, 25));
        selectLeft = new QComboBox(group_color);
        selectLeft->setObjectName(QString::fromUtf8("selectLeft"));
        selectLeft->setGeometry(QRect(20, 50, 131, 25));
        notifyFailure = new QTextEdit(centralWidget);
        notifyFailure->setObjectName(QString::fromUtf8("notifyFailure"));
        notifyFailure->setGeometry(QRect(120, 230, 291, 51));
        notifyFailure->setAcceptDrops(false);
        notifyFailure->setAutoFillBackground(true);
        notifyFailure->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        notifyFailure->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Clevo xSM wmi Utility", 0, QApplication::UnicodeUTF8));
        buttonApply->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        stateCheckBox->setText(QApplication::translate("MainWindow", "Light on", 0, QApplication::UnicodeUTF8));
        group_mode->setTitle(QApplication::translate("MainWindow", "Mode", 0, QApplication::UnicodeUTF8));
        radio_flash->setText(QApplication::translate("MainWindow", "Flash", 0, QApplication::UnicodeUTF8));
        radio_wave->setText(QApplication::translate("MainWindow", "Wave", 0, QApplication::UnicodeUTF8));
        radio_dance->setText(QApplication::translate("MainWindow", "Dance", 0, QApplication::UnicodeUTF8));
        radio_tempo->setText(QApplication::translate("MainWindow", "Tempo", 0, QApplication::UnicodeUTF8));
        radio_cycle->setText(QApplication::translate("MainWindow", "Cycle", 0, QApplication::UnicodeUTF8));
        radio_random_color->setText(QApplication::translate("MainWindow", "Random Color", 0, QApplication::UnicodeUTF8));
        radio_breathe->setText(QApplication::translate("MainWindow", "Breathe", 0, QApplication::UnicodeUTF8));
        radio_custom->setText(QApplication::translate("MainWindow", "Custom", 0, QApplication::UnicodeUTF8));
        group_brightness->setTitle(QApplication::translate("MainWindow", "Brightness", 0, QApplication::UnicodeUTF8));
        group_color->setTitle(QApplication::translate("MainWindow", "Backlight colors (if Custom mode)", 0, QApplication::UnicodeUTF8));
        labelExtraColor->setText(QApplication::translate("MainWindow", "Extra", 0, QApplication::UnicodeUTF8));
        labelRightColor->setText(QApplication::translate("MainWindow", "Right side", 0, QApplication::UnicodeUTF8));
        labelCenterColor->setText(QApplication::translate("MainWindow", "Center", 0, QApplication::UnicodeUTF8));
        labelLeftColor->setText(QApplication::translate("MainWindow", "Left side", 0, QApplication::UnicodeUTF8));
        notifyFailure->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">One or more item was hidden from view.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please read terminal output for more.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
