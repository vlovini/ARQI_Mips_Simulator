#include "barreiramemwb.h"

Instrucao BarreiraMemWB::getInst() const
{
    return inst;
}

void BarreiraMemWB::setInst(const Instrucao &value)
{
    inst = value;
}

BarreiraMemWB::BarreiraMemWB()
{

}

BarreiraMemWB::BarreiraMemWB(Estatisticas *e)
{
    esta = e;
}

void BarreiraMemWB::Trigger()
{
    if(inst.getOperacao()!="")
        esta->NovaInstrucao(inst);
}

