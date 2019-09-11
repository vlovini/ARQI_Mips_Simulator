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
//    Instrucao minhaIntrucao("lw $t1, base($t2)");
//    QString operacao = minhaIntrucao.getOperacao();
//    operacao = minhaIntrucao.getOp1();
//    operacao = minhaIntrucao.getOp2();
//    operacao = minhaIntrucao.getOp3();
//    QString end = "C:\\TesteMips\\Teste.txt";
//    BarreiraDecoExec *brDE = new BarreiraDecoExec();
//    Decodifica *d = new Decodifica(brDE);
//    BarreiraBuscaDecodifica *brBD = new BarreiraBuscaDecodifica(d);
//    Busca *b = new Busca(end, brBD);
//    for(int pc=0;pc<10;pc++)
//    {
//        brBD->Trigger();
//        b->Executar(pc);

//    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AtualizarTela()
{
    QList<QString> memoriaProg = busca->getMemoriaPrograma();
    ui->txeMemProg->clear();
    foreach (QString atual, memoriaProg) {
        ui->txeMemProg->append(atual);
    }
    ui->lneOp1BuscaDeco->setText(busca_deco->getInst().getOp1());
    ui->lneOp2BuscaDeco->setText(busca_deco->getInst().getOp2());
    ui->lneOp3BuscaDeco->setText(busca_deco->getInst().getOp3());
    ui->lneOperacaoBuscaDeco->setText(busca_deco->getInst().getOperacao());
    QList<int> registradores = decodifica->getRegistradores();
    ui->txeRegistradores->clear();
    foreach (int atual, registradores) {
        ui->txeRegistradores->append(QString::number(atual));
    }
    ui->lneOp1DecoExe->setText(QString::number(deco_exe->getOperadorX()));
    ui->lneOp2DecoExe->setText(QString::number(deco_exe->getOperadorY()));
    ui->lneOp3DecoExe->setText(QString::number(deco_exe->getOperadorZ()));
    ui->lneOperacaoDecoExe->setText(deco_exe->getOperacao());

    ui->lblPC->setText(QString::number(pc));
}

void MainWindow::on_btnCarregar_clicked()
{
    mem_wb = new BarreiraMemWB();
    memDado = new MemoriaDados(mem_wb);
    exe_mem = new BarreiraExecMem();
    execucao = new Execucao();
    deco_exe = new BarreiraDecoExec(execucao);
    decodifica = new Decodifica(deco_exe);
    busca_deco = new BarreiraBuscaDecodifica(decodifica);
    busca = new Busca(ui->lneEnderecoArquivo->text(),busca_deco);
    mem_wb->setDecodifica(decodifica);
    pc=0;
    AtualizarTela();

}

void MainWindow::on_btnClock_clicked()
{
    mem_wb->Trigger();
    //exe_mem-Trigger();
    deco_exe->trigger();
    busca_deco->Trigger();
    busca->Executar(pc);
    pc++;
    AtualizarTela();
}
