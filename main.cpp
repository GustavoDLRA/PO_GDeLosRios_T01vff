#include <iostream>
#include "Articulo.h"

int main() {
    //Declaramos nuestros atributos en el main
    std::string descripcion;
    int sku;
    double precio;
    double costo;
    int artComprados;
    int artVender;

    std::cout<<"Escribe el numero ID de tu producto (su sku)"<<"\n";
    std::cin>>sku;
    std::cout<<"Describe tu producto en una palabra"<<"\n";
    std::cin>>descripcion;
    std::cout<<"¿Cual es el costo del artículo en el que estás interesado?"<<"\n";
    std::cin>>costo;
    std::cout<<"¿Cuantos vas a llevar?"<<"\n";
    std::cin>>artComprados;
    std::cout<<"¿Cuantos artículos planeas vender?"<<"\n";
    std::cin>>artVender;
    std::cout<<"¿A cuanto planeas vender cada uno?"<<"\n";
    std::cin>>precio;

    Articulo elArticulo = *new Articulo(sku,precio,descripcion);
    elArticulo.compra(costo,artComprados);
    elArticulo.venta(artVender);
    elArticulo.verExistencia();
    elArticulo.actualizaPrecio(precio);



    return 0;
}