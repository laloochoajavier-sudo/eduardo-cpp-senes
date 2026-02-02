#include<iostream>
#include<vector>
//typedef std::vector<std::pair<std::string, int>>pair_list_t;
//typedef std::string text_t;
//typedef int numero_t;
using text_t = std::string;
using numero_t = int;

int main(){
    text_t nombre = "eduardo";
    numero_t edad = 16;
    std::cout<<nombre<<" "<<edad<<std::endl;
    
    return 0;
}