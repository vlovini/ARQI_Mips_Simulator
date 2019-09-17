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
    void Executar(Instrucao ins,int pc);
    QList<int> getRegistradores() const;
    void W_B(int end,int dado);
};

#endif // DECODIFICA_H
