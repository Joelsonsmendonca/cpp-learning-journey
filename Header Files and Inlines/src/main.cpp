#include <iostream>
#include <vector>
#include <ctime>

#include "utility.h" // <<<<<<< here is soluction!

int main() {

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int desiredQuantity = 0;
	std::cout << "How many numbers do you want to generate?" << std::endl;
	std::cin >> desiredQuantity;
	std::cout << std::endl;

	// Now the compiller knows generateRandomNumbers
	// because we read the menu (included the utility.h).
	std::vector<int> randomNums = generateRandomNumbers(desiredQuantity);

	std::vector<int> sortedNums = sortVector(randomNums);
	std::cout << "\nSorted numbers: ";

	for (int number : sortedNums) {
		std::cout << number << " ";

	}

	return 0;
}