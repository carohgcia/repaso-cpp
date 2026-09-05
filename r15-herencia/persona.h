#pragma once 
#include <string>
#include <iostream>

class Persona {
    protected: 
        std::string nombre;
    public: 
        Persona() : nombre("John") {}
        Persona(const std::string& n) : nombre(n) {
            std::cout << "Persona: " << n << '\n';
        }
        ~Persona(){
            std::cout << "~Persona\n";
        }

};

class Empleado : public Persona {
    protected: 
        double sueldo;
    public: 
        Empleado(const std::string& n, double s) : Persona(n), sueldo(s) {
            std::cout << "Empleado" << '\n';
        }
        ~Empleado(){
            std::cout << "~Empleado\n";
        }

};

class Gerente : public Empleado {
    private: 
        int clientes;
    public: 
        Gerente(const std::string& n, double s, int c) : Empleado(n, s), clientes(c) {
            std::cout << "Gerente" << '\n';
        }
        ~Gerente(){
            std::cout << "~Gerente\n";
        }
    
};
