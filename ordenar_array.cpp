#include <iostream>
#include <ctime>
//arreglo burbuja

void ordenador (int arreglo[], int tam);

int main(){
    int arreglo[]{10,2,3,4,5,6,7,8,9,1};
    int tam = sizeof (arreglo)/sizeof(int);
    

    std::cout << "Antes: ";
    for (int elementos : arreglo) std::cout << elementos << " ";
    std::cout << std::endl;

    // llamar al ordenador para ordenar el arreglo
    // es impottatnte recordar c++ lee linea por linea, por lo que el ordenador se ejecutara despues de mostrar el arreglo sin ordenar
    ordenador(arreglo, tam);
    std::cout << "Despues: ";
    for (int elementos : arreglo) std::cout << elementos << " ";
    std::cout << std::endl;

    return 0;
}

void ordenador (int arreglo[], int tam){
    int temp;
    //solo el parentesis es para una sola vez
    //el menos uno es para no salirnos del arreglo
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}