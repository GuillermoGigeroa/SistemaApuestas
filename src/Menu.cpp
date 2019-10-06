#include "DetallesGraficos.h"
#include "Validaciones.h"
#include "Menu.h"
#include <iostream>
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

void Menu::mostrar(){

}

void Menu::finalizar(){
    d.limpiarConsola();
    d.despedida();
    d.limpiarConsola();
}
