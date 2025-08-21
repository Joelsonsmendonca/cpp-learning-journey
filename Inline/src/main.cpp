// main.cpp

#include <iostream>
#include "utility.h" // Inclui nosso "cardápio" de funções!

int main() {
    // 1. Usando a função comum 'formatGreeting' (definida em utility.cpp)
    std::string greeting = formatGreeting("Ana");
    std::cout << greeting << std::endl;

    // 2. Usando a função comum 'calculateCircleArea' (definida em utility.cpp)
    double area = calculateCircleArea(10.0);
    std::cout << "A área de um círculo com raio 10 é: " << area << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    // 3. Usando a função template 'findSmaller' (definida em utility.inl)
    int smallerInt = findSmaller(42, 100);
    double smallerDouble = findSmaller(3.14, 2.71);
    char smallerChar = findSmaller('X', 'A');

    std::cout << "O menor entre 42 e 100 é: " << smallerInt << std::endl;
    std::cout << "O menor entre 3.14 e 2.71 é: " << smallerDouble << std::endl;
    std::cout << "O menor entre 'X' e 'A' é: " << smallerChar << std::endl;
    std::cout << "------------------------------------------" << std::endl;

    // 4. Usando o template variádico 'printItems' (definido em utility.inl)
    std::cout << "Imprimindo uma lista de itens variados:" << std::endl;
    printItems("Teste", 1, 2.5, 'c');

    return 0;
}