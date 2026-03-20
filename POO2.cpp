#include <iostream>
class automoviles{
    public:
std::string marca;
std::string modelo;
int ano;
std::string color;

void acelerar(){
    std::cout<<"pizas el accelerador!"<<'\n';
}
void freno (){
    std::cout<<"Estas frenando!"<<'\n';
}
};
int main(){
automoviles automoviles1;


automoviles1.marca = "mercedes";
automoviles1.ano = 2024;
automoviles1.modelo = "raptor 54+";

std::cout<<automoviles1.marca<<'\n';
std::cout<<automoviles1.ano<<'\n';
std::cout<<automoviles1.modelo<<'\n';

automoviles1.acelerar();
automoviles1.freno();




    return 0;
}