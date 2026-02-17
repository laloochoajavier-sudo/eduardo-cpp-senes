#include <iostream>
#include <ctime>
//organizador borbuja de std ::string
void acomodo(std::string musicos[], int tamaño);
int main(){
std::string musicos []{"sancho","patric","lupillo","paps","emiliano","zapota","tecgraund","papa","piyt","c++","c","c#","python","html","css"};
int grande = sizeof(musicos)/sizeof(std::string);
acomodo (musicos, grande);
std::cout<<"Musicos ordenados: ";
for(std::string arreglo : musicos)
std::cout<<arreglo<<"  - ";

    return 0;
}
void acomodo(std::string musicos[], int tamaño){
    //en este caso no usa los numeros, sino las letras, por lo que se usara un string temporal el cual es manipulado mediante abc.
    std::string acontinua ;
    for(int i =0; i<tamaño -1; i++){
        for (int j = 0; j < tamaño - i -1; j++){
            if(musicos[j]> musicos[j+1]){
                acontinua = musicos [j];
                musicos[j]=musicos [j+1];
                musicos[j+1]=acontinua;
            }
        }
    }
}