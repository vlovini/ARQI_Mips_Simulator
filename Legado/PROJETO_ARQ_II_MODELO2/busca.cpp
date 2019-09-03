#include "busca.h"

int busca::getPC() const
{
    return PC;
}

void busca::setPC(int value)
{
    PC = value;
}

QString busca::getOPCODE() const
{
    return OPCODE;
}

void busca::setOPCODE(const QString &value)
{
    OPCODE = value;
}

QString busca::getOP1() const
{
    return OP1;
}

void busca::setOP1(const QString &value)
{
    OP1 = value;
}

QString busca::getOP2() const
{
    return OP2;
}

void busca::setOP2(const QString &value)
{
    OP2 = value;
}

QString busca::getOP3() const
{
    return OP3;
}

void busca::setOP3(const QString &value)
{
    OP3 = value;
}

bool busca::getValido() const
{
    return valido;
}

void busca::setValido(bool value)
{
    valido = value;
}

bool busca::getWback() const
{
    return wback;
}

void busca::setWback(bool value)
{
    wback = value;
}

bool busca::getJump() const
{
    return jump;
}

void busca::setJump(bool value)
{
    jump = value;
}

unsigned int busca::getV1() const
{
    return v1;
}

void busca::setV1(unsigned int value)
{
    v1 = value;
}

unsigned int busca::getV2() const
{
    return v2;
}

void busca::setV2(unsigned int value)
{
    v2 = value;
}

unsigned int busca::getV3() const
{
    return v3;
}

void busca::setV3(unsigned int value)
{
    v3 = value;
}

bool busca::getFoi_tomado() const
{
    return foi_tomado;
}

void busca::setFoi_tomado(bool value)
{
    foi_tomado = value;
}

busca::busca()
{
    this->setOP1("");
    this->setOP2("");
    this->setOP2("");
    this->setOPCODE("");
    this->setPC(0);
    this->setValido(true);
    this->setWback(false);
    this->setV1(0);
    this->setV2(0);
    this->setV3(0);
    this->setFoi_tomado(false);
}

void busca::zerar(){
    this->setOP1("");
    this->setOP2("");
    this->setOP2("");
    this->setOPCODE("");
    this->setPC(0);
    this->setValido(true);
    this->setWback(false);
    this->setV1(0);
    this->setV2(0);
    this->setV3(0);
    this->setFoi_tomado(false);
}

