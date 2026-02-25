#include <iostream>
#include <ctime>
int main(){
std::string preguntas[]{"1.Quantos anos tengo? ",
                        "2.Como me decian en la secundaria? ",
                        "3.Que es lo que mas me gusta? ",
                        "4.Que es lo que mas odio? ",
                        "5.La comida que mas me gusta es: "
};
std::string opciones[5][4]{{"A.17","B.14","C.16","D.300,000,000"},
                            {"A.papasito","B.dios griego","C.Eduardo","D.Winnie the phoo"},
                            {"A.pensar en matar","B.comer ","C.ir al gym","D.hacerme sufrir"},
                            {"A.ami","B.yo","C.yo mismo","D.I(YO EN INGLES)"},
                            {"A.higado encebollado","B.queso cotage","C.caracoles","D.lo que sea pero con katsup"}
};
char respuestaCorrecta []{'C','D','D','D','D'};
int tamaño = sizeof(preguntas)/sizeof(preguntas[0]);
char respuesta;
int puntaje = 0;
for(int i = 0; i<tamaño;i++){
std::cout<<"###############################"<<'\n';
std::cout<<preguntas[i]<<'\n';
std::cout<<"###############################"<<'\n';
//sizeof(opciones[i])/sizeof(opciones[i][0]) esto delimita las opciones en gran escala
//se puede usar las opciones ya delimitadas del array
    for(int j = 0; j < 4 ;j++){
        std::cout<<opciones[i][j]<<'\n';
    }
    std::cin>>respuesta;
    respuesta = toupper(respuesta);
    if(respuesta == respuestaCorrecta[i]){
        std::cout<<"respuesta correcta"<<'\n';
        puntaje++;
    }else{
        std::cout<<"respuesta incorrecta"<<'\n';
    }
}
std::cout<<"tu puntaje es: "<<puntaje<<'\n';

    return 0;
}