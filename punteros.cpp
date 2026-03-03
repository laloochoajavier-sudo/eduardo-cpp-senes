#include <iostream>
#include <ctime>
int main(){
    std::string nombre [5]{"alex","maximus","carla","Emikukis","Eduardo"};
    int edad [5]{24,18,22,18,16};
    //en los arreglos no se debe de poner el & para la dirrecion el mismo arreglo la suelta
    std::string pizzaGratis[5]{"pizza gratis!_1","pizza gratis!_2","pizza gratis!_3","pizza gratis!_4","pizza gratis!_5"};
    //el * es para declarar el puntero seguido de una p y el nombre de la funcion que usaras
    // el & sirve para tomar la direccion de la variable en computadora
    std::string *pNombre = nombre;
    std::string *pPizzaGratis = pizzaGratis;
    int *pEdad = edad;
    //ptr es un indice en punteros :)
    std::cout<<"nombres:"<<'\n';
    for(auto ptr = pNombre; ptr<pNombre+5;++ptr){
        std::cout<<*ptr<<'\n';
    }
    std::cout << "\nEdades:\n";
    for (int i = 0; i < 5; ++i)
        std::cout << *(pEdad + i) << '\n';

    std::cout << "\nPromos:\n";
    for (int i = 0; i < 5; ++i)
        std::cout << pPizzaGratis[i] << '\n';   // también funciona así


    return 0;
}