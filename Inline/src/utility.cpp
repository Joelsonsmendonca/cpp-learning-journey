// utility.cpp

#include "utility.h" // Inclui as declara��es para garantir consist�ncia.

#include <sstream> // Usado para construir a string de sauda��o.

// Defini��o da fun��o formatGreeting
std::string formatGreeting(const std::string& name) {
    std::stringstream ss;
    ss << "Ol�, " << name << "! Tenha um �timo dia.";
    return ss.str();
}

// Defini��o da fun��o calculateCircleArea
double calculateCircleArea(double radius) {
    const double PI = 3.1415926535;
    if (radius < 0) {
        return 0; // �rea n�o pode ser negativa.
    }
    return PI * radius * radius;
}