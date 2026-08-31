#include <iostream>

int maximo(const int v[], int n){
    int mejor = 0; 
    for(int i = 0; i < n; i++){
        if (v[i] > mejor) 
            mejor = v[i];
    }
    return mejor;
}

int main(){
    int vals[6] = {3, 6, 5, 9, 2, 8};
    int num = 6;

    int max = maximo(vals, num);
    std::cout << "Max: " << max;

    return 0; 
}