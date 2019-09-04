#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "instrucao.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Instrucao minhaIntrucao("addi $t1, $t2, 1");
    QString operacao = minhaIntrucao.getOperacao();
    operacao = minhaIntrucao.getOp1();
    operacao = minhaIntrucao.getOp2();
    operacao = minhaIntrucao.getOp3();
}

MainWindow::~MainWindow()
{
    delete ui;
}
