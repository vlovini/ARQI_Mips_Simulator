#ifndef BARREIRAMEMWB_H
#define BARREIRAMEMWB_H
#include "decodifica.h"

class BarreiraMemWB
{
private:
    int endereco;
    int dado;
    Decodifica *deco;
public:
    BarreiraMemWB();
    void setDecodifica(Decodifica *d);

    void Trigger();
    void setDado(int value);
    void setEndereco(int value);
    int getEndereco() const;
    int getDado() const;
};

#endif // BARREIRAMEMWB_H
