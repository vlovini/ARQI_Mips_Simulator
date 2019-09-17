#ifndef EXECUCAO_H
#define EXECUCAO_H
#include<QString>
#include "barreiraexecmem.h"
class Execucao
{
private:
    BarreiraExecMem *barreiraOut;
    int *pcSistema;
public:
    Execucao();
    Execucao(BarreiraExecMem *br, int *pc);
    void Executar(int x, int y, int z, QString op, int pc);
};

#endif // EXECUCAO_H
