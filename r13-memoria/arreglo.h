#pragma once

class Arreglo {
public:
    Arreglo(int n) : n_(n), datos_(new int[n]) {}
    Arreglo(const Arreglo& o) : n_(o.n_), datos_(new int[o.n_]) {
        for (int i = 0; i < n_; i++) datos_[i] = o.datos_[i];
    }
    Arreglo& operator=(const Arreglo& o) {
        if (this != &o) {
            delete[] datos_;
            n_ = o.n_;
            datos_ = new int[n_];
            for (int i = 0; i < n_; i++) datos_[i] = o.datos_[i];
        }
        return *this;
    }
    ~Arreglo() { delete[] datos_; }

private:
    int n_;
    int* datos_;
};
