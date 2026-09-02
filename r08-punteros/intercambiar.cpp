#include <iostream>
using namespace std;

void intercambiar1(int a, int b){ // pasar por valor
    int temp = a;
    a = b; 
    b = temp;
}

void intercambiar2(int* a, int*b){ // recibe direcciones así que hay que desreferenciar
    int temp = *a;
    *a = *b; 
    *b = temp;  
}

void intercambiar3(int& a, int& b){ // por referencia: son alias directos de las variables originales
    int temp = a;
    a = b; 
    b = temp;
}

int main(){
    int x = 1, y = 2;
    intercambiar1(x, y);
    cout << x << ' '<< y << '\n'; // no cambia nada afuera porque son copias
    intercambiar2(&x, &y);
    cout << x << ' '<< y << '\n'; // si intercambian
    intercambiar3(x, y);
    cout << x << ' '<< y << '\n'; // se intercambian de nuevo
    return 0; 
}