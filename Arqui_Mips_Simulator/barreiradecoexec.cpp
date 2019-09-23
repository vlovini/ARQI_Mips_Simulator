#include "barreiradecoexec.h"

void BarreiraDecoExec::trigger()
{
    exe->Executar(inst);
}

Instrucao BarreiraDecoExec::getInst() const
{
    return inst;
}

void BarreiraDecoExec::setInst(const Instrucao &value)
{
    inst = value;
}

BarreiraDecoExec::BarreiraDecoExec()
{

}

BarreiraDecoExec::BarreiraDecoExec(Execucao *ex)
{
    exe = ex;
}
