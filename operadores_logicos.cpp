#include <iostream>
int main(){
// && = comprueba si dos condiciones logicas son verdaderas
// || =comprueba si almenos una de las dos condiciones es verdadera
// ! = invierte el estado logico de su operando
    int temperatura;

    std::cout<<"cual es la temperatura: ";
    std::cin>>temperatura;

    if(temperatura > 23 && temperatura <30){
        std::cout<<"la temperatura es buena\n";
    }
    else{
        std::cout<<"la temperatura es mala\n";
    }

    if(temperatura <=23 || temperatura >=30){
        std::cout<<"la temperatura es mala\n";
    }
    else{
        std::cout<<"la temperatura es buena\n";
    }

    if(temperatura <=23 != temperatura >=30){
        std::cout<<"la temperatura es mala\n";
    }
    else{
        std::cout<<"la temperatura es buena\n";
    }
    return 0;
}