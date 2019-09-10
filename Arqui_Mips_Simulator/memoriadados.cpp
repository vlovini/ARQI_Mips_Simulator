#include "memoriadados.h"

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

void MemoriaDados::Executar(int end, int dado, bool W_R)
{
    if(W_R){
        memoria[end]=dado;
    }else{
        barreiraOut->setDado(memoria[end]);

    }
}
