#include <iostream>
#include <cstring>


int main() {
    std::string saludo = "Hola, mundo!";
    size_t pos=saludo.find("mundo");
    std::cout << "Posicion de la palabra 'mundo': " << pos << std::endl;

    saludo.replace(pos, 5, "c++");
}

