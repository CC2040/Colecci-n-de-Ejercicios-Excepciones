#include "no_interceptadas.h"
#include<iostream>
#include<stdexcept>

void lanzaExcepcion3() {
    throw std::runtime_error("Error en la funcion lanzaExcepcion");
}