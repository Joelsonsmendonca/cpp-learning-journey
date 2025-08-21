#include "utility.h" // Inclui nosso pr�prio header file. Note as aspas "" para arquivos locais.

#include <iostream>
#include <cstdlib>

// A defini��o da fun��o (a "cozinha").
// O compilador vai verificar se a assinatura dela � igual � do .h
std::vector<int> generateRandomNumbers(int numberOfNumbers) {
	std::vector<int> randomNumbers;
	std::cout << "Generated numbers: ";

	for (int i = 0; i < numberOfNumbers; ++i) {
		int number = std::rand() % 101 - 50;
		randomNumbers.push_back(number);
		std::cout << number << " ";
	}
	std::cout << std::endl;

	return randomNumbers;
}

std::vector<int> sortVector(std::vector<int> numbersToSort) {

	for (int i = 0; i < numbersToSort.size(); i++) {

		for (int j = i + 1; j < numbersToSort.size(); j++) {
			if (numbersToSort[i] > numbersToSort[j]) {
				std::swap(numbersToSort[i], numbersToSort[j]);

			}

		}

	}


	return numbersToSort;
}