#include <iostream>
#include "mcd.h"
#include "paridad.h"
#include "invertir.h"
#include "vectoresEquivalentes.h"
#include "vectoresIguales.h"


int main() {

    std::cout << recurParidad(2) << std::endl;
    std::cout << recurParidad(3) << std::endl;
    std::cout << recurParidad(4) << std::endl;
    std::cout << recurParidad(5) << std::endl;

    return 0;
}
