#include <iostream>
#include <ctime>
int main(){
    std::string name = "Eduardo";
    int age = 16;
    bool estudiante = true;

    std::cout<<&name<<'\n';
    std::cout<<&age<<'\n';
    std::cout<<&estudiante<<'\n';
//0x9ed71ffaf0
//0x9ed71ffaec estas son dirreciones de memoria las cuales 
//0x9ed71ffaeb puedes conver tir a decimal y cada una tiene un peso diferente dependiendo el tipo de dato int,string,bool,double,etc.


    return 0;
}