#ifndef INVERTIR_H
#define INVERTIR_H

string invertir(string const& texto){
    string resultado;
    
    //SIN ITERADORES
    // for(int i = texto.size()-1; i>=0; i--){
    //    resultado += texto.at(i);
    //}
    
    //CON ITERADORES
    for(auto letra = texto.end()-1; letra>=texto.begin(); --letra){
        resultado += *letra;
    }
    return resultado;
}

#endif // INVERTIR_H
