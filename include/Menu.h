#ifndef MENU_H
#define MENU_H
#include "DetallesGraficos.h"
#include "Validaciones.h"
#include "clsJuego.h"

class Menu{
private:
    DetallesGraficos d;
    Validaciones v;
    bool esRespuesta(char *estaRespuesta);
public:
    Menu(DetallesGraficos d, Validaciones v);
    void iniciar();
    void mostrar(clsJuego *estaPartida);
    void elegirOpcion(clsJuego *estaPartida);
    void finalizar();
};

#endif // MENU_H
