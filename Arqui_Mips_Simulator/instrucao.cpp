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
    operacao = "nop";
    op1 = "0";
    op2 = "0";
    op3 = "0";
}

Instrucao::Instrucao(QString inst)
{
    inst.replace('(',' ');
    inst.replace(')',' ');
    QList<QString> lista = inst.split(' ');
    op1="";
    op2="";
    op3="";
    operacao = lista[0];
    if(lista.length()>1)
    {
        op1 = lista[1];
        op1.remove(',');
    }
    if(lista.length()>2)
    {
        op2 = lista[2];
        op2.remove(',');
    }
    if(lista.length()>3)
    {
        op3 = lista[3];
        op3.remove(',');
    }


}
