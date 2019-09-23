#ifndef BARREIRAEXECMEM_H
#define BARREIRAEXECMEM_H
#include "memoriadados.h"

class BarreiraExecMem
{
private:
    Instrucao ins;
    MemoriaDados *mem;


public:
    BarreiraExecMem();
    BarreiraExecMem(MemoriaDados *m);

    void trigger();
    Instrucao getIns() const;
    void setIns(const Instrucao &value);
};

#endif // BARREIRAEXECMEM_H
