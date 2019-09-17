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

BarreiraExecMem::BarreiraExecMem()
{

}
