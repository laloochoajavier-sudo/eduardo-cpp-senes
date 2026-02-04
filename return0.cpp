#include <iostream>

double areaDeCuadrado(double longitud);
double volumenCubo(double longitu2);

int main(){
    double longitud;
    double longitud2;

    std::cout<<"ponga la medida de su cuadrado: ";
    std::cin>>longitud;

     double area = areaDeCuadrado(longitud);

    std::cout<<"Area del cuadrado: "<<area<<"cm^2 \n";

    std::cout<<"ponga la medida de su cubo: ";
    std::cin>>longitud2;

    double volumen = volumenCubo(longitud2);

    std::cout<<"Area del cubo: "<<volumen<<"cm^3 \n";

   
    return 0;
}
double areaDeCuadrado(double longitud){
    return longitud * longitud;
   /*double area = longitud * longitud;
    return area;*/
    
}


double volumenCubo(double longitud2){
    return longitud2 * longitud2 *longitud2;
}