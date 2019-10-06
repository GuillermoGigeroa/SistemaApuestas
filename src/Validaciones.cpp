#include "DetallesGraficos.h"
#include "Validaciones.h"
#include <iostream>
using namespace std;

bool Validaciones::esNumero(char esteCaracter){
    if (esteCaracter >= '0' && esteCaracter <= '9'){
        return true;
    }
    return false;
}

bool Validaciones::validarSiEsNumero(char *esto){
    int x = 0;
    while(esto[x] != '\0'){
        if(!esNumero(esto[x])){
            return false;
        }
        x++;
    }
    return true;
}
