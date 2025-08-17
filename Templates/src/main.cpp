#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

std::vector<int> generateRandomNumbers(int numberOfNumbers);
std::vector<int> sortVector(std::vector<int> numbersToSort);
template<typename T>
void printVector(std::vector <T> vectorToPrint) {

	for (T element : vectorToPrint) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

}

template<typename T> 
void printMsg(T msg, bool newLine) {

	std::cout << msg;

	if (newLine) {
		std::cout << std::endl;
	}
}


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

	printVector(sortedNumbers);
	
	printVector<std::string>(std::vector<std::string> {"adam", "steve", "sdikop", "saisda"});

	printMsg<std::string>("Hello", true);
	printMsg<int>(123, true);
	printMsg<float>(12.23, true);
	printMsg<char>('s', true);

	return 0;
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

		int number = std::rand() % 101 - 50;

		randomNumbers.push_back(number);

		std::cout << number << " ";
	}

	return randomNumbers;
}