#include <iostream>
#include <ctime>
int max(int x,int i){
    return(x > i)? x: i;
}
double max(double x,double i){
    return(x > i)? x: i;
}
int main(){
    std::cout<< max(2.3, 2.1) <<'\n';


    return 0;
}