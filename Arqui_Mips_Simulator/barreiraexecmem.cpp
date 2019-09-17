#include "barreiraexecmem.h"

int BarreiraExecMem::getPcInstrucaoAtual() const
{
    return pcInstrucaoAtual;
}

void BarreiraExecMem::setPcInstrucaoAtual(int value)
{
    pcInstrucaoAtual = value;
}

int BarreiraExecMem::getResult() const
{
    return result;
}

void BarreiraExecMem::setResult(int value)
{
    result = value;
}

bool BarreiraExecMem::getZero() const
{
    return zero;
}

void BarreiraExecMem::setZero(bool value)
{
    zero = value;
}

bool BarreiraExecMem::getW_B() const
{
    return W_B;
}

void BarreiraExecMem::setW_B(bool value)
{
    W_B = value;
}

int BarreiraExecMem::getEndW_B() const
{
    return endW_B;
}

void BarreiraExecMem::setEndW_B(int value)
{
    endW_B = value;
}

void BarreiraExecMem::trigger()
{
    mem->Executar(endW_B,result,W_B);
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
