#include "wback.h"

int wback::getPC() const
{
    return PC;
}

void wback::setPC(int value)
{
    PC = value;
}

QString wback::getOPCODE() const
{
    return OPCODE;
}

void wback::setOPCODE(const QString &value)
{
    OPCODE = value;
}

QString wback::getOP1() const
{
    return OP1;
}

void wback::setOP1(const QString &value)
{
    OP1 = value;
}

QString wback::getOP2() const
{
    return OP2;
}

void wback::setOP2(const QString &value)
{
    OP2 = value;
}

QString wback::getOP3() const
{
    return OP3;
}

void wback::setOP3(const QString &value)
{
    OP3 = value;
}

bool wback::getValido() const
{
    return valido;
}

void wback::setValido(bool value)
{
    valido = value;
}

bool wback::getWback() const
{
    return wback_;
}

void wback::setWback(bool wback)
{
    wback_ = wback;
}

unsigned int wback::getV1() const
{
    return v1;
}

void wback::setV1(unsigned int value)
{
    v1 = value;
}

unsigned int wback::getV2() const
{
    return v2;
}

void wback::setV2(unsigned int value)
{
    v2 = value;
}

bool wback::getJump() const
{
    return jump;
}

void wback::setJump(bool value)
{
    jump = value;
}

unsigned int wback::getV3() const
{
    return v3;
}

void wback::setV3(unsigned int value)
{
    v3 = value;
}

bool wback::getFoi_tomado() const
{
    return foi_tomado;
}

void wback::setFoi_tomado(bool value)
{
    foi_tomado = value;
}

wback::wback()
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

void wback::zerar()
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
