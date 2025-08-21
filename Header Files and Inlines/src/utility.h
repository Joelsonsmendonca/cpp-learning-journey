#pragma once // Este � o "Include Guard". Garante que o arquivo s� ser� inclu�do uma vez.

#include <vector> // Inclu�mos <vector> aqui, pois a nossa fun��o usa std::vector.
#include <iostream>

// Esta � a declara��o, a "promessa" do que utility.cpp oferece.
// Qualquer arquivo que incluir "utility.h" saber� que esta fun��o existe.
std::vector<int> generateRandomNumbers(int numberOfNumbers);

std::vector<int> sortVector(std::vector<int> numbersToSort);

