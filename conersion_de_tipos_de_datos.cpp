#include <iostream>
int main(){
// sirve para modificar de int a double usando () para cambiar la expresion matematica y hacer unas cuantas cositas"
    int PCorrectas = 8;
    int PTotal = 10;

    double Puntaje = PCorrectas / (double) PTotal *100;
    
    std::cout<<Puntaje<< "%"<<std::endl;
    return 0;
}