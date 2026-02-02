#include <iostream>
#include <cmath>
int main(){
    double a;
    double b;
    double c;

    std::cout<< "ingrese el lado A: ";
    std::cin>> a;
//se puede achicar la formula de este triangulo usnado formula mateatica de razonamiento el <cmath> sirve para dar un acceso a algunas funciones
    std::cout<< "ingrese el lado B: ";
    std::cin>> b;
    
    c =sqrt(pow(a, 2)+pow(b, 2));
    
    std::cout<<"C: "<<c;
    return 0;
}