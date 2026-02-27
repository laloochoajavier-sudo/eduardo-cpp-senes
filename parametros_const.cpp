#include <iostream>
#include <ctime>
void imprimirInfo(const std::string &nombre,const int &edad);
int main(){
    std::string nombre = "Eduardo";
    int edad = 16;
    imprimirInfo(nombre,edad);
    return 0;
}
//const sirve para que no se pueda cambiar el valor de la variable en una funcion externa ejemplo guardar en main y usar un void para cambiarlo
//transmite la intencion de mayor seguridad son una referencia
void imprimirInfo(const std::string &nombre,const int &edad){

    std::cout<<"Nombre: "<<&nombre<<std::endl;
    std::cout<<"Edad: "<<&edad<<std::endl;

}