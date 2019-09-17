#include "memoriadados.h"

QList<int> MemoriaDados::getMemoria() const
{
    return memoria;
}

MemoriaDados::MemoriaDados()
{

}

MemoriaDados::MemoriaDados(BarreiraMemWB *br)
{
    barreiraOut = br;
       for(int i=0;i<100;i++)
        {
            memoria.append(0);
        }
}

void MemoriaDados::Executar(int end, int dado, bool W_B)
{
    barreiraOut->setEndereco(0);
    if(W_B){
        barreiraOut->setEndereco(end);
        barreiraOut->setDado(dado);
    }else{
        barreiraOut->setDado(memoria[end]);

    }
}
