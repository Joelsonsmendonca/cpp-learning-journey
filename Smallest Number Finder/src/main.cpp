#include <iostream>
#include <vector>

int main() {

	int smallestNumber = 0;

	std::vector<int> numbers = { 2312,23,34,4,14123,5,23,251,1};

	smallestNumber = numbers[0];
	
	for (int i = 0; i < numbers.size(); i++) {

		if (smallestNumber > numbers[i]) {

			smallestNumber = numbers[i];

		}

	}

	std::cout << smallestNumber;
}