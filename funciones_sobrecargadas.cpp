#include <iostream>

void hornearPizza();
void hornearPizza(std::string ingrediente_dos,std::string ingrediente_uno);

int main(){
std::string opcion1;
std::string opcion2;
std::string v;

std::cout<<"####################\n";
std::cout<<" pizzeria Eduardos\n";
std::cout<<"####################\n";

hornearPizza("Peperroni","Mozzarella");

    return 0;
}
void hornearPizza(){
    std::cout<<"aqui esta tu pizza\n";
}
void hornearPizza(std::string ingrediente_uno){
    std::cout<<"aqui esta tu pizza de "<<ingrediente_uno<<"\n";
}
void hornearPizza(std::string ingrediente_uno,std::string ingrediente_dos){
    std::cout<<"aqui esta tu pizza de "<<ingrediente_uno<<" y "<<ingrediente_dos<<"\n";
}
