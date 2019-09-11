#include "barreiramemwb.h"

void BarreiraMemWB::setDado(int value)
{
    dado = value;
}

void BarreiraMemWB::setEndereco(int value)
{
    endereco = value;
}
void BarreiraMemWB::setDecodifica(Decodifica *d)
{
    deco=d;
}

int BarreiraMemWB::getEndereco() const
{
    return endereco;
}

int BarreiraMemWB::getDado() const
{
    return dado;
}

BarreiraMemWB::BarreiraMemWB()
{

}

void BarreiraMemWB::Trigger()
{

}
