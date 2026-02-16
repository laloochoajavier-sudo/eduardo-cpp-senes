#include <iostream>
#include <limits>
//las variables se puden cambiar de nombre pero el tipo de dato no se puede cambiar
int numeroEncontrado(std::string ao[], int tamano, std::string elemento);

int main(){
std::string comida[] = {"", "tacos", "quesadillas", "tortas", "hamburguesas", "pizza"};
// esto se llama puntero a un arreglo, el nombre del arreglo es un puntero 
int tamano = sizeof(comida)/sizeof(std::string);
int indice;
std::string miEle;



std::cout<<"----------------------------------------"<<'\n';
std::cout<<"        MENU DE COMIDAS DEL DIA"<<'\n';
std::cout<<"----------------------------------------"<<'\n';
std::cout<<"-TACOS"<<'\n';
std::cout<<"-QUESADILLAS"<<'\n';
std::cout<<"-TORTAS"<<'\n';
std::cout<<"-HAMBURGUESAS"<<'\n';
std::cout<<"-PIZZA"<<'\n';
std::cout<<"----------------------------------------"<<'\n';
std::cout<<"Busqueda de comida en el menu : ";
std::getline(std::cin, miEle);

//no hace falta poner "[0]" en el arreglo numeros porque es un puntero
indice = numeroEncontrado(comida, tamano, miEle);


if (indice != -1 && miEle != ""){
    std::cout<<"la comida "<<miEle<<" se encuentra en el indice "<<indice<<'\n';
}

else{
    std::cout<<"la comida no se encuentra en el catalogo"<<std::endl;
}

    indice = numeroEncontrado(comida, tamano, miEle);


    return 0;
}
//indice el cual se rije por el tamaño y usan el arreglo para comparar el elemento que se busca
//elemento = miEle, el cual se ingresa por el usuario
int numeroEncontrado(std::string comida[], int tamano, std::string elemento){
    for (int i =0; i <tamano; i++){
        if (comida[i] == elemento){
            return i; 
        }
    }return -1;
}
