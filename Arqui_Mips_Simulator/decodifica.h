#ifndef DECODIFICA_H
#define DECODIFICA_H
#include "instrucao.h"
#include "barreiradecoexec.h"
#include <QList>
class Decodifica
{
private:
    QList<int> registradores;
    BarreiraDecoExec *barreiraOut;
public:
    Decodifica();
    Decodifica(BarreiraDecoExec *br);
    void Executar(Instrucao ins);
};

#endif // DECODIFICA_H
