#include "mecanismopredicao.h"

MecanismoPredicao::MecanismoPredicao(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc )
{
    brBuscaDeco = barreiraBD;
    brDecoExec = barreiraDE;
    brExecMem = barreiraEM;
    pcSistema = pc;
}

void MecanismoPredicao::Predicao()
{

}

void MecanismoPredicao::Conferencia()
{

}
