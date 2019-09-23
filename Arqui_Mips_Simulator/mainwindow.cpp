#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "instrucao.h"
#include "busca.h"
#include "barreirabuscadecodifica.h"
#include "decodifica.h"
#include "barreiradecoexec.h"

#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    ui->lneOp1DecoExe->setText(QString::number(deco_exe->getInst().getOperadorX()));
    ui->lneOp2DecoExe->setText(QString::number(deco_exe->getInst().getOperadorY()));
    ui->lneOp3DecoExe->setText(QString::number(deco_exe->getInst().getOperadorZ()));
    ui->lneOperacaoDecoExe->setText(deco_exe->getInst().getOperacao());

    ui->lneEnderecoExeMem->setText(QString::number(exe_mem->getIns().getEndW_B()));
    ui->lneResult->setText(QString::number(exe_mem->getIns().getResultado()));
    ui->chbW_BExeMem->setChecked(exe_mem->getIns().getW_B());

    ui->lneDadoMemWB->setText(QString::number(mem_wb->getInst().getResultado()));
    ui->lneEnderecoMemWB->setText(QString::number(mem_wb->getInst().getEndW_B()));

    ui->lneCiclos->setText(QString::number(estatis->getCiclos()));
    ui->lneDesvios->setText(QString::number(estatis->getDesvios()));
    ui->lneInstValidas->setText(QString::number(estatis->getInstrucoesValidas()));
    ui->lneInstrInv->setText(QString::number(estatis->getInstrucoesInvalidas()));

    ui->lblPC->setText(QString::number(pc));
}

void MainWindow::on_btnCarregar_clicked()
{
    estatis = new Estatisticas();
    mem_wb = new BarreiraMemWB(estatis);
    memDado = new MemoriaDados(mem_wb);
    exe_mem = new BarreiraExecMem(memDado);
    execucao = new Execucao(exe_mem,&pc,estatis);
    deco_exe = new BarreiraDecoExec(execucao);
    decodifica = new Decodifica(deco_exe,&pc);
    busca_deco = new BarreiraBuscaDecodifica(decodifica);
    busca = new Busca(ui->lneEnderecoArquivo->text(),busca_deco);
    //mem_wb->setDecodifica(decodifica);
    pc=0;
    if(ui->rbPredFixa->isChecked())
    {
        if(ui->chbTomado->isChecked())
        {
            predicao = new PredicaoFixa(busca_deco,deco_exe,exe_mem, &pc, true, estatis);
        }else
        {
            predicao = new PredicaoFixa(busca_deco,deco_exe,exe_mem, &pc, false, estatis);
        }



    }
    if(ui->rbPredicaoTabela->isChecked())
    {
        predicao = new PredicaoTabela(busca_deco,deco_exe,exe_mem, &pc, estatis);
    }
    if(ui->rbSemPred->isChecked())
    {
        predicao = new PredicaoFixa(busca_deco,deco_exe,exe_mem, &pc, false, estatis);
    }
    ui->btnClock->setEnabled(true);
    AtualizarTela();

}

void MainWindow::on_btnClock_clicked()
{
    if(mem_wb->getInst().getOperacao() == "xxx")
    {
        ui->btnClock->setEnabled(false);
        QMessageBox msgBox;
        msgBox.setText("Fim do programa");
        msgBox.exec();
        return;
    }
    mem_wb->Trigger();
    predicao->Conferencia();
    predicao->Predicao();

    if(mem_wb->getInst().getW_B())
    {
        decodifica->W_B(mem_wb->getInst());
    }
    exe_mem->trigger();
    deco_exe->trigger();
    busca_deco->Trigger();
    busca->Executar(pc);
    estatis->CicloConcluido();
    pc++;
    AtualizarTela();

}

void MainWindow::on_radioButton_pressed()
{

}
