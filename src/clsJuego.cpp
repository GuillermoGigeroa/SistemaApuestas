#include "clsJuego.h"
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <windows.h>
using namespace std;
using std::setw;
using std::left;

clsJuego::clsJuego(int montoInicial){
    setMontoInicial(montoInicial);
    setMontoActual(montoInicial);
    setApuesta(0);
    setCantPartidasGanadas(0);
    setCantPartidasPerdidas(0);
    setDineroGanado(0);
    setDineroPerdido(0);
}

void clsJuego::Perder(){
    setMontoActual(getMontoActual()-getApuesta());
    setCantPartidasPerdidas(getCantPartidasPerdidas()+1);
    setDineroPerdido(getDineroPerdido()+getApuesta());
    setApuesta(0);
}

void clsJuego::Ganar(){
    setMontoActual(getMontoActual()+getApuesta());
    setCantPartidasGanadas(getCantPartidasGanadas()+1);
    setDineroGanado(getDineroGanado()+getApuesta());
    setApuesta(0);
}

void clsJuego::Apostar(int apuesta){
    if (getApuesta() + apuesta <= getMontoActual()){
        setApuesta(getApuesta()+apuesta);
    }
    else{
        setApuesta(getMontoActual());
    }
}

void clsJuego::Guardar(){
    FILE *archivo;
    archivo = fopen("PartidaGuardada.sav","wb");
    if(archivo == NULL){
        cout<<"Error al guardar partida..."<<endl;
        return;
    }
    fwrite(this,sizeof(clsJuego),1,archivo);
    fclose(archivo);
    cout<<"Partida guardada..."<<endl;
    Sleep(700);
}

void clsJuego::Cargar(){
    FILE *archivo;
    archivo = fopen("PartidaGuardada.sav","rb");
    if(archivo == NULL){
        cout<<"Error al cargar partida..."<<endl;
        return;
    }
    int partidaCargada;
    fread(this,sizeof(clsJuego),1,archivo);
    fclose(archivo);
    cout<<"Partida cargada..."<<endl;
    Sleep(700);}

void clsJuego::Reiniciar(){
    setMontoActual(getMontoInicial());
    setApuesta(0);
    setCantPartidasGanadas(0);
    setCantPartidasPerdidas(0);
    setDineroGanado(0);
    setDineroPerdido(0);
}

void clsJuego::MostrarEstadisticas(){
    cout<<" ________________________________________________ "<<endl;
    cout<<"|                                                |"<<endl;
    cout<<"|                  ESTADISTICAS                  |"<<endl;
    cout<<"|________________________________________________|"<<endl;
    cout<<setw(25)<<left<<"|                       |"
        <<setw(24)<<left<<""
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> MONTO INICIAL      |"
        <<setw(8)<<left<<"       $"
        <<setw(16)<<left<<getMontoInicial()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> PARTIDAS GANADAS   |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<getCantPartidasGanadas()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> PARTIDAS PERDIDAS  |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<getCantPartidasPerdidas()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> DINERO GANADO      |"
        <<setw(8)<<left<<"       $"
        <<setw(16)<<left<<getDineroGanado()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> DINERO PERDIDO     |"
        <<setw(8)<<left<<"       $"
        <<setw(16)<<left<<getDineroPerdido()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> MONTO DISPONIBLE   |"
        <<setw(8)<<left<<"       $"
        <<setw(16)<<left<<getMontoActual()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> APUESTA            |"
        <<setw(8)<<left<<"       $"
        <<setw(16)<<left<<getApuesta()
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<"|________________________________________________|"<<endl;
}

void clsJuego::setMontoInicial(int numero){
    montoInicial = numero;
}

void clsJuego::setApuesta(int numero){
    apuesta = numero;
}

void clsJuego::setMontoActual(int numero){
    montoActual = numero;
}

void clsJuego::setCantPartidasGanadas(int numero){
    cantPartidasGanadas = numero;
}

void clsJuego::setCantPartidasPerdidas(int numero){
    cantPartidasPerdidas = numero;
}

void clsJuego::setDineroGanado(int numero){
    dineroGanado = numero;
}

void clsJuego::setDineroPerdido(int numero){
    dineroPerdido = numero;
}
