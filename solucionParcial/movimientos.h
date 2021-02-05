#ifndef MOVIMIENTOS_H
#define MOVIMIENTOS_H
#include <math.h>

class Movimientos
{
public:
    Movimientos(short int limite_inferior);


protected:

    // --------------------- Atributos de la clase Heredables --------------------------------//
    bool proyectil_en_movimiento;
    float velocidad_x , velocidad_y , tiempo_transcurrido , posicion_y , posicion_x;
    short int velocidad_instantanea , angulo, limite_inferior;


    // ---------------------  Métodos de la clase Heredables  -------------------------------//

    void configurarProyectil(short velocidad_instantanea, short angulo, short int posx, short int posy);
    void moverParabolicamente();

    bool getProyectil_en_movimiento() const;
    void setProyectil_en_movimiento(bool value);
};

#endif // MOVIMIENTOS_H