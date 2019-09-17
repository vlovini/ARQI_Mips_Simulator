#include "barreirabuscadecodifica.h"

void BarreiraBuscaDecodifica::setPcInstrucaoAtual(int value)
{
    pcInstrucaoAtual = value;
}

int BarreiraBuscaDecodifica::getPcInstrucaoAtual() const
{
    return pcInstrucaoAtual;
}

BarreiraBuscaDecodifica::BarreiraBuscaDecodifica(Decodifica *d)
{
    deco = d;
    pcInstrucaoAtual=0;
}

void BarreiraBuscaDecodifica::setDeco(Decodifica *value)
{
    deco = value;
}

Instrucao BarreiraBuscaDecodifica::getInst() const
{
    return inst;
}

void BarreiraBuscaDecodifica::setInst(const Instrucao &value)
{
    inst = value;
}

void BarreiraBuscaDecodifica::Trigger()
{
    deco->Executar(inst,pcInstrucaoAtual);
}

Instrucao BarreiraBuscaDecodifica::getInst()
{
    return inst;
}

