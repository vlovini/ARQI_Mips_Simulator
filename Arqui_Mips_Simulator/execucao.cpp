#include "execucao.h"
#include <QString>
Execucao::Execucao()
{

}

Execucao::Execucao(BarreiraExecMem *br, int *pc, Estatisticas *e)
{
    barreiraOut = br;
    pcSistema = pc;
    est = e;
}

void Execucao::Executar(Instrucao ins)
{
    if(ins.getOperacao()=="add"||ins.getOperacao()=="addi"){
        ins.setResultado(ins.getOperadorY()+ins.getOperadorZ());

        ins.setW_B(true);
        ins.setEndW_B(ins.getOperadorX());
    }
    if(ins.getOperacao()=="sub"||ins.getOperacao()=="subi")
    {
        ins.setResultado(ins.getOperadorY()-ins.getOperadorZ());

        ins.setW_B(true);
        ins.setEndW_B(ins.getOperadorX());
    }
    if(ins.getOperacao()=="beq")
    {
        int result;
        if(ins.getOperadorX() == ins.getOperadorY())
        {
            result= ins.getPcNaCriacao()+ins.getOperadorZ()+1;
            if(!ins.getFeito())
            {
                est->DesvioTomado();
                *pcSistema = result;
            }


        }else
        {
            if(ins.getFeito())
            {
                result = ins.getPcNaCriacao()+1;
                *pcSistema = result;
            }
            result = ins.getPcNaCriacao()+1;
            *pcSistema = result;
        }
        ins.setW_B(false);
        ins.setResultado(result);
    }
    barreiraOut->setIns(ins);

}
