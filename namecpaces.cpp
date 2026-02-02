#include <iostream>
//namespace es para poner dos variavles del mismo nombre 'cua' = 'cua'
namespace primero{
    int x = 0;
}
namespace segundo{
    int x = 3;
}
int main (){
    //'using' sirve para usar el namespace en el main
    //using std::cout; es una forma mas facil de imprimir(el codigo) dependiendo el caso
    
    using std::cout;
    using std::string;
    string nombre = "eduardo";
    std::cout<<" X ="<<segundo:: x;

    return 0;
}