
#include <iostream>
#include <map>

int main()
{
	double celsius = 0.0;
	double fahrenheit = 0.0;

	enum escolha {
		Sim,
		Nao
	};

	escolha escolhaFinal = escolha::Nao;

	int sairOuNao;

	do {
		std::cout << "Coloque a temperatura em celsius: ";
		std::cin >> celsius;
		fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
		std::cout << "A temperatura em fahrenheit eh: " << fahrenheit << std::endl;

		std::cout << "Voc� deseja encerrar o programa? 0 para SIM e 1 para N�O" << std::endl;
		std::cin >> sairOuNao;

		if (sairOuNao == 0) {
			escolhaFinal = escolha::Sim;
		}
		else if (sairOuNao == 1) {
			escolhaFinal = escolha::Nao;
		}
		else {
			std::cout << "Opção invalida. O programa será encerrado." << std::endl;
		}

		switch (escolhaFinal) {
		case escolha::Sim:
			break;

		case escolha::Nao:
			break;

		}

	} while (escolhaFinal == escolha::Nao);




	return 0;
}