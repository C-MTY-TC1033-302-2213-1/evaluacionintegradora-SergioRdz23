// Sergio Rodríguez Pérez A00838856
#include "Verdura.h"


Verdura::Verdura():Producto(){
    temporada = "Invierno";
}

Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada):Producto(_nombre,_precio,_peso){
    temporada = _temporada;
}
    
string Verdura::str(){
    return nombre + "-$" + to_string(precio) + '-' + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + '-' + temporada;
}
int Verdura::calculaTotalPagar(){
    int total_pagar = 0;
    if(temporada == "Junio"){
        total_pagar = precio * peso * 2;
    } else if(temporada == "Regalado"){
        total_pagar = precio * peso * 3;
    } else{
        total_pagar = precio * peso * 10;
    }
    return total_pagar;
}




