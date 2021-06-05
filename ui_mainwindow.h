/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QLabel *picturelabel;
    QTableWidget *tiptable;
    QLabel *statuslabel1;
    QLabel *statuslabel2;
    QLabel *statuslabel3;
    QPushButton *speechbtn;
    QTextEdit *Input_textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *daylabel1;
    QLabel *daylabel2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *playerlabel2;
    QLabel *playerlabel1;
    QLCDNumber *lcdNumber;
    QLabel *TimeLabel;
    QTextEdit *Output_textEdit;
    QLabel *endTitleLabel;
    QLabel *endTextLabel;
    QToolButton *exitToolButton;
    QToolButton *restartToolButton;
    QPushButton *hideButton;
    QPushButton *showButton;
    QLabel *tableLabel;
    QLabel *speechLabel;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 780);
        MainWindow->setMinimumSize(QSize(1200, 780));
        MainWindow->setMaximumSize(QSize(1200, 780));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/titleicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        picturelabel = new QLabel(centralWidget);
        picturelabel->setObjectName(QStringLiteral("picturelabel"));
        picturelabel->setGeometry(QRect(460, 140, 271, 381));
        tiptable = new QTableWidget(centralWidget);
        tiptable->setObjectName(QStringLiteral("tiptable"));
        tiptable->setGeometry(QRect(850, 10, 341, 421));
        tiptable->setStyleSheet(QStringLiteral(""));
        statuslabel1 = new QLabel(centralWidget);
        statuslabel1->setObjectName(QStringLiteral("statuslabel1"));
        statuslabel1->setGeometry(QRect(20, 20, 121, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(20);
        statuslabel1->setFont(font);
        statuslabel1->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        statuslabel2 = new QLabel(centralWidget);
        statuslabel2->setObjectName(QStringLiteral("statuslabel2"));
        statuslabel2->setGeometry(QRect(150, 40, 151, 31));
        statuslabel2->setFont(font);
        statuslabel2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        statuslabel3 = new QLabel(centralWidget);
        statuslabel3->setObjectName(QStringLiteral("statuslabel3"));
        statuslabel3->setGeometry(QRect(450, 30, 291, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(22);
        statuslabel3->setFont(font1);
        statuslabel3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        speechbtn = new QPushButton(centralWidget);
        speechbtn->setObjectName(QStringLiteral("speechbtn"));
        speechbtn->setGeometry(QRect(770, 680, 75, 23));
        Input_textEdit = new QTextEdit(centralWidget);
        Input_textEdit->setObjectName(QStringLiteral("Input_textEdit"));
        Input_textEdit->setGeometry(QRect(430, 580, 331, 121));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(18);
        Input_textEdit->setFont(font2);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 106, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        daylabel1 = new QLabel(layoutWidget);
        daylabel1->setObjectName(QStringLiteral("daylabel1"));
        daylabel1->setFont(font);
        daylabel1->setStyleSheet(QStringLiteral("color: rgb(0, 255, 255);"));

        horizontalLayout->addWidget(daylabel1);

        daylabel2 = new QLabel(layoutWidget);
        daylabel2->setObjectName(QStringLiteral("daylabel2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Palatino Linotype"));
        font3.setPointSize(20);
        daylabel2->setFont(font3);
        daylabel2->setStyleSheet(QStringLiteral("color: rgb(0, 255, 255);"));

        horizontalLayout->addWidget(daylabel2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(530, 80, 124, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        playerlabel2 = new QLabel(layoutWidget1);
        playerlabel2->setObjectName(QStringLiteral("playerlabel2"));
        QFont font4;
        font4.setFamily(QStringLiteral("Lato"));
        font4.setPointSize(20);
        playerlabel2->setFont(font4);
        playerlabel2->setStyleSheet(QStringLiteral("color: rgb(0, 255, 127);"));

        horizontalLayout_2->addWidget(playerlabel2);

        playerlabel1 = new QLabel(layoutWidget1);
        playerlabel1->setObjectName(QStringLiteral("playerlabel1"));
        playerlabel1->setFont(font);
        playerlabel1->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        horizontalLayout_2->addWidget(playerlabel1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(700, 550, 61, 23));
        TimeLabel = new QLabel(centralWidget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setGeometry(QRect(590, 550, 101, 21));
        TimeLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"color:rgb(255, 255, 127)"));
        Output_textEdit = new QTextEdit(centralWidget);
        Output_textEdit->setObjectName(QStringLiteral("Output_textEdit"));
        Output_textEdit->setGeometry(QRect(30, 230, 231, 291));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(14);
        Output_textEdit->setFont(font5);
        Output_textEdit->setStyleSheet(QLatin1String("color: rgb(85, 255, 127);\n"
"background-color: rgba(255, 132, 139, 0);"));
        Output_textEdit->setReadOnly(true);
        endTitleLabel = new QLabel(centralWidget);
        endTitleLabel->setObjectName(QStringLiteral("endTitleLabel"));
        endTitleLabel->setGeometry(QRect(450, 50, 261, 121));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(48);
        font6.setBold(false);
        font6.setWeight(50);
        endTitleLabel->setFont(font6);
        endTitleLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        endTextLabel = new QLabel(centralWidget);
        endTextLabel->setObjectName(QStringLiteral("endTextLabel"));
        endTextLabel->setGeometry(QRect(430, 240, 311, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(36);
        endTextLabel->setFont(font7);
        endTextLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        exitToolButton = new QToolButton(centralWidget);
        exitToolButton->setObjectName(QStringLiteral("exitToolButton"));
        exitToolButton->setGeometry(QRect(640, 450, 201, 61));
        exitToolButton->setStyleSheet(QStringLiteral("border-image: url(:/image/exitbutton.png);"));
        restartToolButton = new QToolButton(centralWidget);
        restartToolButton->setObjectName(QStringLiteral("restartToolButton"));
        restartToolButton->setGeometry(QRect(320, 450, 201, 61));
        restartToolButton->setStyleSheet(QStringLiteral("border-image: url(:/image/restartbutton.png);"));
        hideButton = new QPushButton(centralWidget);
        hideButton->setObjectName(QStringLiteral("hideButton"));
        hideButton->setGeometry(QRect(1070, 440, 111, 41));
        QFont font8;
        font8.setFamily(QStringLiteral("04b_21"));
        font8.setPointSize(12);
        hideButton->setFont(font8);
        showButton = new QPushButton(centralWidget);
        showButton->setObjectName(QStringLiteral("showButton"));
        showButton->setGeometry(QRect(1070, 440, 111, 41));
        showButton->setFont(font8);
        tableLabel = new QLabel(centralWidget);
        tableLabel->setObjectName(QStringLiteral("tableLabel"));
        tableLabel->setGeometry(QRect(900, 430, 171, 51));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font9.setPointSize(24);
        tableLabel->setFont(font9);
        tableLabel->setStyleSheet(QStringLiteral("color: rgb(0, 170, 255);"));
        speechLabel = new QLabel(centralWidget);
        speechLabel->setObjectName(QStringLiteral("speechLabel"));
        speechLabel->setGeometry(QRect(30, 190, 151, 41));
        speechLabel->setFont(font9);
        speechLabel->setStyleSheet(QStringLiteral("color: rgb(255, 170, 127);"));
        MainWindow->setCentralWidget(centralWidget);
        picturelabel->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        tiptable->raise();
        statuslabel1->raise();
        statuslabel2->raise();
        statuslabel3->raise();
        speechbtn->raise();
        Input_textEdit->raise();
        lcdNumber->raise();
        TimeLabel->raise();
        Output_textEdit->raise();
        endTitleLabel->raise();
        endTextLabel->raise();
        exitToolButton->raise();
        restartToolButton->raise();
        hideButton->raise();
        showButton->raise();
        tableLabel->raise();
        speechLabel->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\272\242\351\273\221\345\244\234\346\263\225\345\256\230", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        picturelabel->setText(QString());
        statuslabel1->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\230\266\346\256\265\357\274\232", Q_NULLPTR));
        statuslabel2->setText(QApplication::translate("MainWindow", "\347\231\275\345\244\251", Q_NULLPTR));
        statuslabel3->setText(QApplication::translate("MainWindow", "\346\235\221\351\225\277\351\200\211\344\270\276\345\217\221\350\250\200\351\230\266\346\256\265", Q_NULLPTR));
        speechbtn->setText(QApplication::translate("MainWindow", "\345\217\221\350\250\200", Q_NULLPTR));
        daylabel1->setText(QApplication::translate("MainWindow", "\345\244\251\346\225\260\357\274\232", Q_NULLPTR));
        daylabel2->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        playerlabel2->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        playerlabel1->setText(QApplication::translate("MainWindow", "\345\217\267\347\216\251\345\256\266", Q_NULLPTR));
        TimeLabel->setText(QApplication::translate("MainWindow", "\345\233\236\345\220\210\345\211\251\344\275\231\346\227\266\351\227\264", Q_NULLPTR));
        endTitleLabel->setText(QApplication::translate("MainWindow", "\346\270\270\346\210\217\347\273\223\346\235\237", Q_NULLPTR));
        endTextLabel->setText(QString());
        exitToolButton->setText(QString());
        restartToolButton->setText(QString());
        hideButton->setText(QApplication::translate("MainWindow", "\351\232\220\350\227\217", Q_NULLPTR));
        showButton->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272", Q_NULLPTR));
        tableLabel->setText(QApplication::translate("MainWindow", "\347\216\251\345\256\266\344\277\241\346\201\257\350\241\250", Q_NULLPTR));
        speechLabel->setText(QApplication::translate("MainWindow", "\345\217\221\350\250\200\345\206\205\345\256\271", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
