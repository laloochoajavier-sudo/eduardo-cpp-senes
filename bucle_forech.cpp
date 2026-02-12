#include <iostream>
#include <ctime>
int main(){

std::string estudiantes[] {"mario","martha", "benjamin"};

for( int i = 0; i <sizeof (estudiantes)/ sizeof (estudiantes [0]); i++){
    std::cout<<estudiantes[i]<<'\n';
}


    return 0;
}