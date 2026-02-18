#include <iostream>
#include <ctime>
void   ordemadorAutomatico(int arreglo[], int tamaño);
int main(){
    int arreglo[]{10,2,3,4,5,6,7,8,9,1};
    int tamaño = sizeof(arreglo) / sizeof(int);
     ordemadorAutomatico(arreglo, tamaño);
    std::cout << "Arreglo ordenado: ";
    for(int arreglo: arreglo){
        std::cout << arreglo << " ";
    }



    return 0;
}
 void ordemadorAutomatico(int arreglo[], int tamaño){
     int temporal;
     for (int i =0; i<tamaño;i++){
         for (int j = 0; j < tamaño - i - 1; j++) {
             if (arreglo[j] > arreglo[j + 1]) {
                 temporal = arreglo[j];
                 arreglo[j] = arreglo[j + 1];
                 arreglo[j + 1] = temporal;
             }
         }
     }
 }