#include <iostream>
#include <limits>
#include <string>
#include <new>
#include <cctype>

// === Declaraciones "arriba" (variables globales y prototipos) ===
int g_tam = 0;                         // tamaño de los arrays
std::string* g_prompts = nullptr;       // array dinamico de prompts
std::string* g_notas   = nullptr;       // array dinamico de notas (std::string)

// Prototipos (implementaciones abajo del main)
int leerEnteroPositivo(const char* prompt);
void limpiarRestoDeLinea();
std::string trim(const std::string& s);
bool esNumero(const std::string& in);

bool construirPrompts();    // reserva y llena g_prompts
bool reservarNotas();       // reserva g_notas
void capturarNotas();       // usa g_prompts y llena g_notas
void imprimirNotas();       // imprime g_notas
void liberarArrays();       // delete[] g_notas y g_prompts

int main(){
    // 1) Leer g_tam (solo numerico y positivo)
    g_tam = leerEnteroPositivo("cuantas notas almacenara? ");
    limpiarRestoDeLinea();

    // 2) Construir arrays dinamicos (prompts y notas)
    if (!construirPrompts() || !reservarNotas()) {
        std::cerr << "no se pudo asignar memoria" << '\n';
        liberarArrays();
        return 1;
    }

    // 3) Capturar y 4) Mostrar
    capturarNotas();
    imprimirNotas();

    // 5) Liberar
    liberarArrays();
    std::cout<<"gracias por usar este codigo"<<'\n';
    return 0;
}

// === Implementaciones "abajo" ===

// Valida entero positivo con mensaje exacto cuando no es numerico
int leerEnteroPositivo(const char* prompt) {
    int val;
    while (true) {
        std::cout << prompt;
        if (std::cin >> val && val > 0) {
            return val;
        }
        std::cout << "intente con algun numrero" << '\n';
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void limpiarRestoDeLinea() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string trim(const std::string& s) {
    size_t start = 0, end = s.size();
    while (start < end && std::isspace(static_cast<unsigned char>(s[start]))) ++start;
    while (end > start && std::isspace(static_cast<unsigned char>(s[end - 1]))) --end;
    return s.substr(start, end - start);
}

bool esNumero(const std::string& in) {
    std::string s = trim(in);
    if (s.empty()) return false;
    size_t i = 0;
    if (s[i] == '+' || s[i] == '-') { // signo opcional
        ++i;
        if (i >= s.size()) return false; // solo signo no es numero
    }
    bool tieneDigito = false;
    bool tienePunto = false;
    for (; i < s.size(); ++i) {
        char c = s[i];
        if (std::isdigit(static_cast<unsigned char>(c))) { tieneDigito = true; continue; }
        if (c == '.' && !tienePunto) { tienePunto = true; continue; }
        return false; // cualquier otro caracter invalida que sea puramente numerica
    }
    return tieneDigito; // al menos un digito
}

bool construirPrompts() {
    g_prompts = new (std::nothrow) std::string[g_tam];
    if (!g_prompts) return false;
    for (int i = 0; i < g_tam; ++i) {
        g_prompts[i] = std::string("ingrese una nota #") + std::to_string(i + 1) + ": ";
    }
    return true;
}

bool reservarNotas() {
    g_notas = new (std::nothrow) std::string[g_tam];
    return g_notas != nullptr;
}

void capturarNotas() {
    for (int i = 0; i < g_tam; ++i) {
        while (true) {
            std::cout << g_prompts[i];
            std::string entrada;
            if (!std::getline(std::cin, entrada)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "intente con alguna cadena de texto" << '\n';
                continue;
            }
            std::string t = trim(entrada);
            if (t.empty()) {
                std::cout << "la cadena no puede estar vacia" << '\n';
                continue;
            }
            if (esNumero(t)) {
                std::cout << "solo se aceptan cadenas (no numeros)" << '\n';
                continue;
            }
            g_notas[i] = entrada; // conservar texto tal cual fue ingresado
            break;
        }
    }
}

void imprimirNotas() {
    std::cout << "Notas ingresadas:" << '\n';
    for (int i = 0; i < g_tam; ++i) {
        std::cout << "Nota #" << (i + 1) << ": " << g_notas[i] << '\n';
    }
}

void liberarArrays() {
    delete[] g_notas;   g_notas = nullptr;
    delete[] g_prompts; g_prompts = nullptr;
    g_tam = 0;
}
