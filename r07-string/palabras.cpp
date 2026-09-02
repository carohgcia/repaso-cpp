#include <iostream>
#include <string>


int contarPalabras(const std::string& s) {
    int cuenta = 0;
    bool en_palabra = false;
    for(char c : s){
        if(c == ' ') {
            en_palabra = false;
        } else if (!en_palabra) {
            en_palabra = true;
            cuenta++;
        }
    }
    return cuenta;
}

std::string voltear(const std::string& s){
    std::string new_s;
    for (int i = s.size(); i > 0; i--){
        new_s += s[i-1];       
    }
    return new_s;
}

int main(){
    const std::string a = "hola  como     estas";
    int num_palabras = contarPalabras(a);
    std::string invertida = voltear(a);

    std::cout << "Palabras: " << num_palabras << std::endl;
    std::cout << "Invertida: " << invertida << std::endl;
    
  
    return 0;
}


