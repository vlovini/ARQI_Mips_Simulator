#ifndef MEMORIADADOS_H
#define MEMORIADADOS_H
#include "barreiramemwb.h"
#include <QList>
class MemoriaDados
{
private:
    QList<int> memoria;
    BarreiraMemWB *barreiraOut;
public:
    MemoriaDados();
    MemoriaDados(BarreiraMemWB *br);
    void Executar(int end, int dado, bool W_R);
};

#endif // MEMORIADADOS_H
