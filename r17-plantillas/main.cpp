#include "arreglo.hpp"
#include <string>

int main(){
    Arreglo<double> d(3);
    d[0] = 1.5;
    d[1] = 2.5;
    d[2] = 3.5;

    Arreglo<double> d2 = d;
    d2[0] = 99.0; // modificar d2 no debe tocar d

    std::cout << "Arreglo con double\n";
    std::cout << "d[0] = " << d[0] << '\n';
    std::cout << "d2[0] = " << d2[0] << '\n';

    Arreglo<std::string> s(2);
    s[0] = "hello";
    s[1] = "world";

    Arreglo<std::string> s2(2);
    s2 = s; // usa operator =
    s2[0] = "adios";

    std::cout << "Arreglo con string\n";
    std::cout << "s[0] = " << s[0] << '\n';
    std::cout << "s2[0] = " << s2[0] << '\n';
    std::cout << "Tamaño de s2 = " << s2.tam() << '\n'; // copiado de s

    return 0;
}