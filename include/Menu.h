#ifndef MENU_H
#define MENU_H
#include "DetallesGraficos.h"
#include "Validaciones.h"
#include "clsJuego.h"

class Menu{
private:
    DetallesGraficos d;
    Validaciones v;
public:
    Menu(DetallesGraficos d, Validaciones v);
    void iniciar();
    void mostrar(clsJuego *estaPartida);
    void
    void finalizar();
};

#endif // MENU_H
