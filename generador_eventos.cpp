#include <iostream>
#include <ctime>
int main(){
    srand(time(0));
    int randnum = rand() % 5 +1;

    switch (randnum){
    case 1 :
        std::cout<<"premio numero 1'\n'";
        std::cout<<"ganaste una calcamonia para tu auto de cpp";
        break;
    case 2 :
        std::cout<<"premio numero 2'\n'";
        std::cout<<"ganaste una prostituta personal";
        break;
    case 3 :
        std::cout<<"premio numero 3'\n'";
        std::cout<<"ganaste una consola xbox one premiun";
        break;
    case 4 :
        std::cout<<"premio numero 4'\n'";
        std::cout<<"ganaste una pelota de oro";
        break;
    case 5 :
        std::cout<<"premio numero 5'\n'";
        std::cout<<"ganaste una hoja de papel comun";
        break;
        
    default:
        break;
    }   
    return 0;
}