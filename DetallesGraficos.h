#ifndef DETALLESGRAFICOS_H_INCLUDED
#define DETALLESGRAFICOS_H_INCLUDED
//LIBRERIA DEDICADA A TODA LA PARTE GRAFICA DEL SISTEMA

void limpiarConsola(){                                          //TERMINADO
    system("cls");
}

void hacerEspacio(int cantidad){                                //TERMINADO
    for (int x = 0; x < cantidad; ++x)
    {
        cout<<endl;
    }
}

void hacerEspacio(){                                            //TERMINADO
    cout<<endl;
}

void esperarIngreso(bool conMensaje){                           //TERMINADO
    if (conMensaje)
    {
        system("pause");
    }
    else
    {
        cin.get();
    }
}

void escribirSlow(string esteTexto){                            //TERMINADO
    const int num = 15;
    const int ms = 50;
    int x = 0;
    cout<<setw(num)<<left<<" ";
    while (esteTexto[x] != '\0')
    {
        cout<<esteTexto[x];
        x++;
    }
    Sleep(ms);
    cout<<endl;
}

void _escribirSlow(string esteTexto){                           //TERMINADO
    const int num = 15;
    int x = 0;
    cout<<setw(num)<<left<<" ";
    while (esteTexto[x] != '\0')
    {
        if (esteTexto[x] != ' ')
        {
            Sleep(5);
        }
        cout<<esteTexto[x];
        x++;
    }
    cout<<endl;
}

void _escribirSlow(string esteTexto, bool conTabulacion){       //TERMINADO
    const int num = 15;
    int x = 0;
    if (conTabulacion)
    {
        cout<<setw(num)<<left<<" ";
    }
    while (esteTexto[x] != '\0')
    {
        if (esteTexto[x] != ' ')
        {
            Sleep(5);
        }
        cout<<esteTexto[x];
        x++;
    }
    cout<<endl;
}

void presentacion(){                                            //TERMINADO
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
    escribirSlow("                                                          ");
    escribirSlow(" SISTEMA DE MATERIAS Y ALUMNOS EDUCATIVO - by GIGEROABLACK ");
    escribirSlow("                                                          ");
    _escribirSlow("         ... Presione enter para continuar ...");
    cin.get();
}

void despedida(){                                               //TERMINADO
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
    escribirSlow("                                                          ");
    escribirSlow("            MUCHAS GRACIAS POR UTILIZAR EL                ");
    escribirSlow("        SISTEMA DE MATERIAS Y ALUMNOS EDUCATIVO           ");
    escribirSlow("                                                          ");
    escribirSlow("                                                          ");
    escribirSlow("                 Hecho por Guillermo Gigeroa              ");
    escribirSlow("                                                          ");
    _escribirSlow("  Presione enter para finalizar ...",false);
    cin.get();
}

#endif // DETALLESGRAFICOS_H_INCLUDED
