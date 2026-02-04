#include <iostream>
#include <ctime>

std::string concatenarCadenas (std::string string1,std::string string2);

int main(){
    std::string nombre = "Eduardo";
    std::string apellido = "Ochoa";

   std::string Ncompleto = concatenarCadenas(nombre,apellido);

   std::cout<<"hola "<<Ncompleto;

    return 0;
}
std::string concatenarCadenas (std::string string1,std::string string2){
    return string1 +" "+ string2 ;
}

