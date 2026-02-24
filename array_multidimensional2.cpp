#include <iostream>
#include <ctime>
int main(){
 std::string autos[][5]={
{"honda","corola","mustang"},
{"botsvagen","toyota","ferrari"},
{"bochito","corvett","kia"}
};
int filas = sizeof(autos)/sizeof(autos[0]);
int columnas = sizeof (autos[0])/sizeof (autos[0][0]);
for(int i = 0; i< filas; i++){
    for( int j = 0; j< columnas; j++){ 
        std::cout<<autos[i][j] <<" ";
}
std::cout<<'\n';       
}


    return 0;
}