#ifndef BARREIRAMEMWB_H
#define BARREIRAMEMWB_H
#include "instrucao.h"
#include "estatisticas.h"
class BarreiraMemWB
{
private:

    Instrucao inst;
    Estatisticas *esta;
public:
    BarreiraMemWB();
    BarreiraMemWB(Estatisticas *e);
    void Trigger();
    Instrucao getInst() const;
    void setInst(const Instrucao &value);
};

#endif // BARREIRAMEMWB_H
