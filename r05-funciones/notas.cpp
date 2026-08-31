#include <iostream>

void pedirNotas(double n[], int cuantas){
    for(int i = 0; i < cuantas; i++){
        std::cout << "Nota " << i+1 << ": ";
        std::cin >> n[i]; //llena el arreglo con las notas
    }
    
};

double calc_prom(double n[], int cuantas){
    double suma = 0; 
    for (int i = 0; i < cuantas; i++) suma += n[i];
    return suma/cuantas;
}

bool aprobado(double total){
    return total >= 70; 
}

int main(){
    double notas[3];
    pedirNotas(notas, 3);

    double promedio = calc_prom(notas, 3);
    std::cout << "Promedio: " << promedio << std::endl;

    if(aprobado(promedio)){
        std::cout << "Aprovado!" << std::endl;
    } else {
        std::cout << "Reprovado!" << std::endl;
    }

    return 0;
}
