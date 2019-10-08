#ifndef MENU_H
#define MENU_H
#include "DetallesGraficos.h"
#include "clsJuego.h"

class Menu{
private:
    DetallesGraficos d;
    bool esRespuesta(char *estaRespuesta);
    void mostrar(clsJuego *estaPartida);
    bool elegirOpcion(clsJuego *estaPartida);
    void finalizar();
    bool esNumero(char esteCaracter);
    bool validarSiEsNumero(char *esto);
public:
    void iniciar(clsJuego *estaPartida);
};

#endif // MENU_H
