#include "decodifica.h"

Decodifica::Decodifica()
{

}

Decodifica::Decodifica(BarreiraDecoExec *br)
{
    barreiraOut = br;
    for(int i=0;i<30;i++)
    {
        registradores.append(0);
    }
}

void Decodifica::Executar(Instrucao ins)
{
    barreiraOut->setOperacao(ins.getOperacao());
    QString op=ins.getOp1();
    if(op.contains('$'))
    {
        op.remove("$");
        barreiraOut->setOperadorX(registradores[op.toInt()]);
    }else
    {
        barreiraOut->setOperadorX(registradores[op.toInt()]);
    }
    op=ins.getOp2();
    if(op.contains('$'))
    {
        op.remove("$");
        barreiraOut->setOperadorY(registradores[op.toInt()]);
    }else
    {
        barreiraOut->setOperadorY(registradores[op.toInt()]);

    }
    op=ins.getOp3();
    if(op.contains('$'))
    {
        op.remove("$");
        barreiraOut->setOperadorZ(registradores[op.toInt()]);
    }else
    {
        barreiraOut->setOperadorZ(op.toInt());
    }
}
