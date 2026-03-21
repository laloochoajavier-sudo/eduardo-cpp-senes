#include <iostream>
//se heredan las classes de las clases para usar esas class en otras class

//Padre
class animal{
    public:
    bool vivo = true;
    void comer(){
        std::cout<<"comiendo"<<'\n';
    }
};
//hij@
class perro : public animal{
public:
    void ladrar(){
        std::cout<<"ladrar whof whof!"<<'\n';
    }

};
//hij@
class gato : public animal{
public:
    void maullar(){
        std::cout<<"miau miau miau!"<<'\n';
    }

};

class Forma{
public: 
    double area;
    double volumen;
};

class cubo : public Forma{
public:
    double lado;
    cubo(double l){
        this->lado = l;
        this->area = lado * lado * 6;
        this->volumen = lado * lado *lado;

    }

};

class esfera : public Forma{
public:
    double radio;
    esfera(double r){
        this->radio = r;
        this->area = 4 * 3.1416 * radio * radio;
        this->volumen = (4.0 / 3.0) * 3.1416 * radio * radio * radio;

    }

};

int main(){
    perro Perro;
    gato Gato;

    /*std::cout<<Gato.vivo<<'\n';
    Gato.comer();*/
    std::cout<<Gato.vivo<<'\n';
    Gato.maullar();

    std::cout<<Perro.vivo<<'\n';
    Perro.ladrar();

    cubo cubo1(16);
    std::cout<<"############### CUBO ###################"<<'\n';
    std::cout<<"Area de un cubo es: "<<cubo1.area<<"m2"<<'\n';
    std::cout<<"El lado del cubo es : "<<cubo1.lado<<"m"<<'\n';
    std::cout<<"El volumen del cubo es: "<<cubo1.volumen<<"m2"<<'\n';

    esfera esfera(10);
    std::cout<<"############### circulo ###################"<<'\n';
    std::cout<<"Area de un esfera es: "<<esfera.area<<"m2"<<'\n';
    std::cout<<"El lado del esfera es : "<<esfera.radio<<"m"<<'\n';
    std::cout<<"El volumen del esfera es: "<<esfera.volumen<<"m2"<<'\n';




    return 0;
}