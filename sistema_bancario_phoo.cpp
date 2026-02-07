#include <iostream>
#include <ctime>
void mostrarSaldo(double saldo);
double depositar(double saldo);
double retirar(double saldo);
double donacion(double saldo);
int main(){
    double saldo = 100;
    int opc = 0;
    
    std::cout<<"_____________________\n";
    std::cout<<"    Banco de miel\n";
    std::cout<<"_____________________\n";
    std::cout<<"1 Mostrar Saldo\n";
    std::cout<<"2 Retirar\n";
    std::cout<<"3 Depositar\n";
    std::cout<<"4 donacion voluntaria\n";
    std::cout<<"5 Salir\n";
    std::cin>>opc;
    switch(opc)
    {
     case 1:
        mostrarSaldo(saldo);
        break;   
    
    case 2:
    saldo -= retirar(saldo);  
        mostrarSaldo(saldo);
        break; 
    
    case 3:
    saldo += depositar(saldo);
        mostrarSaldo(saldo);
        break;
    
    case 4:
    saldo -= donacion(saldo);
        mostrarSaldo(saldo);
        break;
        
    case 5:
        mostrarSaldo(saldo);
        break;   


    }
    
    return 0;
}
void mostrarSaldo(double saldo){
    double caridad;
    std::cout<<"su saldo es de "<< saldo <<'\n';
    }

double depositar(double saldo){
    double monto;
    std::cout<<"introduce el monto a depositar\n";
    std::cin>>monto;
    if(monto >0){
    return monto;
    }
    else{
    std::cout<<"monto incorrecto!\n";
    return 0;
    }
    
}
double retirar(double saldo){
    double retiro;
    std::cout<<"Seleccione el monto que desea retirar ";
    std::cin>>retiro;
    if(retiro > saldo){
    std::cout<<"saldo insuficiente\n";
    }
    else if(retiro < 0){
        std::cout<<"esa es una cantidad no valida\n";
    }
return retiro;
}
double donacion(double saldo){
    double caridad;
    std::cout<<"desea donar algo ala caridad (eliga la cantidad)\n";
    std::cin>>caridad;
    
    if(caridad >saldo){
    std::cout<<" Saldo insuficiente";

    }
    else if(caridad >=1){
    std::cout<<"gracias por su donacion SR.\n";
    saldo - caridad;
    }
    if(caridad <=0){
    std::cout<<"\n Gracias,tacano(entonces para la proxima)\n";
    }

    else if (caridad <-1){
    std::cout<<"intente otra cantidad";
    }
return 0;
}