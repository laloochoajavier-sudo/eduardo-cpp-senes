#include <iostream>
#include <ctime>
char elecionUsuario ();
char elecionComputadora ();
void mostrarelecion(char elecion);
void elegirGanador (char computadora, char jugador);
int main(){
    char jugador;
    char computadora;

    jugador = elecionUsuario ();
    std::cout<<"\njugador: ";
    mostrarelecion(jugador);

    computadora = elecionComputadora ();
    std::cout<<"computadora: ";
    mostrarelecion(computadora);

    elegirGanador(jugador ,computadora);

    return 0;
}
char elecionUsuario (){
    char jugador;
   std::cout<<"################################\n";
   std::cout<<" Piedra-Papel-Tijeras | jugador\n";
   std::cout<<"################################\n";
   do{
    std::cout<<" 'r' | roca\n";
   std::cout<<" 'p' | papel\n";
   std::cout<<" 't' | tijeras\n";
   std::cout<<"elige una opcion: ";
   std::cin>>jugador;
   }while (jugador != 'r' && jugador != 'p' && jugador != 't');


   
    return jugador;
}
char elecionComputadora (){
    srand(time(0) );
    int num = rand() % 3 +1;
    switch (num){
    case 1: return 'r';
    break;
    case 2: return 'p';
    break;
    case 3: return 't';
    break;
    }
    return 0;
}
void mostrarelecion(char elecion){
    switch (elecion)
    {
    case ('r'):
    std::cout<<"elegiste piedra/roca\n";
        break;

    case ('t'):
    std::cout<<"elegiste tijeras\n";
        break;

     case ('p'):
    std::cout<<"elegiste papel\n";
        break;
    
    default:
        break;
    }
   

}
void elegirGanador (char computadora, char jugador){
    switch (jugador){
        case 'r':
        if(computadora == 'r'){
            std::cout<<"Empate!\n";
        }else if(computadora == 'p'){
            std::cout<<"Perdiste:(\n";
        }else if (computadora == 't'){
            std::cout<<"Ganaste!!:)\n";
        }
        break;
        case 'p':
        if(computadora == 'p'){
            std::cout<<"Empate!\n";
        }else if(computadora == 't'){
            std::cout<<"Perdiste:(\n";
        }else if (computadora = 'r'){
            std::cout<<"Ganaste!!:)\n";
        }
        break;
        case 't':
        if(computadora == 't'){
            std::cout<<"Empate!\n";
        }else if(computadora == 'r'){
            std::cout<<"Perdiste:(\n";
        }else if (computadora == 'p'){
            std::cout<<"Ganaste!!:)\n";
        }
        break;
        
    }
    

}

