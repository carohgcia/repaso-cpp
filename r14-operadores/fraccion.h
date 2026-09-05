#pragma once
#include <iostream>
#include <numeric>

class Fraccion {
    private: 
    int num_, den_;
    void reducir();

    public: 
    Fraccion(int n = 0, int d= 1);

    Fraccion operator+(const Fraccion& o) const;
    Fraccion operator*(const Fraccion& o) const;
    bool operator==(const Fraccion& o) const;
    bool operator<(const Fraccion& o) const;

    //función libre amiga que necesita leer num_ y den_
    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);

};