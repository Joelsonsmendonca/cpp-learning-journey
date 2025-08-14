#include <iostream>
#include <vector>

int main() {

	std::vector<int> randomNumbers;
	std::srand(std::time(nullptr));
	
	for (int i = 0; i < 12; i++) {
		
		int number = std::rand() % 100 - 50;
		randomNumbers.push_back(number);
		std::cout << number << " ";
	}

	std::cout << "\n ---------------------------------\n";

	for (int i = 0; i < randomNumbers.size(); i++) {
		
		for (int j = i + i; j < randomNumbers.size(); j++) {
			if (randomNumbers[i] > randomNumbers[j]){
					std::swap(randomNumbers[i], randomNumbers[j]);

				}
		
		}

	}

	for (int num : randomNumbers) {
		std::cout << num << " ";
	}

}