#include <string>

#ifndef INVERTIR_H_
#define INVERTIR_H_


std::string invertir(std::string const& texto) {
    std::string resultado;

    // SIN ITERADORES
    // for(int i = texto.size()-1; i>=0; i--){
    //    resultado += texto.at(i);
    //}

    // CON ITERADORES
    for(auto letra = texto.end()-1; letra >= texto.begin(); --letra) {
        resultado += *letra;
    }
    return resultado;
}

#endif  // INVERTIR_H_
