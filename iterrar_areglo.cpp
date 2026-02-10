#include <iostream>
#include <ctime>
int main(){
    std::string nombres[5] {"juan", "pedro", "maria", "luis", "ana"};
    std::string apellidos[5] {"lopez", "gomez", "garcia", "martinez", "sanchez"};
    //en esta forma es mas facil que usar std::cout de uno en uno aqui los tomamos todos de una vez"
    
    /*int logngitud = sizeof(nombres)/sizeof(std::string);
    for(int i=0; i<logngitud; i++){
        std::cout<<nombres[i]<<" "<<apellidos[i]<<'\n';
    }
    std::cout<<nombres[0]<<" "<<apellidos[0]<<'\n';*/
    //forma mas eficiente para el arreglo es usando el ziseof para obtener la longitud del arreglo y asi recorrerlo sin problemas
    char notas [] = {'A', 'B', 'C', 'D', 'F'};
    int longitud_notas = sizeof(notas)/sizeof(char);

    //forma tradicional de recorrer un arreglo
    //char notas [] = {'A', 'B', 'C', 'D', 'F'};
    for(int i = 0; i<longitud_notas; i++){
        std::cout<<notas[i]<<'\n';
    }
    std::cout<<"la longitud del arreglo notas es: "<<longitud_notas<<'\n';


    return 0;
}