#include <iostream> //temperatura
int main(){
    int temperatura;
    std::cout<< "introduce la temperatura: ";
    std::cin>> temperatura;

    switch (temperatura){
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10:
            std::cout << "El agua está muy fría\n";
            break;
        case 11: case 12: case 13: case 14: case 15:
        case 16: case 17: case 18: case 19: case 20:
            std::cout << "El agua está fría\n";
            break;
        case 21: case 22: case 23: case 24: case 25:
        case 26: case 27: case 28: case 29: case 30:
            std::cout << "El agua está fresca\n";
            break;
        case 61: case 62: case 63: case 64: case 65:
        case 66: case 67: case 68: case 69: case 70:
        case 71: case 72: case 73: case 74: case 75:
        case 76: case 77: case 78: case 79: case 80:
            std::cout << "El agua está caliente\n";
            break;
        case 81: case 82: case 83: case 84: case 85:
        case 86: case 87: case 88: case 89: case 90:
        case 91: case 92: case 93: case 94: case 95:
        case 96: case 97: case 98: case 99: case 100:
            std::cout << "Cuidado: muy caliente\n";
            break;
        default:
            std::cout<<"temperatura fuera de rango (1-100)\n";
            break;
    }

    return 0;
}
