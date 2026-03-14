#define UNIT_TEST
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "../memoriaDinamica.cpp"

// Simple test harness
static int tests_run = 0;
static int tests_failed = 0;
#define REQUIRE(cond) do { \
    ++tests_run; \
    if (!(cond)) { \
        ++tests_failed; \
        std::cerr << "Requirement failed: " #cond " at " << __FILE__ << ":" << __LINE__ << "\n"; \
    } \
} while(0)

struct CoutRedirect {
    std::streambuf* old;
    std::ostringstream capture;
    CoutRedirect() : old(std::cout.rdbuf(capture.rdbuf())) {}
    ~CoutRedirect(){ std::cout.rdbuf(old); }
    std::string str() const { return capture.str(); }
};

struct CinRedirect {
    std::streambuf* old;
    std::istringstream source;
    CinRedirect(const std::string& s) : old(std::cin.rdbuf()) {
        source.str(s);
        std::cin.rdbuf(source.rdbuf());
    }
    ~CinRedirect(){ std::cin.rdbuf(old); }
};

static void reset_globals() {
    liberarArrays(); // sets g_notas, g_prompts to nullptr and g_tam=0
}

// 1) trim behavior
static void test_trim() {
    REQUIRE(trim("") == "");
    REQUIRE(trim("   ") == "");
    REQUIRE(trim("  hola") == "hola");
    REQUIRE(trim("mundo   ") == "mundo");
    REQUIRE(trim("  hola  mundo  ") == "hola  mundo");
}

// 2) esNumero behavior
static void test_esNumero() {
    REQUIRE(esNumero("0"));
    REQUIRE(esNumero("123"));
    REQUIRE(esNumero("  42 "));
    REQUIRE(esNumero("+3.14"));
    REQUIRE(esNumero("-0.5"));

    REQUIRE(!esNumero(""));
    REQUIRE(!esNumero(" "));
    REQUIRE(!esNumero("abc"));
    REQUIRE(!esNumero("1a"));
    REQUIRE(!esNumero("+"));
    REQUIRE(!esNumero("."));
    REQUIRE(!esNumero("1.2.3"));
}

// 3) construirPrompts / reservarNotas / liberarArrays
static void test_construir_reservar_liberar() {
    reset_globals();
    g_tam = 3;
    REQUIRE(construirPrompts());
    REQUIRE(g_prompts != nullptr);
    REQUIRE(g_prompts[0] == std::string("ingrese una nota #1: "));
    REQUIRE(g_prompts[1] == std::string("ingrese una nota #2: "));
    REQUIRE(g_prompts[2] == std::string("ingrese una nota #3: "));

    REQUIRE(reservarNotas());
    REQUIRE(g_notas != nullptr);

    g_notas[0] = "uno";
    g_notas[1] = "dos";
    g_notas[2] = "tres";

    liberarArrays();
    REQUIRE(g_prompts == nullptr);
    REQUIRE(g_notas == nullptr);
    REQUIRE(g_tam == 0);
}

// 4) capturarNotas behavior with invalid attempts then valid string
static void test_capturarNotas_validations() {
    reset_globals();
    g_tam = 1;
    REQUIRE(construirPrompts());
    REQUIRE(reservarNotas());

    // Inputs: empty line -> numeric line -> valid text with spaces
    std::string input = "\n123\n  hola mundo  \n";
    CinRedirect in(input);
    CoutRedirect out;

    capturarNotas();

    // Stored exactly as entered (not trimmed)
    REQUIRE(g_notas[0] == std::string("  hola mundo  "));

    // Output should include messages for empty and numeric, and the prompt printed three times
    std::string o = out.str();
    // Expect messages in Spanish
    REQUIRE(o.find("la cadena no puede estar vacia") != std::string::npos);
    REQUIRE(o.find("solo se aceptan cadenas (no numeros)") != std::string::npos);

    // Count prompt occurrences
    const std::string prompt = g_prompts[0];
    size_t count = 0, pos = 0;
    while ((pos = o.find(prompt, pos)) != std::string::npos) { ++count; pos += prompt.size(); }
    REQUIRE(count == 3);
}

// 5) imprimirNotas formatting
static void test_imprimirNotas() {
    reset_globals();
    g_tam = 2;
    REQUIRE(construirPrompts());
    REQUIRE(reservarNotas());
    g_notas[0] = "alpha";
    g_notas[1] = "beta";

    CoutRedirect out;
    imprimirNotas();
    std::string o = out.str();

    REQUIRE(o.find("Notas ingresadas:") != std::string::npos);
    REQUIRE(o.find("Nota #1: alpha") != std::string::npos);
    REQUIRE(o.find("Nota #2: beta") != std::string::npos);
}

// 6) leerEnteroPositivo loops until valid positive integer
static void test_leerEnteroPositivo() {
    reset_globals();

    // Provide: non-number -> -1 -> 0 -> 5
    CinRedirect in("abc\n-1\n0\n5\n");
    CoutRedirect out;

    int v = leerEnteroPositivo("cuantas notas almacenara? ");
    REQUIRE(v == 5);

    std::string o = out.str();
    // Should include the failure message at least once
    size_t occurrences = 0, p = 0; 
    const std::string msg = "intente con algun numrero";
    while ((p = o.find(msg, p)) != std::string::npos) { ++occurrences; p += msg.size(); }
    REQUIRE(occurrences >= 3); // after abc, -1, 0
}

int main(){
    test_trim();
    test_esNumero();
    test_construir_reservar_liberar();
    test_capturarNotas_validations();
    test_imprimirNotas();
    test_leerEnteroPositivo();

    if (tests_failed == 0) {
        std::cout << "ALL TESTS PASSED (" << tests_run << ")\n";
        return 0;
    } else {
        std::cout << tests_failed << " TESTS FAILED of " << tests_run << "\n";
        return 1;
    }
}
