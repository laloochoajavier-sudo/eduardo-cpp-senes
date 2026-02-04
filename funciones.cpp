#include <iostream>
#include <ctime>

void happy_bertday(std::string nombre,int edad);

int main(){
   
    std::string nombre = "eduardo";

    int edad = 16;
    happy_bertday(nombre,edad);

    return 0;
}
void happy_bertday(std::string nombre,int edad){
    // una funcion re utilixable indispensable para no repetir codigo; madre mia estiy traumado con el . y ,
    std::cout<<"\nfeliz cumple anos " << nombre<<"\n";
    std::cout<<"feliz cumple anos ati \n";
    std::cout<<"feliz cumple anos ati \n\n";
    std::cout<<"felicidades por tu comple anos "<< edad;

}
