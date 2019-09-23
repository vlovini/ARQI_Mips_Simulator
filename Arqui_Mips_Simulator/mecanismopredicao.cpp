#include "mecanismopredicao.h"

MecanismoPredicao::MecanismoPredicao(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc, Estatisticas *e )
{
    brBuscaDeco = barreiraBD;
    brDecoExec = barreiraDE;
    brExecMem = barreiraEM;
    pcSistema = pc;
    est = e;
}

