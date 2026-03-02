#include <iostream>
#include <ctime>
//algoritmo de Luhn
/* 1. Duplique cada segundo digito de derecha a izquierda si el numero multiplicado tiene dos dijitos, dividalos.
   2. sume todos los dijitos del paso 1.
   3. sume todos los dijitos impares de derecha a izquierda.
   4. sume los resultados de los pasos 2 y3.
   5. si el paso es divisible por 10,# es valido.
    //5555555555554444
    // 1 0 1 0 1 0 1 0 1 0 1 0 8 8 = 22
    // 5 5 5 5 5 5 4 4 = 38
    // 22+38= 60
    // 60/10 = 6✓
*/
int obtenerDigito(const int numero);
int sumarDigitosImpares(const std::string numTarjeta);
int sumarDigitosPares(const std::string numTarjeta);


int main(){

    std::string numTarjeta;
    int resultado = 0;
    std::cout<<"ingrese el numero de su tarjeta de credito# "<<'\n';
    std::cin>>numTarjeta;
   // if(numTarjeta){

    resultado = sumarDigitosPares(numTarjeta)+ sumarDigitosImpares(numTarjeta);

    if(resultado %10 == 0){
    std::cout<<numTarjeta<<" Tu tarjrta es valida"<<'\n';
    }else{
        std::cout<<numTarjeta<<" Tarjeta no valida"<<'\n';
    }


    return 0;
}
int obtenerDigito(const int numero){
    return numero %10 + (numero/ 10 % 10);
}
int sumarDigitosImpares(const std::string numTarjeta){
     int suma = 0;
    for(int i = numTarjeta.size() -1;i>=0;i-=2){
        suma += numTarjeta[i] -'0';
    }
    return suma;
}
int sumarDigitosPares(const std::string numTarjeta){
    int suma = 0;
    for(int i = numTarjeta.size() -2;i>=0;i-=2){
        suma += obtenerDigito((numTarjeta[i] -'0')*2) ; //tambien se puede usar 0 por que es 48 asy.
    }
    return suma;
}

