#include "Reactivacion.h"
#include<iostream>
#include<stdexcept>

//Cambio nombre de la funcion ya que da conflicto con la del ejercicio 4
void lanzaExcepcion2() {
    throw std::runtime_error("Error en la funcion lanzaExcepcion");
}