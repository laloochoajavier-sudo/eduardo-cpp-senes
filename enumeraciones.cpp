#include <iostream>
//sirve para ordenar algun tipo de dato segun su busqueda
enum Dia{lunes = 0,martes = 1, miercoles = 2, jueves = 3, viernes = 4, sabado = 5, domingo = 6};
enum colores{rojo = 'r', verde = 'v',blanco = 'b',negro = 'n',azul = 'a'};
int main(){
 Dia hoy = lunes;
    switch (hoy){
    case lunes : std::cout<<"hoy es lunes"<<'\n';
    break;
    case martes: std::cout<<"hoy es martes"<<'\n';
    break;
    case miercoles: std::cout<<"hoy es miercoles"<<'\n';
    break;
    case jueves: std::cout<<"hoy es jueves"<<'\n';
    break;
    case viernes: std::cout<<"hoy es viernes"<<'\n';
    break;
    case sabado: std::cout<<"hoy es sabado"<<'\n';
    break;
    case domingo: std::cout<<"hoy es domingo"<<'\n';
    break;
    }
    

    
    return 0;
}