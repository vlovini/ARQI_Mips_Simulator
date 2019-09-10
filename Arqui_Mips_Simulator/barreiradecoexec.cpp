#include "barreiradecoexec.h"

int BarreiraDecoExec::getOperadorZ() const
{
    return operadorZ;
}

void BarreiraDecoExec::setOperadorZ(int value)
{
    operadorZ = value;
}

int BarreiraDecoExec::getOperadorY() const
{
    return operadorY;
}

void BarreiraDecoExec::setOperadorY(int value)
{
    operadorY = value;
}

int BarreiraDecoExec::getOperadorX() const
{
    return operadorX;
}

void BarreiraDecoExec::setOperadorX(int value)
{
    operadorX = value;
}

QString BarreiraDecoExec::getOperacao() const
{
    return operacao;
}

void BarreiraDecoExec::setOperacao(const QString &value)
{
    operacao = value;
}

void BarreiraDecoExec::trigger()
{
    exe->Executar(operadorX,operadorY,operadorZ, operacao);
}

BarreiraDecoExec::BarreiraDecoExec()
{

}

BarreiraDecoExec::BarreiraDecoExec(Execucao *ex)
{
  exe = ex;
}
