#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "instrucao.h"
#include "busca.h"
#include "barreirabuscadecodifica.h"
#include "decodifica.h"
#include "barreiradecoexec.h"

#include <QString>

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
    QString end = "C:\\TesteMips\\Teste.txt";
    BarreiraDecoExec *brDE = new BarreiraDecoExec();
    Decodifica *d = new Decodifica(brDE);
    BarreiraBuscaDecodifica *brBD = new BarreiraBuscaDecodifica(d);
    Busca *b = new Busca(end, brBD);
    for(int pc=0;pc<10;pc++)
    {
        brBD->Trigger();
        b->Executar(pc);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
