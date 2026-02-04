#include <iostream>
    int main(){
 //operador ternario ?: = es un remplazo de usar el if/else
 //condicion? expresion 1 : expresion 2
    int calificacion = 1000;
    calificacion >=60 ? std::cout<<"APROVADO\n": std::cout<< "REPROBADO\n";

    int numero = 8;
    numero %2 ? std::cout<<"par\n" : std::cout<< "inpar\n";

    bool hambriento = false;
    hambriento ? std::cout<<"tienes hambre come" : std::cout<<"estas lleno gordo";

    return 0;
}