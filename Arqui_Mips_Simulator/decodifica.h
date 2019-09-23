#ifndef DECODIFICA_H
#define DECODIFICA_H
#include "barreiradecoexec.h"
#include <QList>
class Decodifica
{
private:
    QList<int> registradores;
    BarreiraDecoExec *barreiraOut;
    int *pcSistema;
public:
    Decodifica();
    Decodifica(BarreiraDecoExec *br, int *pc);
    void Executar(Instrucao inst);
    QList<int> getRegistradores() const;
    void W_B(Instrucao inst);
};

#endif // DECODIFICA_H
