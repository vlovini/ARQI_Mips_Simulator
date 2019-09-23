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

int Instrucao::getPcNaCriacao() const
{
    return pcNaCriacao;
}

void Instrucao::setPcNaCriacao(int value)
{
    pcNaCriacao = value;
}

int Instrucao::getOperadorX() const
{
    return OperadorX;
}

void Instrucao::setOperadorX(int value)
{
    OperadorX = value;
}

int Instrucao::getOperadorY() const
{
    return OperadorY;
}

void Instrucao::setOperadorY(int value)
{
    OperadorY = value;
}

int Instrucao::getOperadorZ() const
{
    return OperadorZ;
}

void Instrucao::setOperadorZ(int value)
{
    OperadorZ = value;
}

int Instrucao::getResultado() const
{
    return resultado;
}

void Instrucao::setResultado(int value)
{
    resultado = value;
}



bool Instrucao::getValida() const
{
    return valida;
}

void Instrucao::setValida(bool value)
{
    valida = value;
}

bool Instrucao::getW_B() const
{
    return W_B;
}

void Instrucao::setW_B(bool value)
{
    W_B = value;
}

int Instrucao::getEndW_B() const
{
    return endW_B;
}

void Instrucao::setEndW_B(int value)
{
    endW_B = value;
}

bool Instrucao::getFeito() const
{
    return feito;
}

void Instrucao::setFeito(bool value)
{
    feito = value;
}

Instrucao::Instrucao()
{
    operacao = "";
    op1 = "0";
    op2 = "0";
    op3 = "0";
    OperadorX =0;
    OperadorY =0;
    OperadorZ =0;
    valida = true;
    W_B = false;
    endW_B = 0;
    resultado =0;
}

Instrucao::Instrucao(int pcNaCriacao, QString inst)
{
    this->setPcNaCriacao(pcNaCriacao);
    inst.replace('(',' ');
    inst.replace(')',' ');
    QList<QString> lista = inst.split(' ');
    op1="";
    op2="";
    op3="";
    valida = true;
    feito = false;
    W_B = false;
    endW_B = 0;
    resultado =0;
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
