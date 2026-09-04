#pragma once
#include <iostream>

class Arreglo {
    private:
    int* datos;
    int n;
    
    public:
        //constructor normal
        Arreglo(int tam) : datos(new int[tam]), n(tam){
            std::cout << "reservo " << datos << "\n";
        }

        //constructor de copia
        Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n){
            for (int i = 0; i < n; ++i) {
                datos[i] = otro.datos[i];
            }
                std::cout << "copio y reservo " << datos << "\n";
        }

        Arreglo& operator=(const Arreglo& otro) {
            if (this == &otro) return *this;
            delete[] datos; 
            n = otro.n;
            datos = new int[n];
            for (int i = 0; i < n; ++i) {
                datos[i] = otro.datos[i];
            }
            std::cout << "asigno y reservo " << datos << "\n";
            return *this;
        }

        //métodos
        void set(int i, int v) { datos[i] = v; }
        int get(int i) const { return datos[i]; }
        int tam() const { return n; }

        //destructor
        ~Arreglo() {
            std::cout << "libero " << datos << "\n";
            delete[] datos;
        }

};


