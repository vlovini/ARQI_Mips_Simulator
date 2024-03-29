#include "barreirabuscadecodifica.h"


BarreiraBuscaDecodifica::BarreiraBuscaDecodifica(Decodifica *d)
{
    deco = d;
}

void BarreiraBuscaDecodifica::setDeco(Decodifica *value)
{
    deco = value;
}

Instrucao BarreiraBuscaDecodifica::getInst()
{
    return inst;
}

void BarreiraBuscaDecodifica::setInst(const Instrucao &value)
{
    inst = value;
}

void BarreiraBuscaDecodifica::Trigger()
{
    deco->Executar(inst);
}


