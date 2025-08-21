#include <vector>
#include <iostream>

//a defination of a function
std::vector<int> generateRandomNumbers(int numberOfNumbers) {
	std::vector<int> randomNumbers;

	for (int i = 0; i < numberOfNumbers; ++i) {

		int number = std::rand() % 101 - 50;

		randomNumbers.push_back(number);

		std::cout << number << " ";
	}

	return randomNumbers;
}
//here we create a external function
