#ifndef FUNCIONES_AUXILIARES_H_INCLUDED
#define FUNCIONES_AUXILIARES_H_INCLUDED
//LIBRERIA DEDICADA A LA OPTIMIZACION DEL SISTEMA Y PRUEBA CONTRA ERRORES

bool esRespuesta(char estaRespuesta[30]){                       //TERMINADO
    if(estaRespuesta[0] != '\0' || estaRespuesta[0] != ' '){
            if (estaRespuesta[1] == '\0'){
                return true;
            }
    }
    return false;
}

bool deseaContinuar(string mensajeParaMostrar){                 //TERMINADO
    limpiarConsola();
    cout<<mensajeParaMostrar<<endl;
    cout<<endl;
    char ingreso[30];
    ingreso [0] = ' ';
    ingreso [1] = '\0';
    cout<<"Desea continuar? S/N: ";
    cin.getline(ingreso,30);
    while(!esRespuesta(ingreso)){
        limpiarConsola();
        cout<<mensajeParaMostrar<<endl;
        cout<<endl;
        cout<<"Desea continuar? S/N: ";
        cin.getline(ingreso,30);
        }
    while(true){
        switch(ingreso[0]){
        case 's':
        case 'S':
        case '\0':
            {
                limpiarConsola();
                return true;
            }break;
        case 'n':
        case 'N':
            {
                limpiarConsola();
                return false;
            }break;
        default:
            {
                limpiarConsola();
                return true;
            }break;
        }
    }
    cout<<"Error"<<endl;
    return false;
}

void ceroAtras(int esteNum){                                    //TERMINADO
    if (esteNum < 10){
        cout<<"0"<<esteNum;
    }
    else{
        cout<<esteNum;
    }
}

bool esNumero(char esteCaracter){
    if (esteCaracter >= '0' && esteCaracter <= '9'){
        return true;
    }
    return false;
}

bool validarSiEsNumero(char *esto){
    int x = 0;
    while(esto[x] != '\0'){
        if(!esNumero(esto[x])){
            return false;
        }
        x++;
    }
    return true;
}

bool esLetra(char esteCaracter){
    if ((esteCaracter >= 'a' && esteCaracter <= 'z')||(esteCaracter >= 'A' && esteCaracter <= 'Z')||esteCaracter == 32){
        return true;
    }
    return false;
}

bool validarSiSonLetras(char *esto){
    int x = 0;
    if(esto[0] == '\0'){
        return false;
    }
    while(esto[x] != '\0'){
        if(!esLetra(esto[x])){
            return false;
        }
        x++;
    }
    return true;
}

bool validarOpcionMenus(char *opcion, int *pasarAlNumero){
    if(esRespuesta(opcion)){
        if(esNumero(opcion[0])){
            switch (opcion[0])
            {
            case '0':
                {
                    *pasarAlNumero = 0;
                    return true;
                }break;
            case '1':
                {
                    *pasarAlNumero = 1;
                    return true;
                }break;
            case '2':
                {
                    *pasarAlNumero = 2;
                    return true;
                }break;
            case '3':
                {
                    *pasarAlNumero = 3;
                    return true;
                }break;
            case '4':
                {
                    *pasarAlNumero = 4;
                    return true;
                }break;
            case '5':
                {
                    *pasarAlNumero = 5;
                    return true;
                }break;
            case '6':
                {
                    *pasarAlNumero = 6;
                    return true;
                }break;
            case '7':
                {
                    *pasarAlNumero = 7;
                    return true;
                }break;
            case '8':
                {
                    *pasarAlNumero = 8;
                    return true;
                }break;
            case '9':
                {
                    *pasarAlNumero = 9;
                    return true;
                }break;
            default:
                {
                    *pasarAlNumero = -1;
                    return true;
                }break;
            }
        }
    }
    return false;
}

#endif // FUNCIONES_AUXILIARES_H_INCLUDED
