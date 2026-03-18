#include <iostream>
#include <ctime>
//templete es una plantilla de funcion como se ve una funcion sobrecargada estamos detriminando la forma
//typename sirve especificamente para que una comparacion de datos accepte cualquier dato int,string,char,bool,etc.
// auto == el compilador deduce el tipo de retorno
template<typename T, typename U> 
T max(T x,U i){
    return(x > i)? x: i;
}
int main(){
    std::cout<< max('1',1.3) <<'\n';


    return 0;
}