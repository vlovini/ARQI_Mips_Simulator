#include "decode.h"

QString decode::getOP3() const
{
    return OP3;
}

void decode::setOP3(const QString &value)
{
    OP3 = value;
}

QString decode::getOP1() const
{
    return OP1;
}

void decode::setOP1(const QString &value)
{
    OP1 = value;
}

QString decode::getOP2() const
{
    return OP2;
}

void decode::setOP2(const QString &value)
{
    OP2 = value;
}


QString decode::getOPCODE() const
{
    return OPCODE;
}

void decode::setOPCODE(const QString &value)
{
    OPCODE = value;
}

int decode::getPC() const
{
    return PC;
}

void decode::setPC(int value)
{
    PC = value;
}

bool decode::getValido() const
{
    return valido;
}

void decode::setValido(bool value)
{
    valido = value;
}

bool decode::getWback() const
{
    return wback;
}

void decode::setWback(bool value)
{
    wback = value;
}

unsigned int decode::getV1() const
{
    return v1;
}

void decode::setV1(unsigned int value)
{
    v1 = value;
}

unsigned int decode::getV2() const
{
    return v2;
}

void decode::setV2(unsigned int value)
{
    v2 = value;
}

bool decode::getJump() const
{
    return jump;
}

void decode::setJump(bool value)
{
    jump = value;
}

unsigned int decode::getV3() const
{
    return v3;
}

void decode::setV3(unsigned int value)
{
    v3 = value;
}

bool decode::getFoi_tomado() const
{
    return foi_tomado;
}

void decode::setFoi_tomado(bool value)
{
    foi_tomado = value;
}

decode::decode()
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

void decode::zerar(){
    this->setOP1("");
    this->setOP2("");
    this->setOP2("");
    this->setOPCODE("");
    this->setPC(0);
    this->setValido(true);
    this->setWback(false);
    this->setFoi_tomado(false);
}

unsigned int decode::decodeValores(unsigned int *registrador, QString value){

    unsigned int aux;

    if(!value.isEmpty()){
        if(value.startsWith('R')){
            aux = (value.section('R',1,1)).toInt();

            //cout << "VALOR PARA DECODE int: " << aux << endl;
            if(aux==0){
                return 0;
            }
            aux = registrador[aux];
        }else if(value.startsWith('#')){
            aux = value.section('#',1,1).toInt();
        }else if(value.startsWith('E')){
            aux = value.section('E',1,1).toInt();
        }
    }
    return aux;

}
