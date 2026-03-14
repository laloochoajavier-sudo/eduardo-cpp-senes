#include <iostream>
#include <ctime>
int factorial(int num);
int main(){
std::cout<<"Resultado: "<< factorial(10)<<'\n';


    return 0;
}
int factorial(int num){
int resultado = 1;
/*for(int i = 1; i <num; i++){
    resultado *= i;
}
 return resultado;*/
 if(num > 1 ){
    return num * factorial(num-1);
 }else{
    return 1;
 }
}
