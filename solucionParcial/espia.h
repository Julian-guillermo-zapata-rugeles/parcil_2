#ifndef ESPIA_H
#define ESPIA_H

#include <QObject>
#include <QTimer>
#include <canondefensivo.h>
#include <canonofensivo.h>


class Espia :public QObject
{
    Q_OBJECT
public:
    Espia(CanonOfensivo *canon_ofensivo  ,CanonDefensivo *canon_defensivo);
    void setMultiple(bool value);

    void setRespuesta(bool value);

private:
    QTimer *controladorEventos;
    CanonOfensivo *ptr_canon_ofensivo;
    CanonDefensivo *ptr_canon_defensivo;
    short int intervalo_adv_defensivo;
    short int intervalo_adv_ofensivo;
    bool multiple;
    bool respuesta;
    QMediaPlayer *sonido;
    bool  ofensiveRuntimeService();
    bool  defensiveRuntimeService();

private slots:
    void actions();
};

#endif // ESPIA_H
