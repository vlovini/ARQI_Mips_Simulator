#ifndef BARREIRAMEMWB_H
#define BARREIRAMEMWB_H
#include <instrucao.h>

class BarreiraMemWB
{
private:    
    Instrucao ins;
public:
    BarreiraMemWB();

    void Trigger();
    Instrucao getIns() const;
    void setIns(const Instrucao &value);
};

#endif // BARREIRAMEMWB_H
