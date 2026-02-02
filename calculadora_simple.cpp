#include <iostream>
int main(){
    char op;
    double num1;
    double num2;
    double resultado = 0.0;
    std::cout<<"################################# \n";
    std::cout<<"######### calculadora ########### \n";
    std::cout<<"################################# \n";

    std::cout<<"ingrese el tipo de operacion a realizar (+ - * /) ";
    std::cin>>op;

    std::cout<<"ingrese el numero #1: ";
    std::cin>>num1;

    std::cout<<"ingrese el numero #2: ";
    std::cin>>num2;
    
    switch (op) {
    case '+':
    resultado = num1+num2;
    std::cout<< "El resultado es: "<< resultado << std::endl;
    break;

    case '-':
    resultado = num1-num2;
    std::cout<< "El resultado es: "<< resultado << std::endl;
    break;

    case '*':
    resultado = num1*num2;
    std::cout<< "El resultado es: "<< resultado << std::endl;
    break;

    case '/':
        if (num2 == 0) {
            std::cout << "Error: division por cero no permitida\n";
        }else if (num1 == 0) {
            std::cout << "Error: division por cero no permitida\n";
        }else {
            resultado = num1 / num2;
            std::cout << "El resultado es: " << resultado << std::endl;
        }
        break;
    
    default:
        std::cout << "Operación no soportada\n";
        break;
    }

    std::cout<<"################################# \n";

    return 0;
}