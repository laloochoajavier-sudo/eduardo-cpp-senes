#include <iostream>
int main(){
    for (int i= 1; i<=20; i++){

        if(i == 4){
            continue;
        } //contine sirve para saltar la variable de la secuencia en si
        std::cout<<i<<'\n';
    } 
    return 0;
}