#include <iostream>
struct automovil{
    std::string modelo;
    int ano;
    std::string color; 
};
void imprimirautomovil(automovil automovil);
void pintar_auto(automovil &automovil, std::string color);
int main(){
    automovil auto1;
    automovil auto2;
    auto1.modelo = "chevi pop";
    auto1.ano = 2010;
    auto1.color = "gris";

    auto2.modelo = "bochito";
    auto2.ano = 1956;
    auto2.color = "blanco";
    
    pintar_auto(auto1,"negro");
    imprimirautomovil(auto1);
    imprimirautomovil(auto2);

    return 0;
}
void imprimirautomovil(automovil automovil){
    std::cout<<&automovil<<'\n';
    std::cout<<automovil.ano<<'\n';
    std::cout<<automovil.color<<'\n';
    std::cout<<automovil.modelo<<'\n';
    std::cout<<'\n';
}
void pintar_auto(automovil &automovil, std::string color){
    automovil.color = color;

}