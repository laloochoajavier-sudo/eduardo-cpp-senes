#include <iostream>
#include <ctime>
int main(){
//un arreglo compuesto por otros arreglos, es decir, un arreglo de dos dimensiones o mas
//exell o sistema de cordendas
//matriz de 3 filas y 4 columnas
//elprimer [ es para las filas y el segundo [ es para las columnas]
std::string comidas[3][3]={
{"maracuya","platano","manzana"},
{"mango","ataulfo","nino"},
{"papaya","papayo","vag"},
};
//sirve para calcular el peso de filas y columnas

//verificacion de filas y columnas
int filas = sizeof(comidas)/sizeof(comidas[0]);
int columnas = sizeof  (comidas[0])/sizeof(comidas[0][0]);
//imprimir N.filas N.columnas
for(int i = 0; i< filas; i++ ){ 
for(int j = 0; j< columnas; j++ ){std::cout<<comidas[i][j]<<" "; 
    }
    std::cout<<'\n';
    }


    return 0;
}