#include "predicaofixa.h"

PredicaoFixa::PredicaoFixa(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc, bool tomado, Estatisticas *e):MecanismoPredicao(barreiraBD,barreiraDE,barreiraEM,pc,e)
{
    desvioTomado = tomado;
    ultimoBeq = -1;
}

void PredicaoFixa::Predicao()
{
    Instrucao brBuscaDecoInst = brBuscaDeco->getInst();
    if(brBuscaDecoInst.getOperacao()=="beq")
    {
        ultimoBeq=brBuscaDecoInst.getPcNaCriacao();
        if(desvioTomado)
        {
            *pcSistema = *pcSistema + brBuscaDecoInst.getOp3().toInt();
            est->DesvioTomado();
        }
        brBuscaDecoInst.setFeito(desvioTomado);
        brBuscaDeco->setInst(brBuscaDecoInst);
    }
}

void PredicaoFixa::Conferencia()
{
    Instrucao instBrExecMem = brExecMem->getIns();
    Instrucao brBuscaDecoInst = brBuscaDeco->getInst();
    Instrucao brDecoExecInst = brDecoExec->getInst();
    if(instBrExecMem.getPcNaCriacao()==ultimoBeq)
    {

        if(instBrExecMem.getOperacao()=="beq" && (desvioTomado&&instBrExecMem.getResultado()==instBrExecMem.getPcNaCriacao()+1) || (desvioTomado==false&&instBrExecMem.getResultado() != instBrExecMem.getPcNaCriacao()+1))
        {
            //*pcSistema = instBrExecMem.getResultado();
            brBuscaDecoInst.setValida(false);
            brDecoExecInst.setValida(false);
            brBuscaDeco->setInst(brBuscaDecoInst);
            brDecoExec->setInst(brDecoExecInst);
        }
    }
}
