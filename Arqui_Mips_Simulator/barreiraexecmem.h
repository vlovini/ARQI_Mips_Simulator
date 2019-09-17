#ifndef BARREIRAEXECMEM_H
#define BARREIRAEXECMEM_H


class BarreiraExecMem
{
private:
    int pcInstrucaoAtual;
    int result;
public:
    BarreiraExecMem();

    int getPcInstrucaoAtual() const;
    void setPcInstrucaoAtual(int value);
    int getResult() const;
    void setResult(int value);
};

#endif // BARREIRAEXECMEM_H
