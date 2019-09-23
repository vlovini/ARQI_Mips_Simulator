#include "estatisticas.h"

int Estatisticas::getInstrucoesValidas() const
{
    return instrucoesValidas;
}

int Estatisticas::getCiclos() const
{
    return ciclos;
}

int Estatisticas::getDesvios() const
{
    return desvios;
}

int Estatisticas::getInstrucoesInvalidas() const
{
    return instrucoesInvalidas;
}

Estatisticas::Estatisticas()
{
    instrucoesInvalidas = 0;
    instrucoesValidas = 0;
    desvios = 0;
    ciclos = 0;

}

void Estatisticas::NovaInstrucao(Instrucao inst)
{
    if(inst.getOperacao()!="xxx")
    {
        if(inst.getValida())
        {
            instrucoesValidas++;
        }else
        {
            instrucoesInvalidas++;
        }
    }
}

void Estatisticas::CicloConcluido()
{
    ciclos++;
}

void Estatisticas::DesvioTomado()
{
    desvios++;
}
