#include <iostream>
//aqui se ponene para ponerlas abajo con desgolse
void hornearPizza();
void hornearPizza(std::string ingrediente_dos,std::string ingrediente_uno);

int main(){
std::cout<<"####################\n";
std::cout<<" pizzeria Eduardos\n";
std::cout<<"####################\n";

hornearPizza("Peperroni","Mozzarella");

    return 0;
}
//aqui podemos poner la informacion que contiene cada una de las variables
void hornearPizza(){
    std::cout<<"aqui esta tu pizza\n";
}
void hornearPizza(std::string ingrediente_uno){
    std::cout<<"aqui esta tu pizza de "<<ingrediente_uno<<"\n";
}
void hornearPizza(std::string ingrediente_uno,std::string ingrediente_dos){
    std::cout<<"aqui esta tu pizza de "<<ingrediente_uno<<" y "<<ingrediente_dos<<"\n";
}
