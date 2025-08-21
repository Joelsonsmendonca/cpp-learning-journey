#pragma once // Este é o "Include Guard". Garante que o arquivo só será incluído uma vez.

#include <vector> // Incluímos <vector> aqui, pois a nossa função usa std::vector.
#include <iostream>

// Esta é a declaração, a "promessa" do que utility.cpp oferece.
// Qualquer arquivo que incluir "utility.h" saberá que esta função existe.
std::vector<int> generateRandomNumbers(int numberOfNumbers);

std::vector<int> sortVector(std::vector<int> numbersToSort);

