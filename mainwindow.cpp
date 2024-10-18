#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "filemanager.cpp"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->ModuleList->addItems();
    std::string modules = FileManager::Initialize();
    std::stringstream moduleStrean(modules);
    std::string module;
    while (std::getline(moduleStrean, module, '\n')) {
        if(module != " ")
            ui->ModuleList->addItem(QString::fromStdString(module));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
