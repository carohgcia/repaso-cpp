#include <iostream>

int pares(const int v[], int n){
    int c = 0; 
    for (int i = 0; i < n; i++){
        if (v[i]%2 != 0) c++;
    }
    return c;
}

int main(){
    int vals[6] = {3, 6, 5, 9, 2, 8};
    int num = 6;

    int num_pares = pares(vals, num);
    std::cout << "Pares: " << num_pares;

    return 0; 
}