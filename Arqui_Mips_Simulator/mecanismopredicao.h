#ifndef MECANISMOPREDICAO_H
#define MECANISMOPREDICAO_H
#include "barreirabuscadecodifica.h"
#include "barreiradecoexec.h"
#include "barreiraexecmem.h"

class MecanismoPredicao
{
protected:
    int *pcSistema;
    BarreiraBuscaDecodifica *brBuscaDeco;
    BarreiraDecoExec *brDecoExec;
    BarreiraExecMem *brExecMem;

public:
    MecanismoPredicao(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc );
    virtual void Predicao()=0;
    virtual void Conferencia()=0;
};

#endif // MECANISMOPREDICAO_H
