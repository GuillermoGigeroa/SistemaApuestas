#include "DetallesGraficos.h"
#include "Validaciones.h"
#include "Menu.h"
#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;
using std::left;
using namespace std;

Menu::Menu(DetallesGraficos d, Validaciones v){
    this->d = d;
    this->v = v;
}

void Menu::iniciar(){
    d.limpiarConsola();
    d.presentacion();
    d.limpiarConsola();
}

void Menu::mostrar(clsJuego *estaPartida){
    //TODO Falta hacer las funciones de las opciones del menu
    d.limpiarConsola();
    estaPartida->MostrarEstadisticas();
    cout<<setw(49)<<left<<"|"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ A ] - APOSTAR"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ B ] - GANAR"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ C ] - PERDER"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ D ] - GUARDAR PARTIDA"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ E ] - CARGAR PARTIDA"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ F ] - REINICIAR PARTIDA"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"|"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(49)<<left<<"| [ S ] - SALIR"
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<"|________________________________________________|"<<endl;
    elegirOpcion(estaPartida);
}

void Menu::elegirOpcion(clsJuego *estaPartida){
    bool esValido = false;
    char opcion[30];
    opcion[0] = ' ';
    opcion[1] = '\0';
    while(!esValido){
        d.limpiarConsola();
        cout<<"Ingrese la opcion elegida: ";

    }
}

bool Menu::esRespuesta(char *estaRespuesta){
    if((estaRespuesta[0] >= 'a' && estaRespuesta[0] <= 'z')||(estaRespuesta[0] >= 'A' && estaRespuesta[0] <= 'Z')){
            if (estaRespuesta[1] == '\0'){
                return true;
            }
    }
    return false;
}

void Menu::finalizar(){
    d.limpiarConsola();
    d.despedida();
    d.limpiarConsola();
}
