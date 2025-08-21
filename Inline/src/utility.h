#pragma once
// utility.h

#pragma once // Garante que este arquivo seja incluído apenas uma vez por compilação.

#include <string> // Necessário para usar std::string nas declarações.

// --- Declarações de Funções Comuns ---
// A definição (código) destas funções estará em utility.cpp.

// Formata uma mensagem de boas-vindas.
std::string formatGreeting(const std::string& name);

// Calcula a área de um círculo dado o seu raio.
double calculateCircleArea(double radius);


// --- Declarações de Funções Template ---
// A definição (código) destas funções estará em utility.inl.

// Encontra e retorna o menor de dois itens de qualquer tipo.
template<typename T>
T findSmaller(T a, T b);

// Imprime uma lista de argumentos de tipos variados.
template<typename... Args>
void printItems(Args... args);


// --- Inclusão da Implementação do Template ---
// O compilador precisa ver o código dos templates, por isso o incluímos aqui.
#include "utility.inl"