#include <iostream>
#include <ctime>

int main(){
    const int tam = 100;
    std::string comidas[tam];
    //fill(inicio, fin, valor) llena un rango de elementos con un valor especifico
    //sirve para llenar un arreglo con un valor especifico, o para llenar una parte del arreglo con un valor especifico dependiendo del rango que le demos
    fill(comidas,comidas + tam/3, "Pizza");
    fill(comidas + tam/3 , comidas + tam /3*2, "Hamburguesa");
    fill(comidas + tam/3*2, comidas + tam, "hot dog");
    
    //bucle foreach para mostrar el arreglo antes de llenarlo con un nuevo valor
    for(std::string comida : comidas)
        std::cout << comida << '\n';
    std::cout << std::endl;


    return 0;
}