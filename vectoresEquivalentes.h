#include <vector>

#ifndef VECTORESEQUIVALENTES_H_
#define VECTORESEQUIVALENTES_H_


bool vec_equivalentes_PRUEBA (std::vector<int> const& vecA, std::vector<int> const& vecB) {
    std::vector<int> vecA_copia = vecA;
    std::vector<int> vecB_copia = vecB;

    std::vector<std::vector<int>::iterator*> vec_iterador;
    std::vector<std::vector<int>::iterator*> vec_iteradorB;  // VECTOR DE PUNTEROS A ITERADORES

    std::vector<int>::iterator* ptr_i = nullptr;  // PUNTERO A ITERADOR

    std::vector<int>::iterator i = vecA_copia.begin();
    std::vector<int>::iterator j = i+1;
    std::vector<int>::iterator z = vecB_copia.begin();  // SON ITERADORES (ASI SE DECLARAN)

    int contA, contB;

        do {
            for(; i < vecA_copia.end(); ++i) {
                contA = 1;
                contB = 0;

                for(; j < vecA_copia.end(); ++j) {
                    if (*i == *j) {
                        if (contA == 1) {
                            ptr_i = &i;
                            vec_iterador.push_back(ptr_i);
                        }
                        ptr_i = &j;
                        vec_iterador.push_back(ptr_i);
                        ++contA;

                    } else if (contA == 1 and j == vecA_copia.end() - 1) {
                        ptr_i = &i;
                        vec_iterador.push_back(ptr_i);
                    }
                }

                for(; z <vecB_copia.end(); ++z) {
                    // ESTOY HACIENDO ALGO MAL AQUI
                    // EL PUNTERO SE VUELVE LOCO
                    if (*z == *i) {
                        ptr_i = &z;
                        vec_iterador.push_back(ptr_i);
                        ++contB;
                    }
                }

                if (contA == contB) {
                    for (auto elem : vec_iterador) {
                        vecA_copia.erase(*elem);
                    }
                    for (auto elem : vec_iteradorB) {
                        vecB_copia.erase(*elem);
                    }
                } else {
                    return false;
                    // break;
                }
            }
        } while (i != vecA_copia.end());
    return true;
}


bool vec_equivalentes_PRUEBA_2 (std::vector<int> const& vecA, std::vector<int> const& vecB) {
    std::vector<int> vecA_copia = vecA;
    std::vector<int> vecB_copia = vecB;

    std::vector<std::vector<int>::iterator> iteradoresA;
    std::vector<std::vector<int>::iterator> iteradoresB;

    do {
        iteradoresA.push_back(vecA_copia.begin());
        for (auto i = vecA_copia.begin() + 1; i < vecA_copia.end(); ++i) {
            if (*i == *iteradoresA.at(0))
                iteradoresA.push_back(i);
        }

        for (auto j = vecB_copia.begin(); j <vecB_copia.end(); ++j) {
            if (*j == *iteradoresA.at(0))
                iteradoresB.push_back(j);
        }

        if (iteradoresA.size() != iteradoresB.size())
            return false;


        for (auto iterador : iteradoresA)
            vecA_copia.erase(iterador);
        for (auto iterador : iteradoresB)
            vecB_copia.erase(iterador);

        iteradoresA.clear();
        iteradoresB.clear();

    } while (not iteradoresA.empty() and not iteradoresB.empty());

    return true;
}


#endif  // VECTORESEQUIVALENTES_H_
