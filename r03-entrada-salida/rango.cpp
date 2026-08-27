#include <iostream>
#include <limits>

void limpiarLinea(){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int leerEnRango(std::string msg, int lo, int hi) {
    int n = 0; 
    while (true) {
        std::cout << msg;
        bool isanum = static_cast<bool>(std::cin >> n);
        limpiarLinea();

        if (isanum && n >= lo && n <= hi) {
                return n; 
        }

        std::cout << "Entrada inválida" << std::endl;
    }
}

int main(){
    std::string mensaje = "Escribe un número entre 1 y 100: ";
    int low = 1; 
    int high = 100; 

    int resultado = leerEnRango(mensaje, low, high);
    std::cout << resultado << std::endl;

    return 0;
}

