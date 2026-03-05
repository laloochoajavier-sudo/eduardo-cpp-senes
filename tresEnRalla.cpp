#include <iostream>
#include <ctime>
void dibujarTablero(char *espacios);
void turnoJugador(char*espacios,char jugador);
void turnoComputadora(char*espacios,char computadora);
bool verificarGanador(char*espacios,char jugador,char computadora);
bool verificarEmpate(char *espacios);
int main(){
    char espacios[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char jugador = 'X';
    char computadora = 'O';
    bool ejecutando = true;
    dibujarTablero(espacios);

    while (ejecutando == true){
        turnoJugador(espacios,jugador);
        dibujarTablero(espacios);

       if(verificarGanador(espacios,jugador,computadora)){
         ejecutando = false;
         break;
       }
       if(verificarEmpate(espacios)){
        ejecutando = false;
        break;
       }

        turnoComputadora(espacios,computadora);
        dibujarTablero(espacios);

               if(verificarGanador(espacios,jugador,computadora)){
         ejecutando = false;
         break;
       }
       if(verificarEmpate(espacios)){
        ejecutando = false;
        break;
       }

    }
    std::cout<<"Gracias por jugar"<<'\n';
    return 0;
}
void dibujarTablero(char *espacios){
    std::cout<<'\n';
    std::cout<<"     |     |    "<<'\n';
    std::cout<<"  "<<espacios[0]<<"  |  "<<espacios[1]<<"  |  "<<espacios[2]<<"  "<<'\n';
    std::cout<<"     |     |    "<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |    "<<'\n';
    std::cout<<"  "<<espacios[3]<<"  |  "<<espacios[4]<<"  |  "<<espacios[5]<<"  "<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |    "<<'\n';
    std::cout<<"  "<<espacios[6]<<"  |  "<<espacios[7]<<"  |  "<<espacios[8]<<"  "<<'\n';
    std::cout<<"     |     |    "<<'\n';
    std::cout<<'\n';
}
void turnoJugador(char*espacios,char jugador){
    int numero;
    while (true){
        std::cout<<"ingrese una casilla para jugar (1-9) ";
        std::cin>>numero;
        if(numero < 1 || numero > 9){
            std::cout<<"Número fuera de rango, prueba otra vez\n";
            continue;
        }
        numero--;
        if(espacios[numero]== ' '){
            espacios[numero]= jugador;
            break;
        }
        std::cout<<"Casilla ocupada, elige otra\n";
    }
}
void turnoComputadora(char*espacios,char computadora){
    int numero;
    srand(time(0));
    while (true){
        numero = std::rand() % 9;
        if(espacios[numero] == ' '){
            espacios[numero] = computadora;
            break;
        }
    }
}
bool verificarGanador(char*espacios,char jugador,char computadora){
    if((espacios[0] != ' ') && (espacios[0]== espacios[1])&&(espacios[1] == espacios[2])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }

    else if((espacios[3] != ' ') && (espacios[3]== espacios[4])&&(espacios[4] == espacios[5])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }
     else if((espacios[6] != ' ') && (espacios[6]== espacios[7])&&(espacios[7] == espacios[8])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }
     else if((espacios[0] != ' ') && (espacios[0]== espacios[3])&&(espacios[3] == espacios[6])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }
     else if((espacios[1] != ' ') && (espacios[1]== espacios[4])&&(espacios[4] == espacios[7])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }
     else if((espacios[2] != ' ') && (espacios[2]== espacios[5])&&(espacios[5] == espacios[8])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }
     else if((espacios[0] != ' ') && (espacios[0]== espacios[4])&&(espacios[4] == espacios[8])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }
     else if((espacios[2] != ' ') && (espacios[2]== espacios[4])&&(espacios[4] == espacios[6])){
        espacios[0] == jugador ? std::cout<<"ganaste\n" : std::cout<<"Perdiste\n";
    }else{
        return false;
    }


    return true;
}
bool verificarEmpate(char *espacios){
    for(int i = 0; i <9; i++){
        if(espacios[i] == ' ' ){
            return false;
        }
    }

    return true;
}