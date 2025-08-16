#include <iostream>
#include <vector>
#include <random>

std::vector<int> generateRandomNumbers(int numberOfNumbers);
std::vector<int> sortVector(std::vector<int> numbersToSort);


int main() {
	int numberOfNumbers = 0;

	std::cout << "How many number do you want generate to sort?" << std::endl;
	std::cin >> numberOfNumbers;
	std::cout << std::endl;


	std::vector<int> randomNumbers = generateRandomNumbers(numberOfNumbers);
	std::cout << std::endl;
	std::cout << "\n -------------------------------------\n";
	std::cout << std::endl;

	std::vector<int> sortedNumbers = sortVector(randomNumbers);


	for (int num : sortedNumbers) {
		std::cout << num << " ";
	}
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

std::vector<int> generateRandomNumbers(int numberOfNumbers) {
	std::vector<int> randomNumbers;
	std::srand(std::time(nullptr));

	for (int i = 0; i < numberOfNumbers; ++i) {
		
		int number = std::rand() %101 - 50;

		randomNumbers.push_back(number);

		std::cout << number << " ";
	}

	return randomNumbers;
}