#ifndef EXECUCAO_H
#define EXECUCAO_H
#include<QString>
#include "barreiraexecmem.h"
#include <instrucao.h>
class Execucao
{
private:
    BarreiraExecMem *barreiraOut;
    int *pcSistema;
public:
    Execucao();
    Execucao(BarreiraExecMem *br, int *pc);
    void Executar(Instrucao ins);
};

#endif // EXECUCAO_H
