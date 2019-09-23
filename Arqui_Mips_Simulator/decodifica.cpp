#include "decodifica.h"

QList<int> Decodifica::getRegistradores() const
{
    return registradores;
}

void Decodifica::W_B(Instrucao inst)
{

    if(inst.getOperadorX()==0||!inst.getValida())
        return;
    registradores[inst.getOperadorX()] = inst.getResultado();
}

Decodifica::Decodifica()
{

}

Decodifica::Decodifica(BarreiraDecoExec *br, int *pc)
{
    barreiraOut = br;
    pcSistema = pc;
    for(int i=0;i<31;i++)
    {
        registradores.append(0);
    }
}

void Decodifica::Executar(Instrucao ins)
{

    QString op1 = ins.getOp1();
    QString op2 = ins.getOp2();
    QString op3 = ins.getOp3();
    op1.remove('$');
    if(ins.getOperacao()=="beq")
    {
        ins.setOperadorX(registradores[op1.toInt()]);
    }else if(ins.getOperacao()=="b"&&ins.getValida())
    {
        *pcSistema = *pcSistema + op1.toInt();
    }else
    {
        ins.setOperadorX(op1.toInt());
    }


    if(op2.contains('$'))
        {
            op2.remove("$");
            ins.setOperadorY(registradores[op2.toInt()]);
        }else
        {
            ins.setOperadorY(op2.toInt());

        }

    if(op3.contains('$'))
    {
        op3.remove("$");
        ins.setOperadorZ(registradores[op3.toInt()]);
    }else
    {
        ins.setOperadorZ(op3.toInt());
    }
    barreiraOut->setInst(ins);

}
