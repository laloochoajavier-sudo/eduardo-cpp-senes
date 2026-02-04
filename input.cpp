#include <iostream>
int main (){
//cout << (operador de insercion)
//cin >> (operador de extreacion)
   
    int edad;

    std::cout<< "cual es tu edad " ;
    std::cin >> edad;
    //getline sive para que el usuario agrege espacio en el texto ejemplo eduardo javier getline(std::cin>>std::ws,nombre);
    std:: cout<< "tu edad es "<< edad << " anos";
    return 0;
}