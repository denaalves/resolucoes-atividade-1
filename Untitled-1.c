#include <iostream>
#include <cmath>

int main() {
    const double pi = 3.14159; // Valor de pi
    double raio, area, valorAdicional;

    //std::cout << "Digite o valor do raio do circulo: ";
    std::cin >> raio;

    //std::cout << "Digite o valor adicional para somar a area: ";
    std::cin >> valorAdicional;

    // Calcula a area do circulo usando a formula A = pi * r^2
    area = pi * std::pow(raio, 2);

    // Soma o valor adicional à área
    area += valorAdicional;

    printf("A=%.4f\n", area);

    return 0;
}