#ifndef EXCEPCIONES_PERSONALIZADAS_H
#define EXCEPCIONES_PERSONALIZADAS_H
#include <iostream>
#include <string>

void lanzaExcepcion();

// Definición de la clase de excepción personalizada
class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};




#endif //EXCEPCIONES_PERSONALIZADAS_H
