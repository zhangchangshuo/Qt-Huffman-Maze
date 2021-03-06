#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPen>
#include<QBrush>
#include "paintarea.h"
#include"maze.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_makeButton_clicked();

    void on_findButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_findAcoButton_clicked();

private:
    Ui::Widget *ui;
    PaintArea *paintArea;
};
#endif // WIDGET_H
