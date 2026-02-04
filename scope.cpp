#include <iostream>
#include <ctime>
//globa se pone afuera de la principal "void"
//usra variables globales no es recomendable mejor en funcion son menos seguras
int num_1 = 3;

void mostrarNumero();

int main(){
    // variables locales dentro de la funcion principal
    int num_1 = 1;
// si se añaden "::" ala variable tomara la funcion global
    std::cout<< ::num_1<<'\n';
    mostrarNumero();



    return 0;
}
void mostrarNumero (){
    int num_1 = 2;
    std::cout<< ::num_1;
}