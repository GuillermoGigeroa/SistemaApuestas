#ifndef CLSJUEGO_H
#define CLSJUEGO_H

class clsJuego{
private:
    int montoInicial;
    int apuesta;
    int montoActual;
    int cantPartidasGanadas;
    int cantPartidasPerdidas;
    int dineroGanado;
    int dineroPerdido;
public:
    clsJuego(int montoInicial);
    void Perder();
    void Ganar();
    void Apostar(int apuesta);
    void Guardar();
    void Cargar();
    void Reiniciar();
    void MostrarEstadisticas();
    int getMontoInicial(){return montoInicial;}
    int getApuesta(){return apuesta;}
    int getMontoActual(){return montoActual;}
    int getCantPartidasGanadas(){return cantPartidasGanadas;}
    int getCantPartidasPerdidas(){return cantPartidasPerdidas;}
    int getDineroGanado(){return dineroGanado;}
    int getDineroPerdido(){return dineroPerdido;}
    void setMontoInicial(int);
    void setApuesta(int);
    void setMontoActual(int);
    void setCantPartidasGanadas(int);
    void setCantPartidasPerdidas(int);
    void setDineroGanado(int);
    void setDineroPerdido(int);
};

#endif // CLSJUEGO_H
