#include "processador.h"



int processador::getPC_MASTER() const
{
    return PC_MASTER;
}

void processador::setPC_MASTER(int value)
{
    PC_MASTER = value;
}



unsigned int processador::getR(unsigned int indice) const
{
    if(indice<32)
        return r[indice];
    if(indice>31)
        cout << "Erro no valor" << endl;
}

void processador::setR(unsigned int value, unsigned int indice)
{
    if(indice<32)
        r[indice] = value;
    if(indice>31)
        cout << "Erro no valor" << endl;

}




unsigned int processador::getPredicao() const
{
    return predicao;
}

void processador::setPredicao(unsigned int value)
{
    predicao = value;
}

unsigned int processador::getReturnExec() const
{
    return returnExec;
}

void processador::setReturnExec(unsigned int value)
{
    returnExec = value;
}

unsigned int processador::getReturnExec_ant() const
{
    return returnExec_ant;
}

void processador::setReturnExec_ant(unsigned int value)
{
    returnExec_ant = value;
}


unsigned int processador::getPredicao_T(unsigned int indice) const
{
    if(indice<32)
        cout << "!!!!!!!!!!!!!!!!! predicao_T[" << indice << "] == "<< predicao_T[indice] << endl;
        return predicao_T[indice];
    if(indice>31)
        cout << "Erro no valor" << endl;
}

void processador::setPredicao_T(unsigned int value, unsigned int indice)
{
    char PC_recebido = indice;
    char indiceLaco;

    for (int i = 0; i < 31; i++) {
        indiceLaco=i&PC_recebido;
        if(PC_recebido==indiceLaco)
            break;
    }
    int indiceInt = indiceLaco;

    if(indiceInt<32){

        cout << "Depois do erro entrou aqui" << endl;
        if(value==0){
            cout << "predicao--" <<  endl;
            if(predicao_T[indiceInt]>0)
                predicao_T[indiceInt] = predicao_T[indiceInt] - 1;
        }else if(value==1){
            cout << "predicao++" << endl;
            if(predicao_T[indiceInt]<3)
                predicao_T[indiceInt] = predicao_T[indiceInt] + 1;
        }
        }else if(indiceInt>31){
        cout << "Erro no valor" << endl;
    }

}

unsigned int processador::getQntInvalidas() const
{
    return qntInvalidas;
}

void processador::setQntInvalidas(unsigned int value)
{
    qntInvalidas = value;
}

unsigned int processador::getQntValidas() const
{
    return qntValidas;
}

void processador::setQntValidas(unsigned int value)
{
    qntValidas = value;
}

unsigned int processador::getPulsos() const
{
    return pulsos;
}

void processador::setPulsos(unsigned int value)
{
    pulsos = value;
}

processador::processador()
{
    int i = 0;
    arquivo = new QFile();
    //this->abreArq();
    this->zerar();

}


bool processador::alimenta_inst(){
    cout << "PC tem valor de: "<< this->getPC_MASTER() << endl;
    int quant_inst = listaOperacoes.size();
    if(this->getPC_MASTER() >= quant_inst){
        cout << "Acabou Instrucoes!" << endl;
        mod_busca.zerar();
        mod_busca.setOPCODE("NO INSTRUCTION");
        mod_busca.setValido(false);
        return false;
    }
    QString linha = listaOperacoes.value(this->getPC_MASTER());
    QString operacao;
    int i;

    mod_busca.setPC(this->getPC_MASTER());
    operacao = linha.section(',',0,0).trimmed();
    cout << "Operacao: "<< operacao.toStdString() << endl;
    if(!operacao.isEmpty()){
        mod_busca.setOPCODE(operacao);
    }else{
        cout << "Valor inicial vazio!";
        return false;
    }
    operacao = linha.section(',',1,1).trimmed();
    if(!operacao.isEmpty()){
        mod_busca.setOP1(operacao);
    }else{
        cout << "Valor secundario vazio!";
        return false;
    }

    operacao = linha.section(',',2,2).trimmed();

    if(!operacao.isEmpty()){
        mod_busca.setOP2(operacao);
    }

    operacao = linha.section(',',3,3).trimmed();
    if(!operacao.isEmpty()){
        mod_busca.setOP3(operacao);
    }
    
    return true;
}


bool processador::abreArq(QString Endereco){
    QString linha;
    int i = 0, byte=0;
    cout << "Passou 1" << endl;
    arquivo->setFileName(Endereco);
    cout << "Passou 2" << endl;
    if( !arquivo->exists() ) {// Arquivo não existe
        cout << "Arquivo não Existe."<< endl;
        return false;
    }

    if(arquivo->isOpen()){
        cout << "Arquivo já aberto!";
        return true;
    }else if(!arquivo->open(QIODevice::ReadOnly|QIODevice::Text)){
        cout << "Arquivo não foi aberto!";
        return false;
    }
    cout << "Passou 3" << endl;

    /*if( !arquivo->open(QIODevice::ReadWrite| QIODevice::Text) ){ // Se existir abre
         //ui->textEdit->setText( "Sem permissão para Abrir o arquivo.");
         return false;
    }*/
    cout << "Arquivo Aberto com Sucesso." << endl;


    arquivo->seek(byte);

    while (!arquivo->atEnd()) {
        linha = arquivo->readLine();
        cout << "Os valores adicionados ao QMAP: Index:" << i << " Instc: " << linha.toStdString() << endl;
        listaOperacoes.insert(i,linha);
        byte+=linha.size();
        arquivo->seek(byte);
        i++;
    }
    cout << "Tamanho do QMap: "<< listaOperacoes.size()<< endl;

    return true;
}

/*int processador::returnValor_DECODE(QString value)
{
    unsigned int aux;
    if(value.startsWith('R')){
        aux = value.section('R',1,1).toInt();
        if(aux==0){
            return 0;
        }
        aux = this->getR(aux);
    }else if(value.startsWith('#')){
        aux = value.section('#',1,1).toInt();
    }
    return aux;
}*/

bool processador::proximo(int value)
{
    this->setPulsos((this->getPulsos())+1);
    cout << "PULSOS == "<< this->getPulsos() << endl;
    cout << "VALOR DE INTERESSE R4== " << this->getR(3) << endl;
    //BLOCO DE PASSAGEM
    //BLOCO DE WB

        mod_wback.zerar();
        mod_wback.setPC(mod_mem.getPC());
        mod_wback.setOPCODE(mod_mem.getOPCODE());
        mod_wback.setOP1(mod_mem.getOP1());
        mod_wback.setOP2(mod_mem.getOP2());
        mod_wback.setOP3(mod_mem.getOP3());
        mod_wback.setV1(mod_mem.getV1());
        mod_wback.setV2(mod_mem.getV2());
        mod_wback.setV3(mod_mem.getV3());
        mod_wback.setValido(mod_mem.getValido());
        mod_wback.setWback(mod_mem.getWback());
        mod_wback.setFoi_tomado(mod_mem.getFoi_tomado());

        if((mod_wback.getValido())&&(!mod_wback.getOPCODE().isEmpty())){
            this->setQntValidas((this->getQntValidas())+1);
        }else if (((!mod_wback.getValido())&&(!mod_wback.getOPCODE().isEmpty()))){
            this->setQntInvalidas((this->getQntInvalidas())+1);
        }
        cout << "!!!!!!!!!!!!!!! ATENCAO AQUI !!!!!!!!!!!!!!!!!!!!" << endl;
        cout << mod_wback.getWback() << " == WBACK" << endl;
        cout << mod_wback.getValido() << " == VALIDO" << endl;
        if((mod_wback.getWback())&&(mod_wback.getValido())){
             cout << "ENTROU NA ESCRITA DE VALOR!!!!!!!!!!!!!!" << endl;
             cout << "Valor: " <<mod_wback.getV1() << endl;
             cout << "Endereco: " <<mod_wback.getOP1().section('R',1,1).toInt() << endl;
             cout << "!!!!!!!!!!!!!!" << endl;
             this->setR(mod_wback.getV1(),mod_wback.getOP1().section('R',1,1).toInt());
        }

    //BLOCO DE MEM

        mod_mem.zerar();


        mod_mem.setPC(mod_execu.getPC());
        mod_mem.setOPCODE(mod_execu.getOPCODE());
        mod_mem.setOP1(mod_execu.getOP1());
        mod_mem.setOP2(mod_execu.getOP2());
        mod_mem.setOP3(mod_execu.getOP3());
        mod_mem.setV1(mod_execu.getV1());
        mod_mem.setV2(mod_execu.getV2());
        mod_mem.setV3(mod_execu.getV3());
        mod_mem.setValido(mod_execu.getValido());
        mod_mem.setWback(mod_execu.getWback());
        mod_mem.setFoi_tomado(mod_execu.getFoi_tomado());



    //BLOCO DE EXEC
    /*if(!mod_execu.executarOperacao()){
        cout << "Erro na execução!" << endl;
    }*/
        this->setReturnExec_ant(this->getReturnExec());
        mod_execu.zerar();

        mod_execu.setFoi_tomado(mod_decode.getFoi_tomado());
        mod_execu.setPC(mod_decode.getPC());
        mod_execu.setOPCODE(mod_decode.getOPCODE());
        mod_execu.setOP1(mod_decode.getOP1());
        mod_execu.setOP2(mod_decode.getOP2());
        mod_execu.setOP3(mod_decode.getOP3());
        mod_execu.setV1(mod_decode.getV1());

       // if(mod_mem.getOP1()==mod_decode.getOP2()){
        //   mod_execu.setV2(mod_mem.getV2());
        //}else{
        mod_execu.setV2(mod_decode.getV2());
        //}
        //if(mod_mem.getOP1()==mod_decode.getV3()){
        //   mod_execu.setV3(mod_mem.getV3());
        //}else{
        mod_execu.setV3(mod_decode.getV3());
        //}
        mod_execu.setValido(mod_decode.getValido());
        mod_execu.setWback(mod_decode.getWback());
        this->setReturnExec(mod_execu.executarOperacao(mod_execu.getOPCODE()));



    //BLOCO DE DECODE

        mod_decode.zerar();

        mod_decode.setPC(mod_busca.getPC());
        mod_decode.setOPCODE(mod_busca.getOPCODE());
        mod_decode.setOP1(mod_busca.getOP1());
        mod_decode.setOP2(mod_busca.getOP2());
        mod_decode.setOP3(mod_busca.getOP3());
        if(mod_execu.getValido()||mod_mem.getValido()){
            if((mod_decode.getOPCODE().startsWith('b'))||(mod_decode.getOPCODE().startsWith('j'))){
                cout << "ENTROU NO FORWARDING DO MACACO LOUCO" << endl;
                cout << "OP1 MEM" << mod_mem.getOP1().toStdString() << endl;
                cout << "OP1 EXEC" << mod_execu.getOP1().toStdString() << endl;
                cout << "OP1 DECODE" << mod_decode.getOP1().toStdString() << endl;
                cout << "OP1 BUSCA" << mod_busca.getOP1().toStdString() << endl;
                if(mod_mem.getOP1()==mod_busca.getOP1()){
                   cout << "ENTROU NO FORWARDING DO MACACO LOUCO2" << endl;
                   mod_decode.setV1(mod_mem.getV1());
                }else if(mod_execu.getOP1()==mod_busca.getOP1()){
                   cout << "ENTROU NO FORWARDING DO MACACO LOUCO3" << endl;
                   cout << "V1 EXEC" << mod_execu.getV1() << endl;
                   mod_decode.setV1(mod_execu.getV1());
                }else{
                   cout << "ENTROU NO FORWARDING DO MACACO LOUCO4" << endl;
                   mod_decode.setV1(mod_decode.decodeValores(r,mod_decode.getOP1()));
                }
                if(mod_mem.getOP1()==mod_busca.getOP2()){
                   mod_decode.setV2(mod_mem.getV1());
                }else if(mod_execu.getOP1()==mod_busca.getOP2()){
                   mod_decode.setV2(mod_execu.getV1());
                }else{
                   mod_decode.setV2(mod_decode.decodeValores(r,mod_decode.getOP2()));
                }
                mod_decode.setV3(mod_decode.decodeValores(r,mod_decode.getOP3()));
            }else{
                cout << "ENTROU NO FORWARDING DA GIRAFA PRETA" << endl;
                if(mod_mem.getOP1()==mod_busca.getOP2()){
                   mod_decode.setV2(mod_mem.getV1());
                }else if(mod_execu.getOP1()==mod_busca.getOP2()){
                   mod_decode.setV2(mod_execu.getV1());
                }else{
                   mod_decode.setV2(mod_decode.decodeValores(r,mod_decode.getOP2()));
                }
                if(mod_mem.getOP1()==mod_busca.getOP3()){
                   mod_decode.setV3(mod_mem.getV1());
                }else if(mod_execu.getOP1()==mod_busca.getOP3()){
                   mod_decode.setV3(mod_execu.getV1());
                }else{
                   mod_decode.setV3(mod_decode.decodeValores(r,mod_decode.getOP3()));
                }
            }
        }else{
            mod_decode.setV1(mod_decode.decodeValores(r,mod_decode.getOP1()));
            mod_decode.setV2(mod_decode.decodeValores(r,mod_decode.getOP2()));
            mod_decode.setV3(mod_decode.decodeValores(r,mod_decode.getOP3()));
        }
        mod_decode.setValido(mod_busca.getValido());
        mod_decode.setWback(mod_busca.getWback());
        mod_decode.setFoi_tomado(mod_busca.getFoi_tomado());


    //BLOCO DE BUSCA
    mod_busca.zerar();
    if(this->getReturnExec_ant()==2){
        if(!mod_mem.getFoi_tomado()){
            cout << "Não foi tomado : " << mod_mem.getV3() << endl;
            //this->setPC_MASTER((mod_mem.getV3())-1);
            this->setPC_MASTER((mod_mem.getV3()));
            mod_execu.setValido(false);
            mod_decode.setValido(false);
            this->setPredicao_T(1,mod_mem.getPC());

        }else{
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }


    }else if(this->getReturnExec_ant()==3){
        cout << "!!!!!!!!!!!JUMP DE VALOR ERROU: " << mod_mem.getV3() << endl;
        cout << "!!!!!!!!!!!getFoi_tomado DE VALOR: " << mod_mem.getFoi_tomado() << endl;
        if(mod_mem.getFoi_tomado()){
            this->setPC_MASTER((mod_mem.getPC())+1);
            mod_execu.setValido(false);
            mod_decode.setValido(false);
            this->setPredicao_T(0,mod_mem.getPC());
        }else{
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }
    }else{
        if((mod_decode.getOPCODE())=="beqz"){
                if(value==0){
                    mod_decode.setFoi_tomado(false);
                    this->setPC_MASTER((this->getPC_MASTER())+1);
                }else if(value==1){
                    mod_decode.setFoi_tomado(true);
                    this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
                }else if(value==2){
                    if((this->tabeladePredicao(this->getPC_MASTER()))<2){
                        mod_decode.setFoi_tomado(false);
                        this->setPC_MASTER((this->getPC_MASTER())+1);
                    }else if((this->tabeladePredicao(this->getPC_MASTER()))>1){
                        mod_decode.setFoi_tomado(true);
                        this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
                    }
                }
            }else if((mod_decode.getOPCODE())=="bnez"){
                if(value==0){
                    mod_decode.setFoi_tomado(false);
                    this->setPC_MASTER((this->getPC_MASTER())+1);
                }else if(value==1){
                    mod_decode.setFoi_tomado(true);
                    this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
                }else if(value==2){
                    if((this->tabeladePredicao(this->getPC_MASTER()))<2){
                        mod_decode.setFoi_tomado(false);
                        this->setPC_MASTER((this->getPC_MASTER())+1);
                    }else if((this->tabeladePredicao(this->getPC_MASTER()))>1){
                        mod_decode.setFoi_tomado(true);
                        this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
                    }
                }

            }else if((mod_decode.getOPCODE())=="beq"){
                cout << "PASSOU BEQ value: " << value << endl;
                if(value==0){
                    cout << "PASSOU BEQ value 0" << endl;
                    mod_decode.setFoi_tomado(false);
                    this->setPC_MASTER((this->getPC_MASTER())+1);
                }else if(value==1){
                    cout << "PASSOU BEQ value 1" << endl;
                    mod_decode.setFoi_tomado(true);
                    cout << "TESTE NA INSTRUCAO DE DECODE " << mod_busca.getOPCODE().toStdString() << endl;
                    cout << "TESTE NA INSTRUCAO DE OP1 " << mod_busca.getOP1().toStdString() << endl;
                    cout << "TESTE FOI TOMADO GETADO NA BUSCA " << mod_busca.getFoi_tomado() << endl;
                    this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP3()));
                }else if(value==2){
                    cout << "PASSOU BEQ value 2 com valor: " << this->tabeladePredicao(this->getPC_MASTER()) << endl;
                    if((this->tabeladePredicao(this->getPC_MASTER()))<2){
                        mod_decode.setFoi_tomado(false);
                        this->setPC_MASTER((this->getPC_MASTER())+1);
                    }else if((this->tabeladePredicao(this->getPC_MASTER()))>1){
                        mod_decode.setFoi_tomado(true);
                        this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP3()));
                    }
                }

            }else if((mod_decode.getOPCODE())=="bne"){
                if(value==0){
                    mod_decode.setFoi_tomado(false);
                    this->setPC_MASTER((this->getPC_MASTER())+1);
                }else if(value==1){
                    mod_decode.setFoi_tomado(true);
                    this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP3()));
                }else if(value==2){
                    if((this->tabeladePredicao(this->getPC_MASTER()))<2){
                        mod_decode.setFoi_tomado(false);
                        this->setPC_MASTER((this->getPC_MASTER())+1);
                    }else if((this->tabeladePredicao(this->getPC_MASTER()))>1){
                        mod_decode.setFoi_tomado(true);
                        this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP3()));
                    }
                }

            }else if((mod_decode.getOPCODE())=="j"){
                /*if(value==0){
                    mod_decode.setFoi_tomado(false);
                    this->setPC_MASTER((this->getPC_MASTER())+1);
                }else if(value==1){
                    mod_decode.setFoi_tomado(true);
                    this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP1()));
                }else if(value==2){
                    if((this->tabeladePredicao(this->getPC_MASTER()))<2){
                        mod_decode.setFoi_tomado(false);
                        this->setPC_MASTER((this->getPC_MASTER())+1);
                    }else if((this->tabeladePredicao(this->getPC_MASTER()))>1){
                        mod_decode.setFoi_tomado(true);
                        this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
                    }
                }*/
                mod_decode.setFoi_tomado(true);
                this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP1()));

            }else{
                this->setPC_MASTER((this->getPC_MASTER())+1);
            }

    }
    /*if((mod_decode.getOPCODE())=="beqz"){
        if(value==0){
            mod_decode.setFoi_tomado(false);
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }else if(value==1){
            mod_decode.setFoi_tomado(true);
            this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
        }else if(value==2){

        }
    }else if((mod_decode.getOPCODE())=="bnez"){
        if(value==0){
            mod_decode.setFoi_tomado(false);
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }else if(value==1){
            mod_decode.setFoi_tomado(true);
            this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP2()));
        }else if(value==2){

        }

    }else if((mod_decode.getOPCODE())=="beq"){
        if(value==0){
            mod_decode.setFoi_tomado(false);
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }else if(value==1){
            mod_decode.setFoi_tomado(true);
            cout << "TESTE NA INSTRUCAO DE DECODE " << mod_busca.getOPCODE().toStdString() << endl;
            cout << "TESTE NA INSTRUCAO DE OP1 " << mod_busca.getOP1().toStdString() << endl;
            cout << "TESTE FOI TOMADO GETADO NA BUSCA " << mod_busca.getFoi_tomado() << endl;
            this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP3()));
        }else if(value==2){

        }

    }else if((mod_decode.getOPCODE())=="bne"){
        if(value==0){
            mod_decode.setFoi_tomado(false);
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }else if(value==1){
            mod_decode.setFoi_tomado(true);
            this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP3()));
        }else if(value==2){

        }

    }else if((mod_decode.getOPCODE())=="j"){
        if(value==0){
            mod_decode.setFoi_tomado(false);
            this->setPC_MASTER((this->getPC_MASTER())+1);
        }else if(value==1){
            mod_decode.setFoi_tomado(true);
            this->setPC_MASTER(mod_decode.decodeValores(r,mod_decode.getOP1()));
        }else if(value==2){

        }

    }else{
        this->setPC_MASTER((this->getPC_MASTER())+1);
    }*/


    if(!this->alimenta_inst()){
        //mod_busca.zerar();
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    }


    cout << "RETURN EXEC ANTERIOR = "<< returnExec_ant << endl;

}

int processador::getSizeQMAP(){
    return listaOperacoes.size();
}

QString processador::getvalorQMAP(int value){
    return listaOperacoes.value(value, QString("Erro"));
}

void processador::setModoPredicao(int value){
    if(value == 0){
        //modo sempre ignorar o branch
        this->setPredicao(value);
    }else if(value==1){
        //modo sempre ignorar o branch
        this->setPredicao(value);
    }
}

void processador::zerar(){
    mod_busca.zerar();
    mod_decode.zerar();
    mod_execu.zerar();
    mod_mem.zerar();
    mod_wback.zerar();
    this->setPC_MASTER(0);
    for (unsigned int i = 0; i < 32; i++) {
        this->setR(0,i);
    }

    for (unsigned int i = 0; i < 32; i++) {
        //this->setPredicao_T(0,i);
        predicao_T[i]=0;
        //cout << "set na predicao: " << predicao_T[i] << endl;
    }
    this->setPredicao(0);
    this->setPulsos(0);
    this->setQntInvalidas(0);
    this->setQntValidas(0);
    this->setReturnExec(0);
    this->setReturnExec_ant(0);
    
}

int processador::tabeladePredicao(int value){
    cout << "valor recebido para pc do get tabela de predicao: "<< value << endl;
    char PC_recebido = value;
    char indiceLaco;

    for (unsigned int i = 0; i < 31; i++) {
        indiceLaco = i & PC_recebido;
        if(PC_recebido==i)
            break;
    }
    int indiceInt = indiceLaco;
    cout << "!!!!!!!!!!!!!!!!!!!!Indiceint == " << indiceInt << endl;
    return this->getPredicao_T(indiceInt);

}

int processador::getListasize(){
    return listaOperacoes.size();
}
