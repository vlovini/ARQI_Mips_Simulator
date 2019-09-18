#include "execucao.h"
#include <QString>


Execucao::Execucao()
{

}

Execucao::Execucao(BarreiraExecMem *br, int *pc)
{
    barreiraOut = br;
    pcSistema = pc;
}

void Execucao::Executar(Instrucao ins)
{
    barreiraOut->setZero(false);
    barreiraOut->setW_B(false);
    barreiraOut->setPcInstrucaoAtual(pc);
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
            result= *pcSistema+ins.getOperadorZ();
            *pcSistema = result;
        }else
        {
            result = *pcSistema;
        }
        ins.setW_B(false);
        ins.setResultado(result);
    }

}
