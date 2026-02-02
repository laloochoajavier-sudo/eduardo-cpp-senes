#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

// Quita espacios (solo espacios ' ')
void remove_spaces(std::string &s){
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
}

int main(){
    std::string nombre;
    std::cout<<"000000000000000\n";
    std::cout<<"bienvenido vamos a hacer tu gmail personalizado\n";
    std::cout<<"000000000000000\n";

    std::cout<<"\ningresa tu nombre completo (apellidos tambien) porfavor: ";
    std::getline(std::cin >> std::ws,nombre);

    // eliminar espacios
    remove_spaces(nombre);

    // truncar a 8 caracteres si es necesario
    if (nombre.size() > 8) nombre.erase(8);

    std::cout << "Tu correo es: " << nombre << "@gmail.com \n";
    return 0 ;
}