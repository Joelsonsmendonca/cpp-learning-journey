#pragma once
// utility.h

#pragma once // Garante que este arquivo seja inclu�do apenas uma vez por compila��o.

#include <string> // Necess�rio para usar std::string nas declara��es.

// --- Declara��es de Fun��es Comuns ---
// A defini��o (c�digo) destas fun��es estar� em utility.cpp.

// Formata uma mensagem de boas-vindas.
std::string formatGreeting(const std::string& name);

// Calcula a �rea de um c�rculo dado o seu raio.
double calculateCircleArea(double radius);


// --- Declara��es de Fun��es Template ---
// A defini��o (c�digo) destas fun��es estar� em utility.inl.

// Encontra e retorna o menor de dois itens de qualquer tipo.
template<typename T>
T findSmaller(T a, T b);

// Imprime uma lista de argumentos de tipos variados.
template<typename... Args>
void printItems(Args... args);


// --- Inclus�o da Implementa��o do Template ---
// O compilador precisa ver o c�digo dos templates, por isso o inclu�mos aqui.
#include "utility.inl"