#include <iostream>
#include <ctime>
int main(){
//arreglo/array normal
std::string preguntas[]={"1. en que ano se creo c++?:",  
                         "2. Quien invento c++?:",
                         "3. cual es el predecesor de c++?:",
                         "4. Es la tirra plana?:"
};
//matriz biodimensional [][]
std::string opciones [4][4]={{"A.1969","B.1975","C.1985","D.1989"},
                            {"A.Bjarne Stroustup","B.Thomas Jopson","C.Elias Willsom","D.Bille Ailish"},
                            {"A.C","B.C+","C.C--","D.B++",},
                            {"A.si","B.no","C.aveces","D.ni idea",}};
char respuestasCorrectas[]={'C','A','A','B'};
//Numero de elementos = i
int tamaño = sizeof(preguntas)/sizeof(preguntas[0]);
char respuesta;
int puntaje = 0;
//numero de columas
for(int i = 0;i <tamaño; i++){
    std::cout<<"*****************************"<<'\n';
    std::cout<<preguntas[i] <<'\n';
    std::cout<<"*****************************"<<'\n';
    for(int j = 0; j <sizeof(opciones[i])/sizeof(opciones[i][0]); j++){
        std::cout<<opciones[i][j]<<'\n';
    }
    std::cin>>respuesta;
    //toupper funciona para que la respuesta sea mayuscula siempre en la introduccion de informacion
    respuesta = toupper(respuesta);
    if(respuesta == respuestasCorrectas[i]){
        std::cout<<"respuesta correcta! :D"<<'\n';
        puntaje++;
    }else{
        std::cout<<"respuesta incorrecta! :("<<'\n';
    }

}
std::cout<<"**************************"<<'\n';
std::cout<<puntaje<<'\n';
std::cout<<"tu puntaje es: "<<"**************************"<<'\n';
    return 0;
}
