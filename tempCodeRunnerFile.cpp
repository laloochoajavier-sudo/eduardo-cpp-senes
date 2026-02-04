#include <iostream>

int main(){
    double temp;
    char op;
    std::cout<<"***** conversion de temperatura ****** \n";
    std::cout<<"F = farendheit \n";
    std::cout<<"C = celsius \n";

    std::cout<<"A que unidad de temperatura desea convertir?\n";
    std::cin>>op;

    if(op == 'F'|| op == 'f'){
        std::cout<<"ingrese la temperatura en celcius";
        std::cin>> temp;
        temp = 1.8 * temp +32;
        std::cout<<"la temperatura es"<< temp <<"grados farenheit\n";
    }
    else if (op == 'C'|| op == 'c'){
        std::cout<<"ingrese la temperatura en farendheit";
        std::cin>> temp;
        temp = ( temp -32) /1.8;
        std::cout<<"la temperatura es"<< temp <<"grados celsius\n";
     }
    else{
        std::cout<<"porfavor solo ingrese c o f ";
   }
    std::cout<<"***************************************";
    return 0;
}