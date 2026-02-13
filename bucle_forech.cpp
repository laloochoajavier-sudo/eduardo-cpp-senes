#include <iostream>
#include <ctime>
int main(){
//en los areglos empiezan a contar desde el indice 0, por lo tanto el ultimo indice de un arreglo es igual al numero de elementos del arreglo menos 1

std::string estudiantes[] {"mario","martha", "benjamin"};
int calificacion[] {10,9,8,7,6,5,4,3,2,1};
//un indice de estudiantes con el ziseof un metodo mas flexible que el foreach
//en este metodo se puede restar o sumar ala variable de la secuencia, mientras que el foreach no se puede hacer eso tambien se puede empezar desde el final de la secuencia y restar o sumar a la variable de la secuencia

for( int i = 2; i <sizeof (estudiantes)/ sizeof (estudiantes [0]); i++){
    std::cout << estudiantes[i] << '\n';
}
//metodo foreach es rapido y sensillo de escribir, pero no es tan flexible como ziseof
for(std::string estudiante : estudiantes){
    std::cout << estudiante << '\n';
}

for(int calificacion: calificacion){    
    std::cout << calificacion << '\n';
}

    return 0;
}