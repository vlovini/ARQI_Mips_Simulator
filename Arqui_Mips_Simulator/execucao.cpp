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
    if(op=="add"||op=="addi"){
        int result = y+z;
        barreiraOut->setResult(result);

        if(result == 0)
        {
            barreiraOut->setZero(true);
        }
        barreiraOut->setW_B(true);
        barreiraOut->setEndW_B(x);

    }
    if(op=="sub"||op=="subi")
    {
        int result = y-z;
        barreiraOut->setResult(result);

        if(result == 0)
        {
            barreiraOut->setZero(true);
        }
        barreiraOut->setW_B(true);
        barreiraOut->setEndW_B(x);
    }
    if(op=="beq")
    {
        int result;
        if(x==y)
        {
            result= pc+z;
            *pcSistema = result;
        }else
        {
            result = *pcSistema;
        }
        barreiraOut->setW_B(false);
        barreiraOut->setResult(result);
    }

}
