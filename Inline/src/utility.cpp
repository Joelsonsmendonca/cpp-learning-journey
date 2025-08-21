// utility.cpp

#include "utility.h" // Inclui as declarações para garantir consistência.

#include <sstream> // Usado para construir a string de saudação.

// Definição da função formatGreeting
std::string formatGreeting(const std::string& name) {
    std::stringstream ss;
    ss << "Olá, " << name << "! Tenha um ótimo dia.";
    return ss.str();
}

// Definição da função calculateCircleArea
double calculateCircleArea(double radius) {
    const double PI = 3.1415926535;
    if (radius < 0) {
        return 0; // Área não pode ser negativa.
    }
    return PI * radius * radius;
}