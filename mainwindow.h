#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPainter>
#include <QSpinBox>
#include <QDebug>
#include <QPushButton>
#include <QDialog>
#include <QCloseEvent>
#include <cmath>
#include "platform.h"
#include "player.h"
#include "votedialog.h"




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT//QT界面用
public:
    explicit MainWindow(QWidget *parent,int num);
    void paintEvent(QPaintEvent *);//绘图事件，绘制背景图片
    void closeEvent(QCloseEvent *);//关闭窗口事件
    void endGame(int type);//游戏结束函数
    ~MainWindow();
private:
    Ui::MainWindow *ui;//ui指针
    Platform form;//平台实例
    QTimer Timer_Display,Timer_speech;//显示计时器,发言计时器
    QTimer Timer_vote;//投票计时器
    QTimer Timer_night;//夜晚计时器
    int leaderpos =0;//当前村长位置，0为无村长
    int time_left;//剩余时间
    int direction = 0;//0为从村长右边玩家开始发言，1为从村长左边玩家开始发言
    int activeplayer = 1;//当前活跃玩家
    int day =1;//游戏进行天数
    int speech_time = 120 ,vote_time = 30;//发言和投票的限制时间
    float leadvote = 0.5;//村长票数改变量
signals:
    void restart();//返回信号
private slots:
    void Go();//游戏开始运行
    void Speech();//发言阶段
    void Vote();//投票阶段
    void Night();//夜晚阶段
    void Next_left();//向左变换当前玩家
    void Next_right();//向右变换当前玩家

};

#endif // MAINWINDOW_H
