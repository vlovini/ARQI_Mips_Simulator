#ifndef INSTRUCAO_H
#define INSTRUCAO_H
#include <QString>
#include <instrucao.h>

class Instrucao
{
private:
    int pcNaCriacao;
    QString operacao;
    QString op1;
    QString op2;
    QString op3;
    int OperadorX;
    int OperadorY;
    int OperadorZ;
    int resultado;
    bool valida;
    bool W_B;
    int endW_B;
    bool feito;

public:
    Instrucao();
    Instrucao(int, QString);
    QString getOperacao() const;
    QString getOp1() const;
    QString getOp2() const;
    QString getOp3() const;
    int getPcNaCriacao() const;
    void setPcNaCriacao(int value);
    int getOperadorX() const;
    void setOperadorX(int value);
    int getOperadorY() const;
    void setOperadorY(int value);
    int getOperadorZ() const;
    void setOperadorZ(int value);
    void setOperacao(const QString &value);
    int getResultado() const;
    void setResultado(int value);
    bool getValida() const;
    void setValida(bool value);
    bool getW_B() const;
    void setW_B(bool value);
    int getEndW_B() const;
    void setEndW_B(int value);
    bool getFeito() const;
    void setFeito(bool value);
};

#endif // INSTRUCAO_H
