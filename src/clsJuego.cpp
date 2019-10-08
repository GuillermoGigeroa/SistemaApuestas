#include "clsJuego.h"
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
using std::setw;
using std::left;

clsJuego::clsJuego(int montoInicial){
    setMontoInicial(montoInicial);
    setMontoActual(montoInicial);
    setApuesta(0);
    setCantPartidasGanadas(0);
    setCantPartidasPerdidas(0);
}

void clsJuego::Perder(){
    montoActual = montoActual - apuesta;
    cantPartidasPerdidas++;
    apuesta = 0;
}

void clsJuego::Ganar(){
    montoActual = montoActual + apuesta;
    cantPartidasGanadas++;
    apuesta = 0;
}

void clsJuego::Apostar(int apuesta){
    if (this->apuesta + apuesta <= montoActual){
        this->apuesta = this->apuesta + apuesta;
    }
    else{
        this->apuesta = montoActual;
    }
}

void clsJuego::Guardar(){
    FILE *archivo;
    archivo = fopen("PartidaGuardada.sav","wb");
    if(archivo == NULL){
        cout<<"Error al guardar partida..."<<endl;
        return;
    }
    fwrite(&montoInicial,sizeof(int),1,archivo);
    fwrite(&apuesta,sizeof(int),1,archivo);
    fwrite(&montoActual,sizeof(int),1,archivo);
    fwrite(&cantPartidasGanadas,sizeof(int),1,archivo);
    fwrite(&cantPartidasPerdidas,sizeof(int),1,archivo);
    fclose(archivo);
    cout<<"Partida guardada..."<<endl;
}

void clsJuego::Cargar(){
    FILE *archivo;
    archivo = fopen("PartidaGuardada.sav","rb");
    if(archivo == NULL){
        cout<<"Error al cargar partida..."<<endl;
        return;
    }
    int partidaCargada;
    fread(&partidaCargada,sizeof(int),1,archivo);
    montoInicial = partidaCargada;
    fread(&partidaCargada,sizeof(int),1,archivo);
    apuesta = partidaCargada;
    fread(&partidaCargada,sizeof(int),1,archivo);
    montoActual = partidaCargada;
    fread(&partidaCargada,sizeof(int),1,archivo);
    cantPartidasGanadas = partidaCargada;
    fread(&partidaCargada,sizeof(int),1,archivo);
    cantPartidasPerdidas = partidaCargada;
    fclose(archivo);
    cout<<"Partida cargada..."<<endl;
}

void clsJuego::Reiniciar(){
    this->montoActual = montoInicial;
    this->apuesta = 0;
    this->cantPartidasGanadas = 0;
    this->cantPartidasPerdidas = 0;
}

void clsJuego::MostrarEstadisticas(){
    int dinero = 0;
    cout<<" ________________________________________________ "<<endl;
    cout<<"|                                                |"<<endl;
    cout<<"|                  ESTADISTICAS                  |"<<endl;
    cout<<"|________________________________________________|"<<endl;
    cout<<setw(25)<<left<<"|                       |"
        <<setw(24)<<left<<""
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> MONTO INICIAL      |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<montoInicial
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> PARTIDAS GANADAS   |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<cantPartidasGanadas
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> PARTIDAS PERDIDAS  |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<cantPartidasPerdidas
        <<setw(1)<<left<<"|"
        <<endl;
    if (montoInicial-montoActual > 0){
        dinero = montoInicial-montoActual;
    }
    cout<<setw(25)<<left<<"| >> DINERO GANADO      |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<dinero
        <<setw(1)<<left<<"|"
        <<endl;
    dinero = 0;
    if (montoInicial-montoActual < 0){
        dinero = -(montoInicial-montoActual);
    }
    cout<<setw(25)<<left<<"| >> DINERO PERDIDO     |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<dinero
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> MONTO DISPONIBLE   |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<montoActual
        <<setw(1)<<left<<"|"
        <<endl;
    cout<<setw(25)<<left<<"| >> APUESTA            |"
        <<setw(8)<<left<<"        "
        <<setw(16)<<left<<apuesta
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
