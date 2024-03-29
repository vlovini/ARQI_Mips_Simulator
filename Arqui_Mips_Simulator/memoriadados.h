#ifndef MEMORIADADOS_H
#define MEMORIADADOS_H
#include "barreiramemwb.h"
#include <QList>
#include <instrucao.h>
class MemoriaDados
{
private:
    QList<int> memoria;
    BarreiraMemWB *barreiraOut;
public:
    MemoriaDados();
    MemoriaDados(BarreiraMemWB *br);
    void Executar(Instrucao inst);
    QList<int> getMemoria() const;
};

#endif // MEMORIADADOS_H
