#include <iostream>
//las variables se puden cambiar de nombre pero el tipo de dato no se puede cambiar
int numeroEncontrado(int arreglo[], int tamano, int elemento);

int main(){
int numeros []{0,1,2,3,4,5,6,7,8,9,10};
// esto se llama puntero a un arreglo, el nombre del arreglo es un puntero 
int tamano = sizeof(numeros)/sizeof(int);
int indice;
int miNum;
std::cout<<"Busqueda de numeros del 1 al 10 favor de usar el tablero numerico: ";
std::cin>>miNum;
//no hace falta poner "[0]" en el arreglo numeros porque es un puntero
indice = numeroEncontrado(numeros, tamano, miNum);

if (indice != -1 && miNum != 0){
    std::cout<<"el numero "<<miNum<<" se encuentra en el indice "<<indice<<'\n';
}

else{
    std::cout<<"el numero no se encuentra en el catalogo"<<std::endl;
}

    indice = numeroEncontrado(numeros, tamano, miNum);


    return 0;
}
//indice el cual se rije por el tamaño y usan el arreglo para comparar el elemento que se busca
//elemento = miNum, el cual se ingresa por el usuario
int numeroEncontrado(int arreglo[], int tamano, int elemento){
    for (int i =0; i <tamano; i++){
        if (arreglo[i] == elemento){
            return i; 
        }
    }return -1;
}
