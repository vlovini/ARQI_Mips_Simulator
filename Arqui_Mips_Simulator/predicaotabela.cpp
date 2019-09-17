#include "predicaotabela.h"

PredicaoTabela::PredicaoTabela(BarreiraBuscaDecodifica *barreiraBD, BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc):MecanismoPredicao(barreiraBD,barreiraDE,barreiraEM,pc)
{
    ultimoBeq = -1;
    for(int i=0;i<32;i++)
    {
        tabela.append(false);
    }
}

void PredicaoTabela::Predicao()
{
    if(brBuscaDeco->getInst().getOperacao()=="beq")
    {
        ultimoBeq=brBuscaDeco->getPcInstrucaoAtual();
        int index = brBuscaDeco->getPcInstrucaoAtual() % 32;
        if (tabela[index])
        {
          *pcSistema = *pcSistema + brBuscaDeco->getInst().getOp3().toInt();
        }
    }
}

void PredicaoTabela::Conferencia()
{
    if(brExecMem->getPcInstrucaoAtual()==ultimoBeq)
    {
        int index = brBuscaDeco->getPcInstrucaoAtual() % 32;
        bool desvioTomado = tabela[index];
        if(desvioTomado&&brExecMem->getResult()==brExecMem->getPcInstrucaoAtual()+1||desvioTomado==false&&brExecMem->getResult() != brExecMem->getPcInstrucaoAtual()+1)
        {
            Instrucao instNull("nop");
            *pcSistema = brExecMem->getResult();
            brBuscaDeco->setPcInstrucaoAtual(0);
            brBuscaDeco->setInst(instNull);
            brDecoExec->setOperacao("nop");
            brDecoExec->setOperadorX(0);
            brDecoExec->setOperadorY(0);
            brDecoExec->setOperadorZ(0);
        }
        if(brExecMem->getResult()==brExecMem->getPcInstrucaoAtual()+1)
        {
            tabela[index] = false;
        }else
        {
            tabela[index] = true;
        }
    }
}
