//
// Created by gusta on 18/01/2018.
//

#ifndef PO_GDELOSRIOS_T01VFF_ARTICULO_H
#define PO_GDELOSRIOS_T01VFF_ARTICULO_H

#include <iostream>

class Articulo {
//Atributos
protected:
    int existencia;
    double precio;
    double costo;
public:
//Atributos Públicos
    int sku;
    std::string descripcion;

//***Métodos***
    void compra(int artComprados, double c);

    bool venta(int artVender);

    int verExistencia();

    void actualizaPrecio( double precio);



//Constructores
    Articulo();
//Articulo( int sku, double precio, std::string descripcion);
    Articulo(int sku, double precio, std::string descripcion);
};



#endif //PO_GDELOSRIOS_T01VFF_ARTICULO_H
