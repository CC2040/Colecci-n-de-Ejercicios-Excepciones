#include "Propagacion_explicita.h"
#include <iostream>

//Funciones
void func3() {
    throw std::runtime_error("Error en func3");
}

void func2() {
    func3();
}

void func1() {
    func2();
}