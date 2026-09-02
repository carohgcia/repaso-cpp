#include <iostream>
#include <string>

class Reserva {
    private: 
        std::string sala = "A1"; 
        int personas = 1; 
        int horaInicio = 0;
        int horaFin = 3; 
    public: 
        bool asignarSala(const std::string& s) {
            if(s.empty()) return false; 
            sala = s; 
            return true;
        }
        bool asignarPersonas(int p){
            if (p < 1 || p > 20) return false; 
            personas = p; 
            return true;
        }
        bool asignarHorario(int inicio, int fin) {
            if (inicio < 0 || fin > 23 || inicio > fin) return false;
            horaInicio = inicio; 
            horaFin = fin; 
            return true; 

        }

        std::string getSala() const {return sala;}
        int getPersonas() const     {return personas;}
        int getHoraInicio() const   {return horaInicio;}
        int getHoraFin() const      {return horaFin;}

};

int main() {
    Reserva r;
    r.asignarSala("Sala A");
    r.asignarPersonas(10);
    r.asignarHorario(15, 11); // no es válido   

    std::cout << "Sala: " << r.getSala() << std::endl;
    std::cout << "Personas: " << r.getPersonas() << std::endl;
    std::cout << "Horario: " << r.getHoraInicio() << " - " << r.getHoraFin() << std::endl;
    return 0; 
}

