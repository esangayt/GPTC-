#include <iostream>


int main() {
    // Tipos de datos primitivos
    int entero = 5;
    float flotant = 3.15f;
    double doble = 3.1416;
    char caracter = 'a';
    bool booleano = true;

    std::cout << "Entero: " << entero << std::endl;
    std::cout << "Flotante: " << flotant << std::endl;
    std::cout << "Doble: " << doble << std::endl;
    std::cout << "Caracter: " << caracter << std::endl;
    std::cout << "Booleano: " << booleano << std::endl;

    //call OperadoresRelacionales
    int x = 5;
    int y = 10;

    std::cout << (x == y) << std::endl;
    std::cout << (x != y) << std::endl;
    std::cout << (x > y) << std::endl;
    std::cout << (x < y) << std::endl;
    std::cout << (x >= y) << std::endl;
    std::cout << (x <= y) << std::endl;

    //Operadores lógicos
    bool a = true;
    bool b = false;

    std::cout << (a && b) << std::endl;
    std::cout << (a || b) << std::endl;
    std::cout << (!a) << std::endl;

    //Estructuras condicionales

}
