#include <iostream>
#include <Menu.h>
#include <DetallesGraficos.h>
#include <clsJuego.h>           //TERMINADO
using namespace std;

int main()
{
    clsJuego miPartida(100000);
    Menu miMenu;
    miMenu.iniciar(&miPartida);
    return 0;
}
