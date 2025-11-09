#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWindow();
}

MainWindow::MainWindow(const QString &title, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWindow(title);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWindow(const QString &title)
{
    setWindowTitle(title);
}
