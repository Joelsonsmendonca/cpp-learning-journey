// utility.inl

#pragma once

#include <iostream> // Necessário para o std::cout usado nos templates.

// Definição da função template findSmaller
template<typename T>
T findSmaller(T a, T b) {
    return (a < b) ? a : b;
}


// --- Implementação do Template Variádico printItems ---

// CASO BASE: Esta é a versão chamada quando resta apenas um argumento.
// Ela imprime o último item e uma quebra de linha para finalizar.
template<typename T>
void printItems(T last) {
    std::cout << last << std::endl;
}

// CASO RECURSIVO: Esta versão é chamada quando há mais de um argumento.
// Ela imprime o primeiro argumento, uma vírgula, e chama a si mesma com o resto.
template<typename T, typename... Args>
void printItems(T first, Args... rest) {
    std::cout << first << ", ";
    printItems(rest...); // Chamada recursiva com os argumentos restantes.
}