#include <iostream>

int main() {

	double miles = 0;
	double kilometers = 0;
	const double CONVERSION = 1.609;

	std::cout << "What values do you need to convert? Miles to Kilometers\n>>>";

	std::cin >> miles;


	//Error handling: char or string is good false
	while (!std::cin.good()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "Please, insert a number" << std::endl;
		std::cin >> miles;

	}

	kilometers = miles * CONVERSION;

	std::cout << miles << " Miles is " << kilometers << " kilometers";

}