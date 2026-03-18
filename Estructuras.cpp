#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
#include <algorithm>

using namespace std;

struct Alumno {
    string nombre;
    double promedio;
    bool inscrito;
};

// Declaraciones (prototipos) de funciones y punteros

double leerPromedio(const string *prompt);
bool leerInscrito(const string *prompt);
void leerNombre(string *outNombre);
void mostrarLista(const vector<Alumno> *lista);

int main() {
    cout << "Programa: Registro de alumnos (nombre, promedio, inscrito)" << endl;
    cout << "---------------------------------------------------------------------" << endl;

    int n = 0;
    while (true) {
        cout << "Cuantos registros desea ingresar? (0 = terminar): ";
        if (cin >> n && n >= 0) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        cout << "Entrada inválida. Ingresa un número entero mayor o igual a 0." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (n == 0) {
        cout << "No se ingresaron registros. Saliendo." << endl;
        return 0;
    }

    vector<Alumno> lista;
    lista.reserve(n);

    for (int i = 0; i < n; ++i) {
        Alumno a;
        cout << "\nRegistro " << (i + 1) << " de " << n << ":" << endl;

        // Leer nombre usando puntero
        leerNombre(&a.nombre);

        // Leer promedio usando puntero al prompt
        string pmt = "Promedio (ej: 8.5): ";
        a.promedio = leerPromedio(&pmt);

        // Leer inscrito usando puntero al prompt
        string pmt2 = "Inscrito? (s/n): ";
        a.inscrito = leerInscrito(&pmt2);

        lista.push_back(a);
    }

    // Mostrar usando puntero a la lista
    mostrarLista(&lista);

    cout << "\nFin del programa." << endl;
    return 0;
}

// Implementaciones de funciones (debajo del main) que usan punteros

// Lee un double con validación. recibe puntero a string con el prompt
double leerPromedio(const string *prompt) {
    double val;
    while (true) {
        cout << *prompt;
        if (cin >> val) {
            if (val < 0.0) {
                cout << "El promedio no puede ser negativo. Inténtalo de nuevo." << endl;
            } else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpiar el buffer
                return val;
            }
        } else {
            cout << "Entrada inválida. Ingresa un número (ej: 7.5)." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

// Lee sí/no y devuelve bool. recibe puntero a string con el prompt
bool leerInscrito(const string *prompt) {
    string entrada;
    while (true) {
        cout << *prompt;
        if (!getline(cin, entrada)) entrada = "";
        // convertir a minúsculas
        transform(entrada.begin(), entrada.end(), entrada.begin(), ::tolower);
        // quitar espacios al inicio/fin
        auto start = entrada.find_first_not_of(" \t\r\n");
        if (start == string::npos) entrada = "";
        else entrada = entrada.substr(start, entrada.find_last_not_of(" \t\r\n") - start + 1);

        if (entrada == "s" || entrada == "si" || entrada == "sí") return true;
        if (entrada == "n" || entrada == "no") return false;
        cout << "Respuesta no reconocida. Escribe 's' (si) o 'n' (no)." << endl;
    }
}

// Lee nombre y lo escribe en outNombre (puntero)
void leerNombre(string *outNombre) {
    while (true) {
        cout << "Nombre completo: ";
        if (!getline(cin, *outNombre)) *outNombre = "";
        // quitar espacios al inicio/fin
        auto start = outNombre->find_first_not_of(" \t\r\n");
        if (start == string::npos) *outNombre = "";
        else *outNombre = outNombre->substr(start, outNombre->find_last_not_of(" \t\r\n") - start + 1);

        if (outNombre->empty()) {
            cout << "El nombre no puede estar vacío. Intenta nuevamente." << endl;
        } else break;
    }
}

// Muestra la lista usando puntero a vector
void mostrarLista(const vector<Alumno> *lista) {
    cout << "\nLista de alumnos ingresados:" << endl;
    cout << left << setw(35) << "Nombre" << setw(12) << "Promedio" << setw(10) << "Inscrito" << endl;
    cout << string(57, '-') << endl;
    cout << fixed << setprecision(2);
    for (const auto &al : *lista) {
        cout << left << setw(35) << al.nombre
             << setw(12) << al.promedio
             << setw(10) << (al.inscrito ? "Si" : "No") << endl;
    }
}
