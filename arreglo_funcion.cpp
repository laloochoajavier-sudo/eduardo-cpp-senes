#include <iostream>
#include <ctime>
double sumaTotal(double precios[], int tam);
int main(){
    double precios[]{9.5, 8.0, 7.5, 10.0, 6.0};
    int tam = sizeof(precios) / sizeof(precios[0]);
    double total = sumaTotal(precios, tam);
    std::cout << "Total: " << total << '\n';



    return 0;
}
double sumaTotal(double precios[], int tam){
    double total = 0;
    for(int i = 0; i < tam; i++){
        total += precios[i];
    }
    return total;
}