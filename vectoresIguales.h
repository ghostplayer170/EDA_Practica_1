#ifndef VECTORESIGUALES_H_
#define VECTORESIGUALES_H_

bool vec_iguales (vector<int> const& vecA, vector<int> const& vecB){
    bool igualdad=true;
    if(vecA.size()==vecB.size()) {
        for(int i{0}; i<vecA.size(); i++){
            if(vecA.at(i)!=vecB.at(i)){
                igualdad=false;
                return igualdad;
            }
        }
        return igualdad;
    }
    return igualdad=false;
}

#endif  // VECTORESIGUALES_H_
