#pragma once
#include <iostream>
#include <cstddef> // para std::size_t
template <typename T>

class Arreglo {
    private:
    std::size_t n_;
    T* datos_;
    
    public:
        explicit Arreglo(std::size_t n) : n_(n), datos_(new T[n]()) {}
        
        //constructor de copia
        Arreglo(const Arreglo& otro) : n_(otro.n_), datos_(new T[otro.n_]){
            for (std::size_t i = 0; i < n_; ++i) {
                datos_[i] = otro.datos_[i];
            }
        }

        // operator=: misma logica de R13, con T en vez de int
        Arreglo& operator=(const Arreglo& otro) {
            if (this == &otro) return *this;
            delete[] datos_;
            n_ = otro.n_;
            datos_ = new T[n_];
            for (std::size_t i = 0; i < n_; ++i) datos_[i] = otro.datos_[i];
            return *this;
        }

        //destructor
        ~Arreglo() {
            delete[] datos_;
        }

        T& operator[](std::size_t i) {return datos_[i];}
        std::size_t tam() const {return n_;}

};


