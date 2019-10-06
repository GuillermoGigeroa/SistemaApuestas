#include <iostream>
#include <Menu.h>
#include <DetallesGraficos.h>
#include <Validaciones.h>
#include <clsJuego.h>
using namespace std;

int main()
{
    DetallesGraficos detalles;
    Validaciones validaciones;
    clsJuego miPartida(100000);//Terminado
    Menu miMenu(detalles,validaciones);
    //TODO Solo falta terminar el menu
    miMenu.iniciar();

    miMenu.finalizar();
    return 0;
}
