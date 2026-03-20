#include <iostream>
class estudiantes{
public:    
    std::string Nombre;
    int edad;
    double promedio;
    //forma mas rapida y facil usar this cuando quieres usar la misma palabra
    estudiantes(std::string z,int x ,double y ){
        Nombre = z;
        edad = x;
        promedio = y;
    }
};


class automiviles{
public:
    std::string marca;
    int ano;
    std::string modelo;
    std::string color;
automiviles(std::string marca,int ano,std::string modelo,std::string color){
    this->marca = marca;
    this->ano = ano;
    this->modelo = modelo;
    this->color = color;
}

};
int main(){
    estudiantes estudiante1("Eduardo",16,8.7);
    estudiantes estudiante2("Lucia",40,10.0);

    std::cout<<estudiante1.Nombre<<'\n';
    std::cout<<estudiante1.edad<<'\n';
    std::cout<<estudiante1.promedio<<'\n';
    std::cout<<'\n';
    std::cout<<estudiante2.Nombre<<'\n';
    std::cout<<estudiante2.edad<<'\n';
    std::cout<<estudiante2.promedio<<'\n';
     /*estudiante1.Nombre = "Eduardo";
    estudiante1.edad = 16;
    estudiante1.promedio = 8.7;*/ //metodo 1 viejito

//****************************************************************************************************/

automiviles auto1("ford",2026,"raptor xv","negro asabache");
automiviles auto2("mustang",1995,"sld","rojo");

std::cout<<"*******************"<<'\n';
std::cout<<"    Autos nuevos"<<'\n';
std::cout<<"*******************"<<'\n';

std::cout<<"marca: "<<auto1.marca<<'\n';
std::cout<<"modelo: "<<auto1.modelo<<'\n';
std::cout<<"color: "<<auto1.color<<'\n';
std::cout<<"ano: "<<auto1.ano<<'\n';
std::cout<<'\n';
std::cout<<"marca: "<<auto2.marca<<'\n';
std::cout<<"modelo: "<<auto2.modelo<<'\n';
std::cout<<"color: "<<auto2.color<<'\n';
std::cout<<"ano: "<<auto2.ano<<'\n';



    
 



    return 0;
}