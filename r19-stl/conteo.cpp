#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

int main() {
    std::vector<std::string> palabras{"sol", "mar", "sol", "luz", "sol", "mar", "cielo"};

    // A) vector
    std::vector<std::string> claves;
    std::vector<int> veces;
    for (const std::string& w : palabras) {
        bool esta = false;
        for (std::size_t i = 0; i < claves.size(); ++i)
            if (claves[i] == w) { veces[i]++; esta = true; break; }
        if (!esta) { claves.push_back(w); veces.push_back(1); }
    }

    std::cout << "A) vector: ";
    for (std::size_t i = 0; i < claves.size(); ++i)
        std::cout << claves[i] << "=" << veces[i] << ' ';
    std::cout << '\n';

    // B) map: la clave hace la búsqueda
    std::map<std::string, int> conteo;
    for (const std::string& w : palabras) conteo[w]++;

    std::cout << "B) map:    ";
    for (const auto& par : conteo)
        std::cout << par.first << "=" << par.second << ' ';
    std::cout << '\n';

    // C) set: responde cuantas distintas y no cuantas veces
    std::set<std::string> d(palabras.begin(), palabras.end());
    std::cout << "C) set:    palabras distintas = " << d.size() << '\n';
}

/* 
Costo de A = O(nk), por cada palabra recorre las claves ya vistas
Costo de B = O(n log k), por cada palabra busca en log k pasos
Costo de C = no aplica porque no resuelve la pregunta

Map conviene más porque es más rápido cuando k crece. Sin embargo, si k 
es muy pequeño y tiene un valor fijo, se podría cambiar a vector.

*/