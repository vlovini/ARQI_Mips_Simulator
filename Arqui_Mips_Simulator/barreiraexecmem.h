#ifndef BARREIRAEXECMEM_H
#define BARREIRAEXECMEM_H
#include "memoriadados.h"

class BarreiraExecMem
{
private:
    int pcInstrucaoAtual;
    int result;
    bool zero;
    bool W_B;
    int endW_B;
    MemoriaDados *mem;
public:
    BarreiraExecMem();
    BarreiraExecMem(MemoriaDados *m);

    int getPcInstrucaoAtual() const;
    void setPcInstrucaoAtual(int value);
    int getResult() const;
    void setResult(int value);
    bool getZero() const;
    void setZero(bool value);
    bool getW_B() const;
    void setW_B(bool value);
    int getEndW_B() const;
    void setEndW_B(int value);
    void trigger();
};

#endif // BARREIRAEXECMEM_H
