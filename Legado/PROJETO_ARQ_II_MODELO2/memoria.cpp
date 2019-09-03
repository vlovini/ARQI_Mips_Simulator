#include "memoria.h"

int memoria::getPC() const
{
    return PC;
}

void memoria::setPC(int value)
{
    PC = value;
}

QString memoria::getOPCODE() const
{
    return OPCODE;
}

void memoria::setOPCODE(const QString &value)
{
    OPCODE = value;
}

QString memoria::getOP1() const
{
    return OP1;
}

void memoria::setOP1(const QString &value)
{
    OP1 = value;
}

QString memoria::getOP2() const
{
    return OP2;
}

void memoria::setOP2(const QString &value)
{
    OP2 = value;
}

QString memoria::getOP3() const
{
    return OP3;
}

void memoria::setOP3(const QString &value)
{
    OP3 = value;
}

bool memoria::getValido() const
{
    return valido;
}

void memoria::setValido(bool value)
{
    valido = value;
}

bool memoria::getWback() const
{
    return wback;
}

void memoria::setWback(bool value)
{
    wback = value;
}

unsigned int memoria::getV1() const
{
    return v1;
}

void memoria::setV1(unsigned int value)
{
    v1 = value;
}

unsigned int memoria::getV2() const
{
    return v2;
}

void memoria::setV2(unsigned int value)
{
    v2 = value;
}

bool memoria::getJump() const
{
    return jump;
}

void memoria::setJump(bool value)
{
    jump = value;
}

unsigned int memoria::getV3() const
{
    return v3;
}

void memoria::setV3(unsigned int value)
{
    v3 = value;
}

bool memoria::getFoi_tomado() const
{
    return foi_tomado;
}

void memoria::setFoi_tomado(bool value)
{
    foi_tomado = value;
}

memoria::memoria()
{
    this->setOP1("");
    this->setOP2("");
    this->setOP2("");
    this->setOPCODE("");
    this->setPC(0);
    this->setValido(true);
    this->setWback(false);
    this->setFoi_tomado(false);
}

void memoria::zerar()
{
    this->setOP1("");
    this->setOP2("");
    this->setOP2("");
    this->setOPCODE("");
    this->setPC(0);
    this->setValido(true);
    this->setWback(false);
    this->setFoi_tomado(false);
}
