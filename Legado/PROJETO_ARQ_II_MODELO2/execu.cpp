#include "execu.h"

int execu::getPC() const
{
    return PC;
}

void execu::setPC(int value)
{
    PC = value;
}

QString execu::getOPCODE() const
{
    return OPCODE;
}

void execu::setOPCODE(const QString &value)
{
    OPCODE = value;
}

QString execu::getOP1() const
{
    return OP1;
}

void execu::setOP1(const QString &value)
{
    OP1 = value;
}

QString execu::getOP2() const
{
    return OP2;
}

void execu::setOP2(const QString &value)
{
    OP2 = value;
}

QString execu::getOP3() const
{
    return OP3;
}

void execu::setOP3(const QString &value)
{
    OP3 = value;
}

bool execu::getValido() const
{
    return valido;
}

void execu::setValido(bool value)
{
    valido = value;
}

bool execu::getWback() const
{
    return wback;
}

void execu::setWback(bool value)
{
    wback = value;
}

unsigned int execu::getV1() const
{
    return v1;
}

void execu::setV1(unsigned int value)
{
    v1 = value;
}

unsigned int execu::getV2() const
{
    return v2;
}

void execu::setV2(unsigned int value)
{
    v2 = value;
}

bool execu::getJump() const
{
    return jump;
}

void execu::setJump(bool value)
{
    jump = value;
}

unsigned int execu::getV3() const
{
    return v3;
}

void execu::setV3(unsigned int value)
{
    v3 = value;
}

bool execu::getFoi_tomado() const
{
    return foi_tomado;
}

void execu::setFoi_tomado(bool value)
{
    foi_tomado = value;
}

execu::execu()
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

void execu::zerar(){
    this->setOP1("");
    this->setOP2("");
    this->setOP2("");
    this->setOPCODE("");
    this->setPC(0);
    this->setValido(true);
    this->setWback(false);
    this->setFoi_tomado(false);
}



unsigned int execu::executarOperacao(QString Operation){
    //return 0 >>> erro
    //return 1 >>> soma/sub >>> v1/vx é o resultado
    //return 2 >>> jump >>> v3/vz é o PC para apontar
    //return 3 >>> jump >>> v1/vx é o branch que mantem o PC]
    if(this->getValido()){
    unsigned int vx, vy, vz;
    vx=this->getV1();
    vy=this->getV2();
    vz=this->getV3();
    //cout << "Entrou com valor: " << Operation.toStdString() << endl;

    if(Operation == "dadd"){
        vx = vy + vz;
        this->setV1(vx);
        this->setWback(true);
        return 1;
    }else if(Operation == "daddi"){
        vx = vy + vz;
        this->setV1(vx);
        this->setWback(true);
        return 1;
    }else if(Operation == "dsub"){
        vx = vy - vz;
        this->setV1(vx);
        this->setWback(true);
        return 1;
    }else if(Operation == "dsubi"){
        vx = vy - vz;
        this->setV1(vx);
        this->setWback(true);
        return 1;
    }else if(Operation == "beqz"){
        this->setJump(true);
        this->setWback(false);
        if(vx==0){
            this->setV3(this->getV2());
            return 2;
        }else{
            return 3;
        }
    }else if(Operation == "bnez"){
        this->setJump(true);
        this->setWback(false);
        if(vx!=0){
            this->setV3(this->getV2());
            return 2;
        }else{
            return 3;
        }
    }else if(Operation == "beq"){
        this->setJump(true);
        this->setWback(false);
        if(vx==vy){

            return 2;
        }else{
            //cout << "!!!!!!AQUI V1 COM: " << vx << endl;
            //cout << "!!!!!!AQUI V2 COM: " << vy << endl;
            return 3;
        }
    }else if(Operation == "bne"){
        this->setJump(true);
        this->setWback(false);
        if(vx!=vy){
            return 2;
        }else{
            return 3;
        }
    }else if(Operation == "j"){
        this->setJump(true);
        this->setWback(false);
        this->setV3(this->getV1());
        return 2;
    }
    }
}
