#include <iostream>
#include <ctime>
void caminar(int pasos);

int main(){
    caminar(100);
    return 0;
}

void caminar(int pasos){
//enfoque iterativo mas rapido
/*for(int i = 0; i<pasos; i++){
std::cout<<"diste un paso!"<<'\n';}*/  

//enfoque recursivo desde donde se invoca la funcion en la misma funcion aunque lleva  mas memoria
if(pasos > 0){
std::cout<<"diste un paso!"<<'\n';
 caminar(pasos -1 );
 }
}
