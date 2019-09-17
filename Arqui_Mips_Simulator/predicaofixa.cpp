#include "predicaofixa.h"

PredicaoFixa::PredicaoFixa(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc, bool tomado):MecanismoPredicao(barreiraBD,barreiraDE,barreiraEM,pc)
{
    desvioTomado = tomado;
    ultimoBeq = -1;
}

void PredicaoFixa::Predicao()
{
    if(brBuscaDeco->getInst().getOperacao()=="beq")
    {
        ultimoBeq=brBuscaDeco->getPcInstrucaoAtual();
        if(desvioTomado)
        {
            *pcSistema = *pcSistema + brBuscaDeco->getInst().getOp3().toInt();
        }
    }
}

void PredicaoFixa::Conferencia()
{
    if(brExecMem->getPcInstrucaoAtual()==ultimoBeq)
    {
        if(desvioTomado&&brExecMem->getResult()==brExecMem->getPcInstrucaoAtual()+1 || desvioTomado==false&&brExecMem->getResult() != brExecMem->getPcInstrucaoAtual()+1)
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
    }
}
