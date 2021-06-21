#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QModelIndex>
#include <QListView>
#include <QStringList>
#include <QTimer>
#include <QtSql>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    uint period = 3000;
    uint t = period;

    QStringList *stl;
    QStringListModel *listModel;
    QTimer  *timer_session;
    QTimer  *timer_progress;
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");

    void add_list();
    void read_dir();
    void del_list();
    void config_list();
    void change_period();
    void timer();

    void statusBD();

private slots:
    void click_add();
    void click_del();
    void click_config();
    void click_change();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
