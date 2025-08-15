#include <iostream>
#include <vector>
#include <numeric>  
#include <random>   
#include <algorithm> 

int main() {

	std::vector<int> numbers = {1,4,5,7,1,4,7};
	

	bool trocou;


	do {
		trocou = false;

		for (int i = 0; i < numbers.size() - 1; i++) {
			if (numbers[i] > numbers[i + 1]) {

				int aux = numbers[i];

				numbers[i] = numbers[i + 1];

				numbers[i + 1] = aux;

				trocou = true;
			}
		}


	} while (trocou);

	for (int num : numbers) {

		std::cout << num << " ";

	}
	std::cout << std::endl;

	return 0;
}