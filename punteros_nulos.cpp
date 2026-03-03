#include <iostream>
#include <ctime>
int main(){
    //nullptr puntero nulo es una palabra clave
    int *puntero = nullptr;
    int x = 123;
    puntero = &x;
    // esto sirve para verificar si el puntero tiene asignada alguna direcion
    if(puntero == nullptr){
        std::cout<<"la dirrecion no fue asignada"<<'\n';
    }else{
        std::cout<<"la dirrecion fue asignada"<<'\n';
        std::cout<<*puntero<<'\n';
    }


    return 0;
}