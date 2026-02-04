#include <iostream>
#include <ctime>
#include <iomanip>

void MostrarSaldo( double saldo );
double deposito (double saldo);
double retirar (double saldo);

int main(){
    double saldo = 0;
    int opc = 0;
    do{

    std::cout<<"\n*******************\n";
    std::cout<<"ingrese una opcion:\n";
    std::cout<<"*******************\n";
    
    std::cout<<"1. Mostrar Saldo\n";
    std::cout<<"2. Depositar dinero\n";
    std::cout<<"3. Retirar dinero\n";
    std::cout<<"4. Salir\n";
    std::cin>>opc;
    switch (opc)
    {
    case 1:
        MostrarSaldo(saldo);
        break;
    case 2:
        saldo += deposito(saldo);
        MostrarSaldo(saldo);
        break;
    case 3:
        saldo -= retirar(saldo);
        MostrarSaldo(saldo);
        break;
    case 4:
        std::cout<<"gracias por usar nuestro banco";
    default:
        std::cout<<"seleccione un opcion valida";
        
    }

    }while(opc!=4);


    return 0;
}
void MostrarSaldo( double saldo ){
    std::cout<<"su balance es $: "<<std::setprecision (2) <<std::fixed<< saldo<<'\n';
}

double deposito (double saldo){
    double monto;
    
    std::cout<<"ingrese el monto a depositar: ";
    std::cin>>monto;

    if(monto >0){
        return monto;
    }else {
        return 0;
    }

}
void MostrarSaldo( double saldo );
double deposito (double saldo);
double retirar (double saldo){
    double monto  = 0;
    std::cout<<"ingrese el monto a retirar: \n";
    std::cin>>monto;
    if(monto > saldo){
        std::cout<<"saldo insuficiente!\n";
    }
    else if(monto < 0){
        std::cout<<"esa no es una cantidad valida! \n";
        return monto;
    }
    return 0;
}

