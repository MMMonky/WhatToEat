#ifndef DISHUI_H
#define DISHUI_H

#include <QWidget>
#include "Dish.h"
namespace Ui {
class DishUI;
}

class DishUI : public QWidget
{
    Q_OBJECT

public:
    explicit DishUI(QWidget *parent = nullptr);
    ~DishUI();
    void update(Dish& d);

signals:
    void dishUIClicked(Dish& d);

private slots:
    void on_pushButton_clicked();

private:
    Ui::DishUI *ui;
    Dish d;
};

#endif // DISHUI_H
