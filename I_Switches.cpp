#include <iostream>
int main(){

    int mes;
    std::cout<< "ingresa el mes (1-12): ";
    std::cin>>mes;
    
    switch (mes){
        case 1:
            std::cout<<"es enero";
        break;

        case 2:
            std::cout<<"es febrero";
        break;

         case 3:
            std::cout<<"es marzo";
        break;

        case 4:
            std::cout<<"es abril";
        break;

        case 5:
            std::cout<<"es mayo";
        break;

         case 6:
            std::cout<<"es junio";
        break;

         case 7:
            std::cout<<"es julio";
        break;
        
         case 8:
            std::cout<<"es agosto";
        break;

         case 9:
            std::cout<<"es septiembre";
        break;

         case 10:
            std::cout<<"es octubre";
        break;
        
         case 11:
            std::cout<<"es noviembre";
        break;
        
         case 12:
            std::cout<<"es diciembre";
        break;

        default:
            std::cout<<("porfavor solo ingrese numeros del 1 al 12");
    }
    
    


    return 0;
}