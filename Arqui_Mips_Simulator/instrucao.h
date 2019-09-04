#ifndef INSTRUCAO_H
#define INSTRUCAO_H
#include <QString>

class Instrucao
{
private:
    QString operacao;
    QString op1;
    QString op2;
    QString op3;
public:
    Instrucao(QString inst);
    QString getOperacao() const;
    QString getOp1() const;
    QString getOp2() const;
    QString getOp3() const;
};

#endif // INSTRUCAO_H