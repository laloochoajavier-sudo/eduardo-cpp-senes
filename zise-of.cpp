#include <iostream>
#include <ctime>
int main(){
    //determina el tamaño en bites de una variable el ziseof tipo de clase o tipo de dato todo aquello que te gustaria medir en tamaño de bits
    double precio = 5.50;
    std::string nombre = "Eduardo";
    char nota_calificacion = 'f';
    bool estudiante = true;
    char spcs []= {'s','p','a','i','n'};
    //con esto puedes medir los elementos
    //std::cout << "el nombre es de: " << sizeof(spcs)/sizeof(spcs[0]) << " elementos" << '\n';
    std::string estudiantes [] = {"Eduardo", "Maria", "Juan", "Ana","Pedro","pablo","prostituta","puta"};
    std::cout << "el tamaño del arreglo estudiantes es de: " << sizeof(estudiantes) << " bytes" << '\n';
    //puede medir elementos como el int, long, long long, float, double, char, bool, string, etc 
    std::cout << "el número de elementos en el arreglo estudiantes es: " << sizeof(estudiantes)/sizeof(std::string) << '\n';

    return 0;
}