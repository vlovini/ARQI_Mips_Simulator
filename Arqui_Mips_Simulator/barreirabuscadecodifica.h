#ifndef BARREIRABUSCADECODIFICA_H
#define BARREIRABUSCADECODIFICA_H
#include "decodifica.h"
#include "instrucao.h"
class BarreiraBuscaDecodifica
{
private:
    Decodifica* deco;
    Instrucao inst;
    int pcInstrucaoAtual;
public:

    BarreiraBuscaDecodifica(Decodifica *d);
    void setDeco(Decodifica *value);
    Instrucao getInst() const;
    void setInst(const Instrucao &value);
    void Trigger();
    Instrucao getInst();
    void setPcInstrucaoAtual(int value);
    int getPcInstrucaoAtual() const;
};

#endif // BARREIRABUSCADECODIFICA_H
