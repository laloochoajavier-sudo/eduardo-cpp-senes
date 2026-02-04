#include <iostream>
#include <ctime>
int main(){
    int num;
    int adivinar;
    int intentos = 0;

    srand(time(NULL));

    num = rand()%100 +1;
    std::cout<<"#########################  \n";
    std::cout<<"adivina el numero jugador  \n";
    std::cout<<"#########################  \n";

    do{
        std::cout<<"\ningresa un numero del 1 al 100 porfavor: ";
        std::cin>> adivinar;
        intentos ++;
        if(adivinar > num){
            std::cout<<"mas bajo";
        }  
            else if(adivinar < num){
                std::cout<<"mas alto";
        } else{
            std::cout<<"CORRECTO! intentos: "<<intentos<< "\n";
        }


    }while(num != adivinar);

    return 0;
}