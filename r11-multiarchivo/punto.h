#pragma once 

class Punto {
    private:    
        double x, y; 
    public: 
        Punto();
        Punto(double a, double b);
        double distanciaAlOrigen() const; 
        void imprimir() const;
        ~Punto();
};



