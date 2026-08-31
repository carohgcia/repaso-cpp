#include <iostream>

int suma(const int v[], int n){
    int s = 0; 
    for(int i = 0; i < n; i++){
        s += v[i];
    }
    return s; 
}

int main(){
    const int vals[6] = {3, 6, 5, 9, 2, 8};
    int num = 6;

    int sum = suma(vals, num);
    std::cout << "Suma: " << sum;

    return 0; 
}



