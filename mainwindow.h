#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWidget>

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
    int dishNum = 2;

protected:
    bool eventFilter(QObject *watched, QEvent *event);  //事件过滤器
    void paintEvent(QPaintEvent *); //画背景图
    void paintWidget(); //画菜品
    void mousePressEvent(QMouseEvent *e);   //鼠标点击事件

private slots:
    void on_search_clicked();

    void on_priceSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
