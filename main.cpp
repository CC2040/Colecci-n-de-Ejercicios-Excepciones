#include <iostream>
#include "Ejercicio1/bandera.h"
#include "Ejercicio2/Excepciones.h"
#include "Ejercicio3/Propagacion_explicita.h"
#include "Ejercicio4/excepciones_personalizadas.h"


int main() {

    //Ejercicio 1
    int result = divide(5, 0);
    // Se verifica regularmente la bandera de error
    if (errorFlag) {
        std::cout << "Ocurrio un error: division por cero." << std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }

//

    //Ejercicio 2
    // Uso de la versión que devuelve un valor de error
    int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::cout << "Error: division por cero." << std::endl;
    }

    // Uso de la versión que lanza una excepción
    try {
        int resultException = divideException(5, 0);
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Excepcion: " << e.what() << std::endl;
    }

    //Ejercicio 3
    try {
        func1();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion capturada en main: " << e.what() << std::endl;
    }

    //Ejercicio 4
    try {
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        std::cout << "Excepcion capturada: " << e.what() << std::endl;
    }

    return 0;
}