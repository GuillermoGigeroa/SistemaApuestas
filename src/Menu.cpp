#include "DetallesGraficos.h"
#include "Menu.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
using std::setw;
using std::left;
using namespace std;

void Menu::iniciar(clsJuego *estaPartida){
    d.limpiarConsola();
    d.presentacion();
    d.limpiarConsola();
    mostrar(estaPartida);
    finalizar();
}

void Menu::mostrar(clsJuego *estaPartida){
    d.limpiarConsola();
    estaPartida->MostrarEstadisticas();
    while(elegirOpcion(estaPartida));
}

bool Menu::elegirOpcion(clsJuego *estaPartida){
    bool esValido = false;
    char opcion[200];
    opcion[0] = ' ';
    opcion[1] = '\0';
    while(!esValido){
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
        d._escribirSlow("Ingrese la opcion elegida: ");
        cin.getline(opcion,200);
        if(esRespuesta(opcion)){
            esValido = true;
        }
    }
    switch (opcion[0]){
    case 'a':
    case 'A':
        {
            esValido = false;
            char num[200];
            num[0] = ' ';
            num[1] = '\0';
            while(!esValido){
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
                d._escribirSlow("Ingrese el monto a apostar: $");
                cin.getline(num,200);
                if(validarSiEsNumero(num)){
                    esValido = true;
                }
            }
            int apuesta = atoi(num);
            estaPartida->Apostar(apuesta);
            return true;
        }break;
    case 'b':
    case 'B':
        {
            estaPartida->Ganar();
            return true;
        }break;
    case 'c':
    case 'C':
        {
            estaPartida->Perder();
            return true;        }break;
    case 'd':
    case 'D':
        {
            estaPartida->Guardar();
            return true;
        }break;
    case 'e':
    case 'E':
        {
            estaPartida->Cargar();
            return true;
        }break;
    case 'f':
    case 'F':
        {
            estaPartida->Reiniciar();
            return true;
        }break;
    case 's':
    case 'S':
        {
            return false;
        }break;
    default:
        {
            cout<<"Opcion incorrecta..."<<endl;
            d.esperarIngreso(false);
            return true;
        }break;
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

bool Menu::esNumero(char esteCaracter){
    if (esteCaracter > 47 && esteCaracter < 58){
        return true;
    }
    return false;
}

bool Menu::validarSiEsNumero(char *esto){
    int x = 0;
    while(esto[x] != '\0'){
        if(!esNumero(esto[x])){
            return false;
        }
        x++;
    }
    return true;
}
