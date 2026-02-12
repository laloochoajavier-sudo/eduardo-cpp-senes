#include <iostream>
#include <ctime>
#include <cmath>
int main(){
    double num1;
    double num2;
    char opc;
    std::cout<<"*********************"<<'\n';
    std::cout<<" SUMADORA PROFESIONAL"<<'\n';
    std::cout<<"*********************"<<'\n';
    std::cout<<"Ingresa el numero uno: "<<'\n';
    std::cin>>num1;
    std::cout<<"Ingresa el numero dos: "<<'\n';
    std::cin>>num2;
    std::cout<<"Elige el tipo de operacion a utilizar (+ - * / %): "<<'\n';
    std::cin>>opc;
    switch (opc){
        case '/':
            if (num2 == 0)
                std::cout<<"Error: division por cero"<<'\n';
            else
                std::cout<< (num1 / num2) <<'\n';
            break;
        case '*':
            std::cout<< (num1 * num2) <<'\n';
            break;
        case '-':
            std::cout<< (num1 - num2) <<'\n';
            break;
        case '+':
            std::cout<< (num1 + num2) <<'\n';
            break;
        case '%': {
            // long sive para numeros grandes 32 bits a 64 bits almacena mas datos
            //static_cast sirve para convertir tipos de datos double a int a long long etc.
            // llround redondea el numero al entero mas cercano, 1.5 se redondea a 2, 1.4 se redondea a 1 sea numero positivo o negativo #cmath
            long long a = std::llround(num1);
            long long b = std::llround(num2);

            // cerr sirve principalmente para los errores como el modulo 0
            // endl sacrifica fps acambio de velocidad de entrega de datos

            if (b == 0) {
                std::cerr << "Error: No se puede calcular el modulo por cero." << std::endl;
            } else {
                long long resultado = a % b;
                std::cout << "Resultado: " << resultado 
                          << " (Resto de " << a << " % " << b << ")" << std::endl;
            }
            break;}
        default:{                                           
        std::cout<<"Operacion no reconocida"<<'\n';
        }
            
    }


    



    return 0;
}