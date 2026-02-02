#include <iostream>
#include <ctime>
int main(){
    srand(time(NULL));
    int num = rand() % 6;
    //estos numeros son aleatorios dentro del rango que tu mismo decidas hasta el 32,726 hasi que es un numero bastante bueno ami parecer
    srand(time(NULL));
    int num2 = (rand() % 20)+1;
    std::cout<<num<<" "<<num2;
    return 0;
}