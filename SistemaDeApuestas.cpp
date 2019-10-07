#include <iostream>
#include <Menu.h>
#include <DetallesGraficos.h>
#include <Validaciones.h>
#include <clsJuego.h>           //TERMINADO
using namespace std;

int main()
{
    DetallesGraficos detalles;
    Validaciones validaciones;
    clsJuego miPartida(100000);
    Menu miMenu(detalles,validaciones);

    miMenu.iniciar();
    miMenu.mostrar(&miPartida);
    detalles.esperarIngreso(false);
    miMenu.finalizar();
    return 0;
}
