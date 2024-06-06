// Sergio Rodríguez Pérez A00838856
#include "Producto.h"

Producto::Producto(){
    nombre = "Sergio Rodríguez Pérez";
    precio = 838856;
    peso = 18;
}
Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

void Producto::setNombre(string _nombre){
    nombre = _nombre;
}
void Producto::setPrecio(int _precio){
    precio = _precio;
}
void Producto::setPeso(int _peso){
    peso = _peso;
}

string Producto::getNombre(){
    return nombre;
}
int Producto::getPrecio(){
    return precio;
}
int Producto::getPeso(){
    return peso;
}

string Producto::str(){
    return nombre + "-$" + to_string(precio) + '-' + to_string(peso) + "-$" + to_string(Producto::calculaTotalPagar());
}

int Producto::calculaTotalPagar(){
    int total_pagar = 0;
    total_pagar = precio * peso;
    return total_pagar;
}