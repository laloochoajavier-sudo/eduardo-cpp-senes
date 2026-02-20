#include <iostream>
#include <ctime>
int main(){
    std::string palabras[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    int tamaño = sizeof(palabras)/sizeof(palabras[0]);
    std::string temporal;
    for(int i = 0; i < tamaño; i++){
        std::cout<<"ingresa la palabra que mas usas diariamente o oprima x para salir #"<< i + 1 << ": ";
        std::getline(std::cin, temporal);
        if(temporal == "X" || temporal == "x"){
            break;
        }else{
            palabras[i] = temporal;
        }
    }
    std::cout<<"las palabras que mas usas diariamente son: "<<'\n';
    //"!" este signo es para booleanos condiciones especificas para false o true, en este caso es para decir que mientras palabras[i] no este vacio se siga mostrando el valor de cada palabra
    //.empty()sirve para hacer que el string se pueda correr de forma que los espacios no queden vacios y se pueda mostrar el valor de cada palabra
    for(int i= 0; !palabras[i].empty(); i++){
        std::cout<<palabras[i]<<'\n';
       
    }



    return 0;

}