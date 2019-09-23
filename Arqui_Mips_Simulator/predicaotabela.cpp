#include "predicaotabela.h"

PredicaoTabela::PredicaoTabela(BarreiraBuscaDecodifica *barreiraBD, BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc,Estatisticas *e):MecanismoPredicao(barreiraBD,barreiraDE,barreiraEM,pc,e)
{
    ultimoBeq = -1;
    for(int i=0;i<32;i++)
    {
        tabela.append(false);
    }
}

void PredicaoTabela::Predicao()
{
    Instrucao brBuscaDecoInst = brBuscaDeco->getInst();
    if(brBuscaDecoInst.getOperacao()=="beq")
    {
        ultimoBeq = brBuscaDecoInst.getPcNaCriacao();
       int index = brBuscaDecoInst.getPcNaCriacao() % 32;
        if (tabela[index])
        {
          est->DesvioTomado();
          *pcSistema = *pcSistema + brBuscaDecoInst.getOp3().toInt();
        }
        brBuscaDecoInst.setFeito(tabela[index]);
        brBuscaDeco->setInst(brBuscaDecoInst);
    }
}

void PredicaoTabela::Conferencia()
{
    Instrucao instBrExecMem = brExecMem->getIns();
    Instrucao brBuscaDecoInst = brBuscaDeco->getInst();
    Instrucao brDecoExecInst = brDecoExec->getInst();
    if(instBrExecMem.getPcNaCriacao()==ultimoBeq)
    {
        int index = instBrExecMem.getPcNaCriacao() % 32;
        bool desvioTomado = tabela[index];
        if(desvioTomado&&instBrExecMem.getResultado()==instBrExecMem.getPcNaCriacao()+1||desvioTomado==false&&instBrExecMem.getResultado() != instBrExecMem.getPcNaCriacao()+1)
        {
           // *pcSistema = brExecMem->getIns().getResultado();

            brBuscaDecoInst.setValida(false);
            brDecoExecInst.setValida(false);;
        }
        brBuscaDeco->setInst(brBuscaDecoInst);
        brDecoExec->setInst(brDecoExecInst);
        if(instBrExecMem.getResultado()==instBrExecMem.getPcNaCriacao()+1)
        {
            tabela[index] = false;
        }else
        {
            tabela[index] = true;
        }
    }
}
