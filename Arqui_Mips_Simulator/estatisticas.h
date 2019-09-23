#ifndef ESTATISTICAS_H
#define ESTATISTICAS_H
#include "instrucao.h"

class Estatisticas
{
private:
    int instrucoesValidas;
    int ciclos;
    int desvios;
    int instrucoesInvalidas;
public:
    Estatisticas();
    void NovaInstrucao(Instrucao inst);
    void CicloConcluido();
    void DesvioTomado();

    int getInstrucoesValidas() const;
    int getCiclos() const;
    int getDesvios() const;
    int getInstrucoesInvalidas() const;
};

#endif // ESTATISTICAS_H
