#ifndef MECANISMOPREDICAO_H
#define MECANISMOPREDICAO_H
#include "barreirabuscadecodifica.h"
#include "barreiradecoexec.h"
#include "barreiraexecmem.h"
#include "estatisticas.h"

class MecanismoPredicao
{
protected:
    int *pcSistema;
    BarreiraBuscaDecodifica *brBuscaDeco;
    BarreiraDecoExec *brDecoExec;
    BarreiraExecMem *brExecMem;
    Estatisticas *est;

public:
    MecanismoPredicao(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc, Estatisticas *e );
    virtual void Predicao()=0;
    virtual void Conferencia()=0;
};

#endif // MECANISMOPREDICAO_H
