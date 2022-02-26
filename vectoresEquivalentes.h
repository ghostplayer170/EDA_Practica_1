#ifndef VECTORESEQUIVALENTES_H
#define VECTORESEQUIVALENTES_H


bool vec_equivalentes_PRUEBA (vector<int> const& vecA, vector<int> const& vecB){
    vector<int> vecA_copia = vecA;
    vector<int> vecB_copia = vecB;
    vector<vector<int>::iterator*> vec_iterador, vec_iteradorB; //VECTOR DE PUNTEROS A ITERADORES
    vector<int>::iterator* ptr_i = nullptr; //PUNTERO A ITERADOR
    vector<int>::iterator i=vecA_copia.begin(), j=i+1, z=vecB_copia.begin(); //SON ITERADORES (ASI SE DECLARAN)
    int contA, contB;
        do{
            for(;i<vecA_copia.end();++i){
                contA=1;
                contB=0;
                for(;j<vecA_copia.end();++j){
                    if(*i==*j){
                        if(contA==1){
                            ptr_i=&i;
                            vec_iterador.push_back(ptr_i);
                        }
                        ptr_i=&j;
                        vec_iterador.push_back(ptr_i);
                        ++contA;
                    }else if(contA==1 and j==vecA_copia.end()-1){
                        ptr_i=&i;
                        vec_iterador.push_back(ptr_i);
                    }
                }
                for(;z<vecB_copia.end();++z){
                    //ESTOY HACIENDO ALGO MAL AQUI
                    //EL PUNTERO SE VUELVE LOCO
                    if(*z==*i){
                        ptr_i=&z;
                        vec_iterador.push_back(ptr_i);
                        ++contB;
                    }
                }
                if(contA==contB){
                    for(auto elem: vec_iterador){
                        vecA_copia.erase(*elem);
                    }
                    for(auto elem: vec_iteradorB){
                        vecB_copia.erase(*elem);
                    }
                }else{
                    return false;
                    break;
                }
            }
        }while(i!=vecA_copia.end());
    return true;
}


#endif // VECTORESEQUIVALENTES_H
