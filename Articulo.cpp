//
// Created by gusta on 18/01/2018.
//

#include "Articulo.h"
Articulo::Articulo() {
    this->costo = 0;
    this->descripcion = "";
    this->existencia = 0;
    this->precio = 0;
    this->sku = 0;
}

Articulo::Articulo(int sku, double precio, std::string descripcion) {
    this->costo = 0;
    this->descripcion = descripcion;
    this->existencia = 0;
    this->precio = precio;
    this->sku = sku;
}
void Articulo::compra(int artComprados, double costo) {
    this->existencia= existencia+artComprados;
    this->costo = costo*artComprados;
    std::cout<<"tienes un inventario de "+existencia<<"\n";
    std::cout<<"su costo fue de: "<<"\n";
    std::cout<<this->costo<<"\n";
}



bool Articulo::venta(int artVender) {
    bool status = true;
    if(existencia<artVender){
        status = false;
        std::cout<<"No cuentas con existencias suficientes"<<"\n";
    }
    if(existencia>=artVender) {
        status=true;
        std::cout<<"Sí cuentas con las existencias suficientes"<<"\n";
    }
}
int Articulo::verExistencia() {
    return   this->existencia;
}
void Articulo::actualizaPrecio(double precio) {
    this->precio = precio;
}