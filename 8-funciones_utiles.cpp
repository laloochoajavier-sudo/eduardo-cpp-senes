#include <iostream>
#include <cmath>

int main(){
    double x = 4;
    double y = 3;
    double z;
    double pp;
//max va a mostrar el mayor de las dos funciones:)
    z = std:: max (x,y);
//min va a mostrar el menor de las dos funciones
    z = std:: min(x,y);
//sirve para potenciar culquier numero a culquier potencia
    z = std:: pow(4, 5);
//este sirve para hacer raiz cuadrada cualquier numero
    z = std::sqrt (25);
// absoluto covierte los valores en positivo -150 = +150
    z = std:: abs (-3); 
// redondea .5< se convierte en uno >.4 se convierte en 0
   z = std::round (3.9);
// siempre redondea hacia ariba ciel
    z = std::ceil(10.000000000000001);
//siempre redondea hacia abajo floor
    z = std:: floor(3.999999999);
 //para mas funciones de origen matematico usar cplusplus.com/reference/cmath
    std::cout<<z<<std::endl;

    return 0;
}