#include "punto.h"
#include <iostream>
#include <cmath>

Punto::Punto() : x(0), y(0) {}
Punto::Punto(double a, double b) : x(a), y(b) {}

double Punto::distanciaAlOrigen() const {
    return std::sqrt(x * x + y * y);
}

void Punto::imprimir() const{
    std::cout << "(" << x << ", " << y << ")\n";
    std::cout << distanciaAlOrigen() << '\n';
}

Punto::~Punto() {}
