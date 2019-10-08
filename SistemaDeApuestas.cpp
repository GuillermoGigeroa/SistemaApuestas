#include <iostream>
#include <Menu.h>
#include <DetallesGraficos.h>
#include <clsJuego.h>           //TERMINADO
using namespace std;

int main()
{
    DetallesGraficos detalles;
    clsJuego miPartida(100000);
    Menu miMenu(detalles);

    miMenu.iniciar();
    miMenu.mostrar(&miPartida);
    detalles.esperarIngreso(false);
    miMenu.finalizar();
    return 0;
}
