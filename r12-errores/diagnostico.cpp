
//Cinco mensajes, cinco diagnósticos

/* 
1) p1.cpp:9:7: error: expected initializer before 'origen'
    Una declaración anterior no terminó, falta el punto y coma arriba de la línea 9.

2) /usr/bin/ld: undefined reference to `Cuenta::depositar(double)'
    el método depositar no está definido en ningún lado

3) p3.cpp:6:24: error: cannot convert 'std::string' to 'int'
    Se llamó una función que espera int con un string.

4) p4.cpp:3:10: error: 'vector' is not a member of 'std'
    No pusiste #include <vector>

5) /usr/bin/ld: multiple definition of `doble(int)'
    El cuerpo de doble está en un header incluido por dos .cpp

*/