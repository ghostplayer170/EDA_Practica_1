#include <iostream>
#include "mcd.h"
#include "paridad.h"
#include "invertir.h"
#include "vectoresEquivalentes.h"
#include "vectoresIguales.h"


int main() {
    // std::cout << iterMCD(656, 848) << std::endl;
    // std::cout << recurMCD(1728, 842) << std::endl;

    std::vector<int> v1 {1, 2, 3, 4, 5};
    std::vector<int> v2 {5, 4, 3, 2, 1};
    std::vector<int> v3 {5, 4, 3, 2, 2};
    std::vector<int> v4 {5, 4, 3, 2, 1, 1};

    if (vec_equivalentes_PRUEBA_2(v1, v3))
        std::cout << "EQUIVALENTES" << std::endl;
    else
        std::cout << "NO EQUIVALENTES" << std::endl;

    return 0;
}
