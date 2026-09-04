#include "arreglo.h"

int main(){
    Arreglo a(3);
    a.set(0,10);

    Arreglo b = a; 
    b.set(0,99);



    std::cout << "b[0] = " << b.get(0) << "\n";
    std::cout << "fin\n";

    return 0; 
}