#include <iostream>
int main(){
    std::string nombre;
    nombre = "Edurdo javier";
    int pos;
//nombre.length() es para saber cuantas letras tiene

//nombre.empty() sirve para corrovorar si hay algo vacio o lleno

//nombre.clear() simple y sensillo limpia el contenido almacenado

//append es como un apendice se inserta en el mismo contenido de la variable @gmail.com

//at(0) sirve para identificar el caracter seguen el numero de caracter Eduardo at=(0)= E

// find sirve para indicar la posision de una letra atravex de una frase(javier)

// erase sirve para dejar una parte del texto y quitar la otra

    nombre.erase(7,-1);


    std::cout<<nombre ;

    return 0;
}