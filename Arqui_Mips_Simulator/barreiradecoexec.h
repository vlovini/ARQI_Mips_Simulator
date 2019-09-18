#ifndef BARREIRADECOEXEC_H
#define BARREIRADECOEXEC_H
#include <QString>
#include "execucao.h"

class BarreiraDecoExec
{
private:
    Instrucao inst;
    Execucao *exe;

public:
    BarreiraDecoExec();
    BarreiraDecoExec(Execucao *ex);
    void trigger();

};

#endif // BARREIRADECOEXEC_H
