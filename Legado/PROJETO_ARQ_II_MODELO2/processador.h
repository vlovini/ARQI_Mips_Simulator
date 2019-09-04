#ifndef PROCESSADOR_H
#define PROCESSADOR_H
#include <QString>
#include <QMap>
#include <iostream>
#include <QFile>
#include <iostream>
#include <QTextStream>
#include "busca.h"
#include "decode.h"
#include "execu.h"
#include "memoria.h"
#include "wback.h"

using namespace std;

class processador
{
    unsigned int r[32];
    unsigned int predicao_T[32];
    int PC_MASTER;
    QFile *arquivo;
    QTextStream * ts; // cria um ponteiro para um tipo Stream assim pode ser acessado por todos os metodos
    unsigned int predicao;
    QMap<int,QString> listaOperacoes;
    unsigned int returnExec=0,returnExec_ant=0;
    unsigned int qntInvalidas, qntValidas,pulsos;
    

public:
    processador();
    bool abreArq(QString Endereco);
    bool alimenta_inst();
    int getPC_MASTER() const;
    void setPC_MASTER(int value); 
    unsigned int getR(unsigned int) const;
    void setR(unsigned int value, unsigned int indice);
    bool proximo(int value);
    int getSizeQMAP();
    busca mod_busca;
    decode mod_decode;
    execu mod_execu;
    memoria mod_mem;
    wback mod_wback;
    QString getvalorQMAP(int);
    void setModoPredicao(int);
    unsigned int getPredicao() const;
    void setPredicao(unsigned int value);
    void zerar();
    unsigned int getReturnExec() const;
    void setReturnExec(unsigned int value);
    unsigned int getReturnExec_ant() const;
    void setReturnExec_ant(unsigned int value);
    unsigned int getPredicao_T(unsigned int) const;
    void setPredicao_T(unsigned int value, unsigned int indice);
    int tabeladePredicao(int);
    unsigned int getQntInvalidas() const;
    void setQntInvalidas(unsigned int value);
    unsigned int getQntValidas() const;
    void setQntValidas(unsigned int value);
    unsigned int getPulsos() const;
    void setPulsos(unsigned int value);
    int getListasize();
};

#endif // PROCESSADOR_H
