#include <iostream>
int main(){
    int edad;

    std::cout<<"ingresa tu edad ";
    std::cin>> edad;
    if (edad >= 100) {
        std::cout<<"eres demasiado mayor para este sitio";
    }
    else if(edad >= 18){
        std::cout<<"eres mayor de edad puedes ingresar ";
    }
    else if (edad <0) {
        std::cout<<"aun no has nacido";
    }
    else{
        std::cout<<"no puedes ingresar eres menor de edad largo bebe";
    }

    return 0;
}