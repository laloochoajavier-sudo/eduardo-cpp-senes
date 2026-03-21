#include <iostream>
class Estufa {
private:
    int temperatura = 0;
public:
    int getTemperatura(){
        return temperatura;
    }
    void setTemperatura(int temperatura){
        this->temperatura = temperatura;
    }

};
int main(){
// getters atrubuto privado que sea legible
//setters atributo privado que sea legible
Estufa estufa;

estufa.setTemperatura(10);
estufa.getTemperatura();

std::cout<<estufa.getTemperatura()<<'\n';


    return 0;
}