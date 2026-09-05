#include "fraccion.cpp"


int main(){
    Fraccion a(1,2);
    Fraccion b(1,3);
    Fraccion c(6,-8);

    std::cout << "Fracción a = " << a << "\n";
    std::cout << "Fracción b = " << b << "\n";
    std::cout << "Fracción c = " << c << "\n";

    std::cout << "a + b = " << (a + b) << "\n";
    std::cout << "a * b = " << (a * b) << "\n";

    Fraccion d(4,8);
    std::cout << "d = a ? ----> " << (a == d ? "true" : "false") << "\n";

    return 0;
}
