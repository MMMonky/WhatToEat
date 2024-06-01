#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWidget>
#include "DishDataLoader.h"
#include <QList>
#include  "dishdetailui.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int dishNum = 11;
    DishDataLoader dishDataLoader;
    int Mprice = 100;
    QList<QString> matchLabels = {}, unmatchLabels = {};
    QString keyWord; // 搜索关键字

protected:
    bool eventFilter(QObject *watched, QEvent *event);  //事件过滤器
    void paintEvent(QPaintEvent *); //画背景图
    void paintWidget(QList<Dish> curDishes); //画菜品
    void mousePressEvent(QMouseEvent *e);   //鼠标点击事件
    void updateDishUI(); // 更新DishUI

private slots:
    void on_search_clicked();

    void on_priceSlider_valueChanged(int value);

    void on_matchLabel_changed(QString label);

    //void on_unmatchLabel_changed(QString label);

private:
    Ui::MainWindow *ui;
    dishDetailUI _dishDetailUI;
};
#endif // MAINWINDOW_H
