#ifndef BUSCA_H
#define BUSCA_H
#include <QFile>
#include <QList>
#include <QString>
#include "barreirabuscadecodifica.h"
class Busca
{
private:
    QFile* LeitorArquivo;
    QList<QString> memoriaPrograma;
    BarreiraBuscaDecodifica* barreiraOut;
public:
    Busca(QString end, BarreiraBuscaDecodifica* barreira );
    void Executar(int pc);
    QList<QString> getMemoriaPrograma() const;
};

#endif // BUSCA_H
