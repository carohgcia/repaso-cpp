#pragma once 
#include <iostream>

class Figura {
    public: 
        virtual double area() const = 0; 
        virtual std::string nombre() const = 0;
        virtual ~Figura() = default;

};

class Circulo : public Figura {
    private: 
        double radio;
    public: 
        Circulo() : radio(4.0) {}
        Circulo (double r) : radio(r) {}
        double area() const override { return 3.14*radio*radio;}
        std::string nombre() const override {return "Círculo";}
        ~Circulo() override = default;
        
};

class Rectangulo : public Figura {
    private: 
        double ancho;
        double largo;
    public: 
        Rectangulo() : ancho(4.0), largo(8.0) {}
        Rectangulo (double a, double l) : ancho(a), largo(l) {}
        double area() const override { return largo*ancho;}
        std::string nombre() const override {return "Rectángulo";}
        ~Rectangulo() override = default;
};