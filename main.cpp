#include <iostream>
void saludar() {
    std::cout << "Hola" << std::endl;
}

void saludarNombre(std::string nombre) {
    std::cout << "Hola " << nombre << std::endl;
}

int sumar(int a, int b) {
    return a + b;
}

int multi(int a, int b=1) {
    return a*b;
}

void pasaPorValor(int x) {
    x = x +1;
}

void porReferencia(int &x) {
    x = x +1;
}

int* crearArray(int tamaño) {
    int* array = new int[tamaño];
    for (int i=0; i<tamaño; i++) {
        array[i] = i*2;
    }
    return  array;
}

int main() {
    // Funciones
    saludar();
    saludarNombre("Erlin");
    std::cout << "Suma " <<  sumar(1,2) << std::endl;
    std::cout << "Suma " <<  multi(2) << std::endl;

    int numero = 5;
    pasaPorValor(numero);
    std::cout << "Número después de incrementar por valor: " << numero << std::endl; // Salida: 5

    int numero2=6;
    porReferencia(numero2);
    std::cout << "Número después de incrementar por referencia: " << numero2 << std::endl; // Salida: 7
    return 0;
}

