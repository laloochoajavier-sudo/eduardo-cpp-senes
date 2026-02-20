#include <iostream>
#include <ctime>
int main(){
    // el array normal
    std::string comidas[150];
    int tamano = sizeof(comidas) / sizeof(comidas[0]);
    std::string temporal;
    //bucle de indice 
    //se suma ala i +1 para mostrar de primeras el uno en vez del cero
    
    for(int i = 0; i < tamano; i++){
        std::cout<<"ingresa tus  comidas favoritas o presione 's' para salir #"<< i + 1 << ": ";
        std::getline(std::cin, temporal);
        if(temporal=="S" || temporal=="s"){
            break;
        }else{
            comidas[i] = temporal;
        }
    }
        //bucle for each guardando el valor de cada comida en la variable comida y luego se muestra
        std::cout<<"Tus comidas favoritas son: "<<'\n';
        for(int i = 0 ;!comidas[i].empty();i++){
            std::cout<< comidas[i]<<'\n';
            
        }
  
    return 0;
}