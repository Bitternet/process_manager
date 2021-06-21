#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stl = new QStringList();

    timer_session = new QTimer(this);
    timer_session -> setInterval(period);

    timer_progress = new QTimer(this);
    timer_progress -> setInterval(1000);

    connect(ui->pb_add,SIGNAL(clicked()), this, SLOT(click_add()));
    connect(ui->pb_del,SIGNAL(clicked()), this, SLOT(click_del()));
    connect(ui->pb_config,SIGNAL(clicked()), this, SLOT(click_config()));
    connect(ui->pb_change,SIGNAL(clicked()), this, SLOT(click_change()));
    connect(timer_session, &QTimer::timeout,this, &MainWindow::read_dir);
    connect(timer_progress, &QTimer::timeout,this, &MainWindow::timer);

    timer_session -> start();
    timer_progress -> start();

    db.setDatabaseName("zenit");
    db.setUserName("uzorky2_0_00");
    db.setHostName("10.1.57.87");
    db.setPassword("uzorky2_0_00");
    db.setPort(6003);

    if(!db.open())
    {
      //QMessageBox::warning(this,"Ошибка","Не удалось подключиться к базе данных",QMessageBox::Ok);
      ui->lb_statusBD->setText("Нет подключения");
      ui->lb_statusBD->setStyleSheet("background-color: tomato; font: bold; color: white;");
    }
    else
    {
       ui->lb_statusBD->setText("Подключено");
       ui->lb_statusBD->setStyleSheet("background-color: green; font: bold; color: white;");
    }

    ui->spinBox->setValue(period);
    ui->progressBar->setMaximum(period);

    ui->progressBar->setStyleSheet("QProgressBar::horizontal {border: 1px solid lightgrey; border-radius: 3px;} QProgressBar::chunk {"
                                   "background-color: steelblue; width: 20px;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::click_add()
{
    add_list();
}

void MainWindow::click_del()
{
    del_list();
}

void MainWindow::click_change()
{
    change_period();
}

void MainWindow::click_config()
{
    config_list();
}

void MainWindow::timer()
{
    t -= 1000;
   // qDebug()<<t;

    if(t == 0){
    ui->progressBar->setValue(period - t);
    t = period;
    }
    else
    ui->progressBar->setValue(period - t);

}

void MainWindow::add_list()
{
    QString s_edit = ui->lineEdit->text();
    if(s_edit != "")
    stl->append(s_edit);
    listModel = new QStringListModel(ui->listView);
    listModel->setStringList(*stl);
    ui->listView->setModel(listModel);
}

void MainWindow::read_dir()
{
    QStringList ls;
    QDir dir("/proc/");
    dir.setFilter(QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);
    QFileInfoList list = dir.entryInfoList();

    foreach(QFileInfo fs, list)
    {
        QString fnam = fs.fileName();
        QString path = "/proc/" + fnam + "/cmdline";
        QFile file (path);

        if(file.exists() && file.open(QIODevice::ReadOnly))
        {
            QTextStream in_flag(&file);
            in_flag.setCodec("cp1251");

            QString l = in_flag.readAll();

           if(l!="")
           {
               QString path_com = "/proc/" + fnam + "/comm";
               QFile file_com (path_com);

               if(file_com.exists() && file_com.open(QIODevice::ReadOnly))
               {
                   QTextStream in_com(&file_com);
                   in_com.setCodec("cp1251");

                   QString l_com = in_com.readLine();
                   ls.append(l_com);
               }
           }
        }
    }
    QStringList stl_tmp = *stl;

    foreach(QString str, stl_tmp)
    {
        bool flag = false;

        foreach (QString s, ls) {
            if(str == s)
            {
            flag = true;
            break;
            }
        }

        if(flag)
        {
        ui->textBrowser->setTextColor(QColor("black"));
        ui->textBrowser->append("Программа запущена: "+ str);
        }
        else
        {
            if(str == "sql")
            {
            ui->textBrowser->setTextColor(QColor("red"));
            ui->textBrowser->append("Программа не запущена: "+ str + " ||=========|| " + "Программа запускается ...cmd " + str);

            QProcess::startDetached("sudo /home/user/sql/sql");
            }
            else
            {
            ui->textBrowser->setTextColor(QColor("red"));
            ui->textBrowser->append("Программа не запущена: "+ str + " ||=========|| " + "Программа запускается ...cmd " + str);
            }
        }
    }

    statusBD();
}

void MainWindow::statusBD()
{
    if(!db.open())
    {
        //QMessageBox::warning(this,"Ошибка","Не удалось подключиться к базе данных",QMessageBox::Ok);
        ui->lb_statusBD->setText("Нет подключения");
        ui->lb_statusBD->setStyleSheet("background-color: tomato; font: bold; color: white;");
    }
    else
    {
        QStringList stl_tmp_bd = *stl;
        ui->lb_statusBD->setText("Подключено");
        ui->lb_statusBD->setStyleSheet("background-color: green; font: bold; color: white;");

        foreach(QString str_bd, stl_tmp_bd)
        {
        ui->textBrowser->setTextColor(QColor("dimgrey"));
        ui->textBrowser->append("Проверка статуса программы в базе данных: " + str_bd);
        }
        if(stl_tmp_bd.count() > 0)
        ui->textBrowser->append("\n");
    }
}

void MainWindow::del_list()
{
    int currIndex = ui->listView->currentIndex().row();
    listModel->removeRow(currIndex);
    stl->removeAt(currIndex);
}

void MainWindow::config_list()
{
    QFile file_config ("config.ini");

    if(file_config.exists() && file_config.open(QIODevice::ReadOnly))
    {
        QTextStream in_config(&file_config);
        in_config.setCodec("cp1251");
        int i = 0;

        while(!in_config.atEnd())
        {
            QString conf_str = in_config.readLine();

        if(i!=0)
        {
          stl->append(conf_str);
          listModel = new QStringListModel(ui->listView);
          listModel->setStringList(*stl);
          ui->listView->setModel(listModel);
        }
        else
        {
            period = conf_str.toInt();
            ui->spinBox->setValue(period);
            timer_session -> setInterval(period);
            t = period;
            ui->progressBar->setMaximum(period);
        }
        i++;
        }
    }
}

void MainWindow::change_period()
{
    period = ui->spinBox->value();
    timer_session -> setInterval(period);
    t = period;
    ui->progressBar->setMaximum(period);
}

