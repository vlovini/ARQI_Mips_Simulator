#ifndef DECODE_H
#define DECODE_H
#include <QString>
#include <iostream>

using namespace std;

class decode
{
    int PC;
    QString OPCODE;
    QString OP1, OP2, OP3;
    bool valido;
    bool wback, jump, foi_tomado;
    unsigned int v1,v2, v3;
public:
    decode();
    QString getOP1() const;
    void setOP1(const QString &value);
    QString getOP2() const;
    void setOP2(const QString &value);
    QString getOP3() const;
    void setOP3(const QString &value);
    QString getOPCODE() const;
    void setOPCODE(const QString &value);
    int getPC() const;
    void setPC(int value);
    bool getValido() const;
    void setValido(bool value);
    void zerar();
    bool getWback() const;
    void setWback(bool value);
    unsigned int getV1() const;
    void setV1(unsigned int value);
    unsigned int getV2() const;
    void setV2(unsigned int value);
    bool getJump() const;
    void setJump(bool value);
    unsigned int decodeValores(unsigned int *registrador, QString value);
    unsigned int getV3() const;
    void setV3(unsigned int value);
    bool getFoi_tomado() const;
    void setFoi_tomado(bool value);
};

#endif // DECODE_H
