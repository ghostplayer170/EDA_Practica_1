#include <iostream>
#include "mcd.h"
#include "paridad.h"
#include "invertir.h"
#include "vectoresEquivalentes.h"
#include "vectoresIguales.h"


int main() {

    std::cout << iterMCD(656, 848) << std::endl;
    std::cout << recurMCD(1728, 842) << std::endl;

    return 0;
}
