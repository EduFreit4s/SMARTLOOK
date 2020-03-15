#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "arquivo.h"

#include "closet.h"
#include "peca.h"

#include <QString>
#include "tempo.h"
#include <QMessageBox>
#include <stdlib.h>
#include <QFileDialog>
#include <QPixmap>

#include <QVector>
#include <QFile>
#include <QInputDialog>


#include <QMainWindow>
#include <fstream>
#include <tuple>
#include <map>



#include <QDebug>
#include "cadastro.h"

#include "sobre.h"
#include "separapeca.h"
#include "editar.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_btnOrdenar_activated(const QString &arg1);

    void on_actionSalvar_triggered();
    void on_actionCarregar_triggered();
    void on_actionen_US_triggered();
    void on_actionpt_BR_triggered();
    void on_actiones_ES_triggered();
    void on_actionApagar_Tudo_triggered();
    void on_actionSobre_triggered();



    void on_btnCloset_clicked();
    void on_btnNovo_clicked();
    void on_btnEstatistica_clicked();
    void on_btnMatch_clicked();
    void on_btnSair_clicked();



    void menu();
    void atualizaTabela();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_0_clicked();
    void on_btnTroncoRight_clicked();
    void on_btnTroncoLeft_clicked();
    void on_btnPernasRight_clicked();
    void on_btnPernasLeft_clicked();
    void on_btnCalcadoRight_clicked();
    void on_btnCalcadoLeft_clicked();
    void on_apagar_activated(const QString &arg1);

    void on_btnMatch_2_clicked();
    void on_editar_activated(const QString &arg1);


private:

    Ui::MainWindow *ui;
    Peca roupas;
    Closet roupa;
    separaPeca pecas;

    void inserirNaTabela(Closet a, int linha);
    std::tuple <int, int, QString, int, int, int> calculaStats(Peca a);
    void match();



    cadastro *novo;
    Sobre *edu;
    Editar *edit;

    int idioma = 0;

    int troncoPage = 0;
    int pernasPage = 0;
    int calcadoPage = 0;

};
#endif // MAINWINDOW_H
