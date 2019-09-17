/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lneEnderecoArquivo;
    QLabel *label;
    QPushButton *btnCarregar;
    QPushButton *btnClock;
    QLabel *label_2;
    QLabel *lblPC;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QTextEdit *txeMemProg;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lneOperacaoBuscaDeco;
    QLabel *label_7;
    QLineEdit *lneOp1BuscaDeco;
    QLabel *label_8;
    QLineEdit *lneOp2BuscaDeco;
    QLabel *label_9;
    QLineEdit *lneOp3BuscaDeco;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QTextEdit *txeRegistradores;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QLineEdit *lneOperacaoDecoExe;
    QLabel *label_13;
    QLineEdit *lneOp1DecoExe;
    QLabel *label_14;
    QLineEdit *lneOp2DecoExe;
    QLabel *label_15;
    QLineEdit *lneOp3DecoExe;
    QGroupBox *groupBox_8;
    QGroupBox *groupBox_6;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QLabel *label_16;
    QLineEdit *lneZero;
    QLabel *label_17;
    QLineEdit *lneResult;
    QLabel *label_18;
    QLineEdit *lneEnderecoExeMem;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_19;
    QTextEdit *txeMemDados;
    QGroupBox *groupBox_7;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_21;
    QLineEdit *lneEnderecoMemWB;
    QLabel *label_22;
    QLineEdit *lneDadoMemWB;
    QRadioButton *rbSemPred;
    QRadioButton *rbPredFixa;
    QRadioButton *rbPredicaoTabela;
    QCheckBox *chbTomado;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 496);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lneEnderecoArquivo = new QLineEdit(centralWidget);
        lneEnderecoArquivo->setObjectName(QStringLiteral("lneEnderecoArquivo"));
        lneEnderecoArquivo->setGeometry(QRect(100, 20, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 61, 16));
        btnCarregar = new QPushButton(centralWidget);
        btnCarregar->setObjectName(QStringLiteral("btnCarregar"));
        btnCarregar->setGeometry(QRect(230, 20, 75, 23));
        btnClock = new QPushButton(centralWidget);
        btnClock->setObjectName(QStringLiteral("btnClock"));
        btnClock->setGeometry(QRect(40, 380, 711, 61));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(820, 380, 21, 51));
        lblPC = new QLabel(centralWidget);
        lblPC->setObjectName(QStringLiteral("lblPC"));
        lblPC->setGeometry(QRect(860, 380, 21, 51));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 50, 1091, 291));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 111, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        txeMemProg = new QTextEdit(verticalLayoutWidget);
        txeMemProg->setObjectName(QStringLiteral("txeMemProg"));

        verticalLayout->addWidget(txeMemProg);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(horizontalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 111, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        lneOperacaoBuscaDeco = new QLineEdit(verticalLayoutWidget_2);
        lneOperacaoBuscaDeco->setObjectName(QStringLiteral("lneOperacaoBuscaDeco"));

        verticalLayout_2->addWidget(lneOperacaoBuscaDeco);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        lneOp1BuscaDeco = new QLineEdit(verticalLayoutWidget_2);
        lneOp1BuscaDeco->setObjectName(QStringLiteral("lneOp1BuscaDeco"));

        verticalLayout_2->addWidget(lneOp1BuscaDeco);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        lneOp2BuscaDeco = new QLineEdit(verticalLayoutWidget_2);
        lneOp2BuscaDeco->setObjectName(QStringLiteral("lneOp2BuscaDeco"));

        verticalLayout_2->addWidget(lneOp2BuscaDeco);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        lneOp3BuscaDeco = new QLineEdit(verticalLayoutWidget_2);
        lneOp3BuscaDeco->setObjectName(QStringLiteral("lneOp3BuscaDeco"));

        verticalLayout_2->addWidget(lneOp3BuscaDeco);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(horizontalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayoutWidget_3 = new QWidget(groupBox_3);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 111, 211));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        txeRegistradores = new QTextEdit(verticalLayoutWidget_3);
        txeRegistradores->setObjectName(QStringLiteral("txeRegistradores"));

        verticalLayout_3->addWidget(txeRegistradores);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(horizontalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayoutWidget_4 = new QWidget(groupBox_4);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 20, 111, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_4->addWidget(label_12);

        lneOperacaoDecoExe = new QLineEdit(verticalLayoutWidget_4);
        lneOperacaoDecoExe->setObjectName(QStringLiteral("lneOperacaoDecoExe"));

        verticalLayout_4->addWidget(lneOperacaoDecoExe);

        label_13 = new QLabel(verticalLayoutWidget_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_4->addWidget(label_13);

        lneOp1DecoExe = new QLineEdit(verticalLayoutWidget_4);
        lneOp1DecoExe->setObjectName(QStringLiteral("lneOp1DecoExe"));

        verticalLayout_4->addWidget(lneOp1DecoExe);

        label_14 = new QLabel(verticalLayoutWidget_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_4->addWidget(label_14);

        lneOp2DecoExe = new QLineEdit(verticalLayoutWidget_4);
        lneOp2DecoExe->setObjectName(QStringLiteral("lneOp2DecoExe"));

        verticalLayout_4->addWidget(lneOp2DecoExe);

        label_15 = new QLabel(verticalLayoutWidget_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_4->addWidget(label_15);

        lneOp3DecoExe = new QLineEdit(verticalLayoutWidget_4);
        lneOp3DecoExe->setObjectName(QStringLiteral("lneOp3DecoExe"));

        verticalLayout_4->addWidget(lneOp3DecoExe);


        horizontalLayout->addWidget(groupBox_4);

        groupBox_8 = new QGroupBox(horizontalLayoutWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));

        horizontalLayout->addWidget(groupBox_8);

        groupBox_6 = new QGroupBox(horizontalLayoutWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayoutWidget_5 = new QWidget(groupBox_6);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 30, 111, 211));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        label_16 = new QLabel(verticalLayoutWidget_5);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_5->addWidget(label_16);

        lneZero = new QLineEdit(verticalLayoutWidget_5);
        lneZero->setObjectName(QStringLiteral("lneZero"));

        verticalLayout_5->addWidget(lneZero);

        label_17 = new QLabel(verticalLayoutWidget_5);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_5->addWidget(label_17);

        lneResult = new QLineEdit(verticalLayoutWidget_5);
        lneResult->setObjectName(QStringLiteral("lneResult"));

        verticalLayout_5->addWidget(lneResult);

        label_18 = new QLabel(verticalLayoutWidget_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_5->addWidget(label_18);

        lneEnderecoExeMem = new QLineEdit(verticalLayoutWidget_5);
        lneEnderecoExeMem->setObjectName(QStringLiteral("lneEnderecoExeMem"));

        verticalLayout_5->addWidget(lneEnderecoExeMem);


        horizontalLayout->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(horizontalLayoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayoutWidget_6 = new QWidget(groupBox_5);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 20, 95, 211));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(verticalLayoutWidget_6);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_6->addWidget(label_19);

        txeMemDados = new QTextEdit(verticalLayoutWidget_6);
        txeMemDados->setObjectName(QStringLiteral("txeMemDados"));

        verticalLayout_6->addWidget(txeMemDados);


        horizontalLayout->addWidget(groupBox_5);

        groupBox_7 = new QGroupBox(horizontalLayoutWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayoutWidget_7 = new QWidget(groupBox_7);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(10, 20, 91, 211));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(verticalLayoutWidget_7);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_7->addWidget(label_21);

        lneEnderecoMemWB = new QLineEdit(verticalLayoutWidget_7);
        lneEnderecoMemWB->setObjectName(QStringLiteral("lneEnderecoMemWB"));

        verticalLayout_7->addWidget(lneEnderecoMemWB);

        label_22 = new QLabel(verticalLayoutWidget_7);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_7->addWidget(label_22);

        lneDadoMemWB = new QLineEdit(verticalLayoutWidget_7);
        lneDadoMemWB->setObjectName(QStringLiteral("lneDadoMemWB"));

        verticalLayout_7->addWidget(lneDadoMemWB);


        horizontalLayout->addWidget(groupBox_7);

        rbSemPred = new QRadioButton(centralWidget);
        rbSemPred->setObjectName(QStringLiteral("rbSemPred"));
        rbSemPred->setGeometry(QRect(380, 10, 82, 17));
        rbPredFixa = new QRadioButton(centralWidget);
        rbPredFixa->setObjectName(QStringLiteral("rbPredFixa"));
        rbPredFixa->setGeometry(QRect(480, 10, 82, 17));
        rbPredicaoTabela = new QRadioButton(centralWidget);
        rbPredicaoTabela->setObjectName(QStringLiteral("rbPredicaoTabela"));
        rbPredicaoTabela->setGeometry(QRect(750, 10, 121, 17));
        chbTomado = new QCheckBox(centralWidget);
        chbTomado->setObjectName(QStringLiteral("chbTomado"));
        chbTomado->setGeometry(QRect(570, 10, 111, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1100, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Programa:", Q_NULLPTR));
        btnCarregar->setText(QApplication::translate("MainWindow", "Carregar", Q_NULLPTR));
        btnClock->setText(QApplication::translate("MainWindow", "Clock", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "PC: ", Q_NULLPTR));
        lblPC->setText(QApplication::translate("MainWindow", "xx", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Busca", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Memoria Programa:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Busca/Deco", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Instru\303\247\303\243o:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Opera\303\247\303\243o:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Op1:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Op2:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Op3:", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Deco", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Registradores:", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Deco/Exe", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Opera\303\247\303\243o:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Op1:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Op2:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Op3:", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Execu\303\247\303\243o", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Exe/Mem", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Instru\303\247\303\243o:", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Zero:", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Endere\303\247o:", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Memoria", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "MemoriaDados:", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "MemWB", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Endere\303\247o:", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Dado:", Q_NULLPTR));
        rbSemPred->setText(QApplication::translate("MainWindow", "Sem predi\303\247\303\243o", Q_NULLPTR));
        rbPredFixa->setText(QApplication::translate("MainWindow", "Predi\303\247\303\243o fixa", Q_NULLPTR));
        rbPredicaoTabela->setText(QApplication::translate("MainWindow", "Predi\303\247\303\243o por tabela", Q_NULLPTR));
        chbTomado->setText(QApplication::translate("MainWindow", "Sempre tomado?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
