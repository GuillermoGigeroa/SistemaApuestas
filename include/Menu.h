#ifndef MENU_H
#define MENU_H
#include "DetallesGraficos.h"
#include "clsJuego.h"

class Menu{
private:
    DetallesGraficos d;
    bool esRespuesta(char *estaRespuesta);
public:
    Menu(DetallesGraficos d);
    void iniciar();
    void mostrar(clsJuego *estaPartida);
    void elegirOpcion(clsJuego *estaPartida);
    void finalizar();
};

#endif // MENU_H
