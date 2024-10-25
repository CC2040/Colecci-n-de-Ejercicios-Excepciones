#include "Adquisición.h"
#include<stdexcept>
#include<fstream>
#include<iostream>

void escribeEnArchivo(std::ofstream& file) {
    if (!file.is_open()) {
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    file << "Hola, mundo!";
}