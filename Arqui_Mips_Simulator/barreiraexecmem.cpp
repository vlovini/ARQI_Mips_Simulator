#include "barreiraexecmem.h"


void BarreiraExecMem::trigger()
{
    mem->Executar(ins);
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
}
