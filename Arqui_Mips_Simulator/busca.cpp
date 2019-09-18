#include "busca.h"
#include <QMessageBox>
#include "instrucao.h"

QList<QString> Busca::getMemoriaPrograma() const
{
    return memoriaPrograma;
}

Busca::Busca(QString end, BarreiraBuscaDecodifica *barreira)
{

    LeitorArquivo = new QFile(end);
    if( !LeitorArquivo->exists() ) {// Arquivo não existe
        QMessageBox msgBox;
        msgBox.setText("Arquivo não existe");
        msgBox.exec();
        return;
    }

    if( !LeitorArquivo->open(QIODevice::ReadOnly| QIODevice::Text) ){
        QMessageBox msgBox;
        msgBox.setText("Não foi possivel abrir o arquivo");
        msgBox.exec();
        return;
    }
    int count=0;
    while (!LeitorArquivo->atEnd()) {
        count++;
        memoriaPrograma.append(LeitorArquivo->readLine());
    }
    QMessageBox msgBox;
    QString msg = "Arquivo aberto ";
    msg.append(QString::number(count));
    msg.append(" linhas de programa");
    msgBox.setText(msg);
    msgBox.exec();
    barreiraOut = barreira;
}

void Busca::Executar(int pc)
{
    Instrucao ins(pc,memoriaPrograma[pc]);
    barreiraOut->setInst(ins);
}
