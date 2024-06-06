// Sergio Rodríguez Pérez A00838856
#include "Combo.h"

Combo::Combo():Producto(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave):Producto(_nombre,_precio,_peso){
    clave = _clave;
}

string Combo::str(){
    return nombre + "-$" + to_string(precio) + '-' + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + '-' + to_string(clave);
}
int Combo::calculaTotalPagar(){
    int total_pagar = 0;
    total_pagar = precio * peso * clave;
    if (clave == 1){
        total_pagar -= (total_pagar / 100) * 25;
    } else if (clave == 2){
        total_pagar -= (total_pagar / 100) * 30;
    }
    return total_pagar;
}