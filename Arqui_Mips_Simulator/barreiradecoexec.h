#ifndef BARREIRADECOEXEC_H
#define BARREIRADECOEXEC_H
#include <QString>
#include "execucao.h"

class BarreiraDecoExec
{
private:
    QString operacao;
    int operadorX;
    int operadorY;
    int operadorZ;
    Execucao *exe;
    int pcInstrucaoAtual;

public:
    BarreiraDecoExec();
    BarreiraDecoExec(Execucao *ex);
    int getOperadorZ() const;
    void setOperadorZ(int value);
    int getOperadorY() const;
    void setOperadorY(int value);
    int getOperadorX() const;
    void setOperadorX(int value);
    QString getOperacao() const;
    void setOperacao(const QString &value);
    void trigger();
    void setPcInstrucaoAtual(int value);
};

#endif // BARREIRADECOEXEC_H
