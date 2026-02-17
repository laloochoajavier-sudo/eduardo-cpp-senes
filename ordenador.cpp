#include <iostream>
#include <ctime>
void ordenador(int numeros[], int tamaño);
int main(){
int numeros []{1,5,3,4,2,10,7,8,9,6};
int tamaño =sizeof (numeros)/sizeof(int);
ordenador(numeros, tamaño);
std::cout<<"Numeros ordenados: ";
for(int arreglo : numeros)
std::cout<<arreglo<<" ";

    return 0;
}
void ordenador(int numeros[], int tamaño){
    int temporal;
    for (int i = 0; i <tamaño -1;i++){
        for(int j = 0; j <tamaño -i -1; j++){
            if(numeros[j]> numeros[j+1]){
                temporal = numeros [j];
                numeros[j]=numeros [j+1];
                numeros[j+1]=temporal;    
                
            }
        }
    }
}
