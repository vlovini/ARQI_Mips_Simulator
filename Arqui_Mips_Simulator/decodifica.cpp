#include "decodifica.h"

QList<int> Decodifica::getRegistradores() const
{
    return registradores;
}

void Decodifica::W_B(int end, int dado)
{
    if(end==0)
        return;
    registradores[end] = dado;
}

Decodifica::Decodifica()
{

}

Decodifica::Decodifica(BarreiraDecoExec *br)
{
    barreiraOut = br;
    for(int i=0;i<31;i++)
    {
        registradores.append(0);
    }
}

void Decodifica::Executar(Instrucao ins)
{
    ins.setOperacao(ins.getOperacao());
    QString op=ins.getOp1();
    if(op.contains('$'))
    {
        op.remove("$");
        ins.setOperadorX(op.toInt());
    }else
    {
        ins.setOperadorX(registradores[op.toInt()]);
    }
    op=ins.getOp2();
    if(op.contains('$'))
    {
        op.remove("$");
        ins.setOperadorY(registradores[op.toInt()]);
    }else
    {
        ins.setOperadorY(registradores[op.toInt()]);

    }
    op=ins.getOp3();
    if(op.contains('$'))
    {
        op.remove("$");
        ins.setOperadorZ(registradores[op.toInt()]);
    }else
    {
        ins.setOperadorZ(op.toInt());
    }
}
