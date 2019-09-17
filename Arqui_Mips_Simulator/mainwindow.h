#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "busca.h"
#include "barreirabuscadecodifica.h"
#include "barreiraexecmem.h"
#include "memoriadados.h"
#include "barreiramemwb.h"
#include "mecanismopredicao.h"
#include "predicaofixa.h"
#include "predicaotabela.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void AtualizarTela();

private slots:
    void on_btnCarregar_clicked();

    void on_btnClock_clicked();

    void on_radioButton_pressed();

private:
    Ui::MainWindow *ui;
    int pc;
    Busca *busca;
    BarreiraBuscaDecodifica *busca_deco;
    Decodifica *decodifica;
    BarreiraDecoExec *deco_exe;
    Execucao *execucao;
    BarreiraExecMem *exe_mem;
    MemoriaDados *memDado;
    BarreiraMemWB *mem_wb;
    MecanismoPredicao *predicao;




};

#endif // MAINWINDOW_H
