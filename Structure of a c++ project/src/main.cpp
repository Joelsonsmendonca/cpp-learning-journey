#include <iostream>
#include <vector>


//Declaration. Says this thing called generateRandomNumbers exists, and it takes int argument, and returns a vector<int>
std::vector<int> generateRandomNumbers(int numberOfNumbers);

int main() { //the is the entry point, where the program starts
	std::srand(std::time(nullptr));

	int desiredQuantity = 0;
	std::cout << "How many number do you want generate to sort?" << std::endl;
	std::cin >> desiredQuantity;
	std::cout << std::endl;

	//here we enter que int argument for the generateRandomNumbers
	std::vector<int> randomNums = generateRandomNumbers(desiredQuantity);

	std::vector<int> randomNumbers;

}