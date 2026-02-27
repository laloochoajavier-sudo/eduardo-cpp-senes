#include <iostream>
#include <ctime>
void cambio (std::string &X,std::string &Y);
int main(){
    std::string X = "cafe";
    std::string Y = "agua";

    //juego de vaciar tazas de agua de colores!!!!
    cambio(X, Y);
    std::cout<<"X: "<<&X<<'\n';
    std::cout<<"Y: "<<&Y<<'\n';


// el "&" al lado de cualquier variable muestra la direccion en la computadora en vez de la numerica
    return 0;
}
void cambio (std::string &X,std::string &Y){
    std::cout<<"X: "<<&X<<'\n';
    std::cout<<"Y: "<<&Y<<'\n';
}