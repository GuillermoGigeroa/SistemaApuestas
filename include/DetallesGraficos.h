#ifndef DETALLESGRAFICOS_H
#define DETALLESGRAFICOS_H

class DetallesGraficos{
public:
    void limpiarConsola();
    void esperarIngreso(bool conMensaje);
    void hacerEspacio(int cantidad);
    void hacerEspacio();
    void escribirSlow(char *esteTexto);
    void _escribirSlow(char *esteTexto);
    void _escribirSlow(char *esteTexto, bool conTabulacion);
    void presentacion();
    void despedida();
};

#endif // DETALLESGRAFICOS_H
