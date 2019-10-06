#include "DetallesGraficos.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
using namespace std;
using std::setw;
using std::left;

void DetallesGraficos::limpiarConsola(){
    system("cls || clear");
}

void DetallesGraficos::esperarIngreso(bool conMensaje){
        if (conMensaje){
            system("pause");
        }
        else{
            cin.get();
        }
}

void DetallesGraficos::hacerEspacio(int cantidad){
    for (int x = 0; x < cantidad; ++x){
        cout<<endl;
    }
}

void DetallesGraficos::hacerEspacio(){
    cout<<endl;
}

void DetallesGraficos::escribirSlow(char *esteTexto){
    const int num = 15;
    const int ms = 50;
    int x = 0;
    cout<<setw(num)<<left<<" ";
    while (esteTexto[x] != '\0'){
        cout<<esteTexto[x];
        x++;
    }
    Sleep(ms);
    cout<<endl;
}

void DetallesGraficos::_escribirSlow(char *esteTexto){
    const int num = 15;
    int x = 0;
    cout<<setw(num)<<left<<" ";
    while (esteTexto[x] != '\0'){
        if (esteTexto[x] != ' '){
            Sleep(5);
        }
        cout<<esteTexto[x];
        x++;
    }
    cout<<endl;
}

void DetallesGraficos::_escribirSlow(char *esteTexto, bool conTabulacion){
    const int num = 15;
    int x = 0;
    if (conTabulacion){
        cout<<setw(num)<<left<<" ";
    }
    while (esteTexto[x] != '\0'){
        if (esteTexto[x] != ' '){
            Sleep(5);
        }
        cout<<esteTexto[x];
        x++;
    }
    cout<<endl;
}

void DetallesGraficos::presentacion(){
    escribirSlow("              @@@@@@@@@@@@@@   @@@@@@@@@@@@@@              ");
    escribirSlow("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    escribirSlow("       @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("     @@@@@@         @@@@@@@     @@@@@@@         @@@@@@     ");
    escribirSlow("   @@@@@@            @@@           @@@            @@@@@@   ");
    escribirSlow("  @@@@@                                             @@@@@  ");
    escribirSlow(" @@@@@           __________________________          @@@@@ ");
    escribirSlow("@@@@@           |                          |          @@@@@");
    escribirSlow("@@@@            | G.I.G.E.R.O.A.B.L.A.C.K. |           @@@@");
    escribirSlow("@@@@            |__________________________|           @@@@");
    escribirSlow("@@@@                                                   @@@@");
    escribirSlow("@@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow("@@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow("@@@@@             @@@@               @@@@             @@@@@");
    escribirSlow(" @@@@@            @@@@               @@@@            @@@@@ ");
    escribirSlow("  @@@@@            @@@@             @@@@            @@@@@  ");
    escribirSlow("   @@@@@@           @@@@@         @@@@@           @@@@@@   ");
    escribirSlow("     @@@@@@          @@@@@@     @@@@@@          @@@@@@     ");
    escribirSlow("       @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    hacerEspacio();
    escribirSlow("           SISTEMA DE APUESTAS - by GIGEROABLACK");
    hacerEspacio();
    _escribirSlow("         ... Presione enter para continuar ...");
    cin.get();
}

void DetallesGraficos::despedida(){
    limpiarConsola();
    escribirSlow("              @@@@@@@@@@@@@@   @@@@@@@@@@@@@@              ");
    escribirSlow("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    escribirSlow("       @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("     @@@@@@         @@@@@@@     @@@@@@@         @@@@@@     ");
    escribirSlow("   @@@@@@            @@@           @@@            @@@@@@   ");
    escribirSlow("  @@@@@                                             @@@@@  ");
    escribirSlow(" @@@@@           __________________________          @@@@@ ");
    escribirSlow("@@@@@           |                          |          @@@@@");
    escribirSlow("@@@@            | G.I.G.E.R.O.A.B.L.A.C.K. |           @@@@");
    escribirSlow("@@@@            |__________________________|           @@@@");
    escribirSlow("@@@@                                                   @@@@");
    escribirSlow("@@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow("@@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow("@@@@@             @@@@               @@@@             @@@@@");
    escribirSlow(" @@@@@            @@@@               @@@@            @@@@@ ");
    escribirSlow("  @@@@@            @@@@             @@@@            @@@@@  ");
    escribirSlow("   @@@@@@           @@@@@         @@@@@           @@@@@@   ");
    escribirSlow("     @@@@@@          @@@@@@     @@@@@@          @@@@@@     ");
    escribirSlow("       @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    hacerEspacio();
    escribirSlow("            MUCHAS GRACIAS POR UTILIZAR EL");
    escribirSlow("                 SISTEMA DE APUESTAS");
    hacerEspacio();
    hacerEspacio();    escribirSlow("              Hecho por Guillermo Gigeroa");
    hacerEspacio();
    _escribirSlow("  Presione enter para finalizar ...",false);
    cin.get();
}

