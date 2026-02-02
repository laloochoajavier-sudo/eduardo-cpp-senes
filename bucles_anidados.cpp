#include <iostream>
int main(){
 // un bucle anidado es un bucle dentro de otro bucle por eso el anidados
    int filas;
    int columnas;
    char simbolo;

    std::cout<<"ingrese las filas: ";
    std::cin>> filas;

    std::cout<<"columnas: ";
    std::cin>> columnas;

    std::cout<<"simbolo: ";
    std::cin>> simbolo;


    for(int i=1; i<= filas; i++){
    for (int j=1;j <=columnas;j++){
        std::cout<<simbolo<<" ";
    } 
    std::cout<<'\n';
}
    return 0;
}