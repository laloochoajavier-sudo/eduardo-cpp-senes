#include <iostream>
//caracteristic esencial permite multiples constructores del mismo nombre pero con parametros diferentes
class pizza{
public:
    std::string ingrediente1;
    std::string ingrediente2;

    pizza(std::string ingrediente1){
        this->ingrediente1 = ingrediente1;
    }
    pizza(std::string ingrediente1,std::string ingrediente2){
        this->ingrediente1 = ingrediente1;
        this->ingrediente2 = ingrediente2;
    }
    pizza(){

    }
};
int main(){
    pizza pizza1("salami");
    pizza pizza2("salami","mushroms");
    pizza pizza3;


    std::cout<<pizza1.ingrediente1<<'\n';
    std::cout<<pizza2.ingrediente2<<" y "<<pizza2.ingrediente2<<'\n';



    return 0;
}