#include <iostream>
#include <ctime>
int main(){
    //arrays sirve para almacenar datos como si fuera un indice / lista
    // solo puede contener el mismo tipo de dato ya sea int, char, float, etc
    /*std::string automovil[] = {"corvette", "mustang", "camaro"};
    automovil[0] = "corola";
    std::cout << automovil[0]<< std::endl;
    std::cout << automovil[1]<< std::endl;
    std::cout << automovil[2]<< std::endl; */

    /*std::string automovil[3];
    automovil[0] = "corvette";
    automovil[1] = "mustang"; 
    automovil[2] = "camaro";*/

    double precios[5] {5.50, 10.99, 15.00, 20.50, 25.00};
    std::cout << precios[0]<<" Soda nuka cola" << '\n'; 
    std::cout << precios[1] <<" boms sugar"<< '\n';
    std::cout << precios[2] <<" rada wey"<< '\n';
    std::cout << precios[3] <<" tochomosca asada"<< '\n'; 
    std::cout << precios[4] <<" rad-X"<< '\n';
    


    return 0;
}