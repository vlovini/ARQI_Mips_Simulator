#ifndef PREDICAOTABELA_H
#define PREDICAOTABELA_H
#include "mecanismopredicao.h"
#include <QList>
class PredicaoTabela : public MecanismoPredicao
{
private:
    int ultimoBeq;
    QList<bool> tabela;
public:
    PredicaoTabela(BarreiraBuscaDecodifica *barreiraBD,BarreiraDecoExec *barreiraDE, BarreiraExecMem *barreiraEM, int *pc, Estatisticas *e);
    void Predicao();
    void Conferencia();
};

#endif // PREDICAOTABELA_H
