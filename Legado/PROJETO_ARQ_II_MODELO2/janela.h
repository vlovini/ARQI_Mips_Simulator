#ifndef JANELA_H
#define JANELA_H

#include <QWidget>
#include <processador.h>
#include <iostream>
#include <QString>
#include <QStandardItemModel>
#include <QFile>
#include <QFileDialog>

using namespace std;

namespace Ui {
class Janela;
}

class Janela : public QWidget
{
    Q_OBJECT
    processador num1;
public:
    explicit Janela(QWidget *parent = 0);
    void atualizaReg();
    ~Janela();

private slots:
    void on_btnOpen_clicked();

    void on_btnNext_clicked();

    void on_boxPredicao_currentIndexChanged(const QString &arg1);
    
    void on_btnLoadAll_clicked();

private:
    Ui::Janela *ui;
    QStandardItemModel *model, *model_reg;
};

#endif // JANELA_H
