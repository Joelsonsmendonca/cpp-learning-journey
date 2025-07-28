#include <iostream>
#include <limits>

int main() {
	int number = 0;
	
	int exit = 0;

	do {
		std::cout << "Please, type a number that you want to check:" << std::endl;

		std::cin >> number;

		while (!std::cin.good()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Please, insert a number" << std::endl;
			std::cin >> number;

		}

		if (number % 2 == 0) {
			std::cout << "this number is even" << std::endl;

		}
		else
			std::cout << "this number is odd" << std::endl;

		std::cout << "If you want to exit type 0, if you want to check another number type 1" << std::endl;

		std::cin >> exit;
		while (!std::cin.good()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Please, insert a number" << std::endl;
			std::cin >> exit;

		}

	} while (exit == 1);




	return 0;
}