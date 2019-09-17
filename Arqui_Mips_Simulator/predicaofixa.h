#ifndef PREDICAOFIXA_H
#define PREDICAOFIXA_H
#include "mecanismopredicao.h"

class PredicaoFixa : public MecanismoPredicao
{
private:
    bool desvioTomado;
    int ultimoBeq;
public:
    PredicaoFixa(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc, bool tomado);
    void Predicao();
    void Conferencia();
};

#endif // PREDICAOFIXA_H
