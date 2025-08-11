#include <iostream>
#include <vector>
#include <random>

int main() {

	int smallestNumber = 0;

	std::vector<int> randomNumbers;
	std::srand(std::time(nullptr));

	for (int i = 0; i < 12; i++) {
		int number = std::rand() % 100 - 50;
		randomNumbers.push_back(number);
	}



	smallestNumber = randomNumbers[0];

	if (!randomNumbers.empty()) {

		for (int i = 0; i < randomNumbers.size(); i++) {

			if (smallestNumber > randomNumbers[i]) {

				smallestNumber = randomNumbers[i];

			}

		}

		std::cout << smallestNumber;
	}

}