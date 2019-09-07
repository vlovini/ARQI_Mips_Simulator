#include "instrucao.h"
#include <QList>
QString Instrucao::getOperacao() const
{
    return operacao;
}

QString Instrucao::getOp1() const
{
    return op1;
}

QString Instrucao::getOp2() const
{
    return op2;
}

QString Instrucao::getOp3() const
{
    return op3;
}

Instrucao::Instrucao()
{

}

Instrucao::Instrucao(QString inst)
{
    QList<QString> lista = inst.split(' ');

    operacao = lista[0];
    op1 = lista[1];
    op2 = lista[2];
    op3 = lista[3];
    op1.remove(',');
    op2.remove(',');
    op3.remove(',');
}
