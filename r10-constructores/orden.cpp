#include <iostream>
#include <string>


class Sesion {
    std::string nombre;
public:
    Sesion() : nombre("sin nombre") {
        std::cout << "Sesion(" << nombre << ")\n";
    }
    Sesion(std::string n) : nombre(n) {
        std::cout << "Sesion(" << nombre << ")\n";
    }
    Sesion(std::string n, int x) : nombre(n) {
        std::cout << "Sesion(" << nombre << ", " << x << ")\n";
    }
    ~Sesion() {
        std::cout << "~Sesion(" << nombre << ")\n";
    }
};


class Sesion global("global"); //constructores y destructor imprimen

int main(){
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2);}
    std::cout << "--- medio ---\n";
    Sesion d;

    return 0;
}

//Sesion global
//Sesion a
//Sesion b
//Sesion c
//~Sesion c
//~Sesion b
// --- medio --- 
//Sesion d
//~Sesion d
//~Sesion a
//~Sesion global