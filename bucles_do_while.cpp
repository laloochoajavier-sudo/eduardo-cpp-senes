#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main(){
    
    std::string opcion;
//el bloque do while sirve para antes de poner algo confirmar y despues se repite
// el do while es para introducir la variable y poner la variable para despues checarla
    do{

    std::cout<<"quieres volverlo a intentar ";
    std::cin>> opcion;
    // normalizar a minúsculas
        std::transform(opcion.begin(), opcion.end(), opcion.begin(),
                       [](unsigned char c){ return std::tolower(c); });
    if (opcion == "no") {
            std::cout << "\n game over \n";
}
   }while("si");

    

     

    

    return 0;
}