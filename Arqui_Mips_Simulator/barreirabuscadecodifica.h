#ifndef BARREIRABUSCADECODIFICA_H
#define BARREIRABUSCADECODIFICA_H
#include "decodifica.h"
#include "instrucao.h"
class BarreiraBuscaDecodifica
{
private:
    Decodifica* deco;
    Instrucao inst;
public:

    BarreiraBuscaDecodifica(Decodifica *d);
    void setDeco(Decodifica *value);
    Instrucao getInst() const;
    void setInst(const Instrucao &value);
    void Trigger();
    Instrucao getInst();
};

#endif // BARREIRABUSCADECODIFICA_H
