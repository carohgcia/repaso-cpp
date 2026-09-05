#include "figura.h"
#include <vector>

int main(){
    std::vector<Figura*> figuras;
    figuras.push_back(new Circulo(3.0));
    figuras.push_back(new Rectangulo(2.0, 4.0));

    double total = 0.0;
    for (const Figura* f : figuras) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }

    std::cout << "Total: " << total << '\n';

    for (Figura* f : figuras) delete f;

    return 0;
}