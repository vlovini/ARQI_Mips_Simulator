#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "busca.h"
#include "barreirabuscadecodifica.h"
#include "barreiraexecmem.h"
#include "memoriadados.h"
#include "barreiramemwb.h"
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




};

#endif // MAINWINDOW_H
