#include <iostream>
#include <ctime>
int main(){
    int numero;
    double precios[5] {5.50, 10.99, 15.00, 20.50, 25.00};
    std::cout << "(1) Soda nuka cola " << precios[0] << '\n';
    std::cout << "(2) Boms sugar " << precios[1] << '\n';
    std::cout << "(3) Rada wey " << precios[2] << '\n';
    std::cout << "(4) Tochomosca asada " << precios[3] << '\n';
    std::cout << "(5) Rad-X " << precios[4] << '\n';
    std::cout << "\ningrese el articulo de compras: " << '\n';
    std::cin>>numero;
        switch (numero)
        {        case 1:
            std::cout<<"usted compro una soda nuka cola por "<<precios[0]<<'\n';
            break;
        case 2:
            std::cout<<"usted compro una boms sugar por "<<precios[1]<<'\n';
            break;  
        case 3:
            std::cout<<"usted compro una rada wey por "<<precios[2]<<'\n';
            break;
        case 4:
            std::cout<<"usted compro una tochomosca asada por "<<precios[3]<<'\n';
            break;

        case 5:
            std::cout<<"usted compro una rad-X por "<<precios[4]<<'\n';
            break;
        default:
            std::cout<<"articulo no encontrado"<<'\n';
            break;
        }

    return 0;
}