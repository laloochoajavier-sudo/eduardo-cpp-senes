#include <iostream>
#include <ctime>
int main(){
    /*int *pNum = NULL;
    pNum = new int; 
    *pNum = 25; 
    std::cout<<"de direccion: "<<pNum<<'\n';
    std::cout<<"valor: "<<*pNum<<'\n';
    //sirve para que no hayan fugas de memoria.
    delete pNum;
    return 0;*/
    char *pNotas = NULL;
    int tam;
    std::cout<<"cuantas notas almacenara? ";
    std::cin>>tam;

    pNotas = new char [tam];
    for (int i = 0; i<tam ; i++){
        std::cout<<"ingrese una nota #"<<i+1<<":"<<'\n';
        std::cin>>pNotas[i];
    }
    for (int i = 0; i<0 ; i++){
        std::cout<<pNotas[i]<<' '<<'\n';
    }

    delete[]pNotas;

}