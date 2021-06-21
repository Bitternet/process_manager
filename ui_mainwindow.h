/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *lb_txt_poisk;
    QLineEdit *lineEdit;
    QPushButton *pb_add;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pb_del;
    QPushButton *pb_config;
    QLabel *lb_statusBD;
    QListView *listView;
    QLabel *label_4;
    QSpinBox *spinBox;
    QPushButton *pb_change;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(921, 524);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lb_txt_poisk = new QLabel(centralWidget);
        lb_txt_poisk->setObjectName(QStringLiteral("lb_txt_poisk"));
        lb_txt_poisk->setMinimumSize(QSize(140, 0));
        QFont font;
        font.setPointSize(11);
        lb_txt_poisk->setFont(font);

        gridLayout->addWidget(lb_txt_poisk, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pb_add = new QPushButton(centralWidget);
        pb_add->setObjectName(QStringLiteral("pb_add"));
        pb_add->setStyleSheet(QStringLiteral("background-color: dimgrey; color: white; font: bold;"));

        gridLayout->addWidget(pb_add, 0, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 40));
        label_2->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("background-color: steelblue; color: white; font: bold;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        pb_del = new QPushButton(centralWidget);
        pb_del->setObjectName(QStringLiteral("pb_del"));
        pb_del->setStyleSheet(QStringLiteral("background-color: dimgrey; color: white; font: bold;"));

        gridLayout_3->addWidget(pb_del, 2, 0, 1, 1);

        pb_config = new QPushButton(centralWidget);
        pb_config->setObjectName(QStringLiteral("pb_config"));
        pb_config->setStyleSheet(QStringLiteral("background-color: dimgrey; color: white; font: bold;"));

        gridLayout_3->addWidget(pb_config, 2, 1, 1, 1);

        lb_statusBD = new QLabel(centralWidget);
        lb_statusBD->setObjectName(QStringLiteral("lb_statusBD"));
        lb_statusBD->setMinimumSize(QSize(0, 0));
        lb_statusBD->setMaximumSize(QSize(16777215, 16777215));
        lb_statusBD->setStyleSheet(QStringLiteral("background-color: tomato; font: bold; color: white; "));
        lb_statusBD->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lb_statusBD, 3, 1, 1, 1);

        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setFont(font);
        listView->setResizeMode(QListView::Fixed);

        gridLayout_3->addWidget(listView, 1, 0, 1, 2);


        gridLayout->addLayout(gridLayout_3, 2, 0, 1, 3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setFont(font);
        spinBox->setMinimum(100);
        spinBox->setMaximum(1000000);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        pb_change = new QPushButton(centralWidget);
        pb_change->setObjectName(QStringLiteral("pb_change"));
        pb_change->setStyleSheet(QStringLiteral("background-color: dimgrey; color: white; font: bold;"));

        gridLayout->addWidget(pb_change, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setFont(font);

        gridLayout_4->addWidget(textBrowser, 1, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 40));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("background-color: steelblue; color: white; font: bold;"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setFont(font);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progressBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 921, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\265\321\202\321\207\320\265\321\200 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\320\262", nullptr));
        lb_txt_poisk->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\260:", nullptr));
        pb_add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\262\320\265\321\200\321\217\320\265\320\274\321\213\321\205 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        pb_del->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pb_config->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        lb_statusBD->setText(QApplication::translate("MainWindow", "\320\235\320\265\321\202 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\201\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
        pb_change->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\226\321\203\321\200\320\275\320\260\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
