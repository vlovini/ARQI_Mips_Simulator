#include "barreiraexecmem.h"


void BarreiraExecMem::trigger()
{
    mem->Executar();
}

Instrucao BarreiraExecMem::getIns() const
{
    return ins;
}

void BarreiraExecMem::setIns(const Instrucao &value)
{
    ins = value;
}

BarreiraExecMem::BarreiraExecMem()
{

}

BarreiraExecMem::BarreiraExecMem(MemoriaDados *m)
{
    mem = m;
    endW_B=0;
    result =0;
    W_B=false;
}
