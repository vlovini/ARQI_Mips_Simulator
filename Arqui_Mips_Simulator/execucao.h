#ifndef EXECUCAO_H
#define EXECUCAO_H
#include<QString>
#include "barreiraexecmem.h"
#include "estatisticas.h"
class Execucao
{
private:
    int *pcSistema;
    BarreiraExecMem *barreiraOut;
    Estatisticas *est;
public:
    Execucao();
    Execucao(BarreiraExecMem *br, int *pc, Estatisticas *e);
    void Executar(Instrucao inst);
    
};

#endif // EXECUCAO_H
