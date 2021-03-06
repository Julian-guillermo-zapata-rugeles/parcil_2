#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <canonofensivo.h>
#include <canondefensivo.h>
#include <espia.h>
#include <delimitantes.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    CanonOfensivo * Canon_ofensivo;
    CanonDefensivo * Canon_defensivo;
    Espia * ChivoExpiatorio;
    Delimitantes *limiteDefensivo;


private slots:
    void on_btn_subir_clicked();
    void on_btn_bajar_clicked();
    void on_btn_derecha_clicked();
    void on_btn_izquierda_clicked();
    void on_btn_fuego_clicked();
    void on_btn_subir_2_clicked();
    void on_btn_izquierda_2_clicked();
    void on_btn_derecha_2_clicked();
    void on_btn_bajar_2_clicked();
    void on_btn_fuego_2_clicked();
    void on_subir_grados_clicked();
    void on_bajar_grados_clicked();
    void on_btn_fuego_3_clicked();
    void on_btn_fuego_4_clicked();
    void on_btn_fuego_5_clicked();
};






#endif // MAINWINDOW_H
