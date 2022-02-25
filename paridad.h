#ifndef PARIDAD_H_
#define PARIDAD_H_


bool iterParidad(int numero) {

    do {
        numero -= 2;
    } while(numero > 0);

    if (numero == 0)
        return true;
    else
        return false;
}


bool recurParidad(int numero) {

    if (numero == 0)
        return true;
    else if (numero == -1)
        return false;

    numero -= 2;
    return recurParidad(numero);
}

#endif  // PARIDAD_H_
