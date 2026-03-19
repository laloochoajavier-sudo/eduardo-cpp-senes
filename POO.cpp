#include <iostream>
//class sirve para:
//public es para todo mundo externo
//private es privada solo para quien sele autorise

class humano{
    public:
    std::string nombre = "persona";
    std::string ocupacion = "";
    int edad = 18 ;

    void comer(){
        std::cout<<"esta persona esta comiendo"<<'\n';
    }
    void beber(){
        std::cout<<"esta persona esta bebiendo"<<'\n';
    }
     void dormir(){
        std::cout<<"esta persona esta dormida"<<'\n';
    }
};
int main(){
    humano humano1;
    humano humano2;

    humano1.nombre = "Eduardo";
    humano1.edad = 16;
    humano1.ocupacion = "programador";

    humano2.nombre = "pepo";
    humano2.edad = 22;
    humano2.ocupacion = "pepo";

    std::cout<<humano1.nombre<<'\n';
    std::cout<<humano1.edad<<'\n';
    std::cout<<humano1.ocupacion<<'\n';

    std::cout<<humano2.nombre<<'\n';
    std::cout<<humano2.edad<<'\n';
    std::cout<<humano2.ocupacion<<'\n';
    /*humano1.beber();
    humano1.comer();
    humano1.dormir();*/

    return 0;
}