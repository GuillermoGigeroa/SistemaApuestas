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
}

void Menu::finalizar(){
    d.limpiarConsola();
    d.despedida();
    d.limpiarConsola();
}
