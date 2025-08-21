// utility.inl

#pragma once

#include <iostream> // Necess�rio para o std::cout usado nos templates.

// Defini��o da fun��o template findSmaller
template<typename T>
T findSmaller(T a, T b) {
    return (a < b) ? a : b;
}


// --- Implementa��o do Template Vari�dico printItems ---

// CASO BASE: Esta � a vers�o chamada quando resta apenas um argumento.
// Ela imprime o �ltimo item e uma quebra de linha para finalizar.
template<typename T>
void printItems(T last) {
    std::cout << last << std::endl;
}

// CASO RECURSIVO: Esta vers�o � chamada quando h� mais de um argumento.
// Ela imprime o primeiro argumento, uma v�rgula, e chama a si mesma com o resto.
template<typename T, typename... Args>
void printItems(T first, Args... rest) {
    std::cout << first << ", ";
    printItems(rest...); // Chamada recursiva com os argumentos restantes.
}