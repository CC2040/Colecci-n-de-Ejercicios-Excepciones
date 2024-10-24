#include "bandera.h"
#include <iostream>

// Variable global que actúa como bandera de error
bool errorFlag = false;

int divide(int a, int b) {
    if (b == 0) {
        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}

