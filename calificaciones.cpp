#include <iostream>
int main(){
    char calificacion;
    std::cout<<"porfavor introdusca la calificacion correspondiente: ";
    std::cin>> calificacion ;
    switch (calificacion)
    {
    case 'a':
        std::cout<<"lo hisiste muy bien";
        break;
    case 'b':
        std::cout<<"bastante bien";
        break;
    case 'c':
        std::cout<<"al menos es algo";
        break;
    case 'd':
        std::cout<<"ponle empeno";
        break;
    case 'f':
        std::cout<<"lo hisiste fatal";
        break;
    default:
        std::cout<<"porfavor ingrese una letra de la A ala F";
    }
    return 0;
}