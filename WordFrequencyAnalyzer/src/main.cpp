#include <iostream>
#include <cctype>
#include <sstream>
#include <locale>
#include <map>
#include <vector>

int main() {
	std::setlocale(LC_ALL, "");

	std::string originalPhrase = R"""(Imagine só – disse ele – se eles estão lá no estúdio, muito
tranquilos, dizendo que sabem qual é a Resposta à Questão da Vida, o
Universo e Tudo Mais, e depois têm que admitir que a Resposta é 42. O
programa vai acabar ali mesmo. Não dá pra espichar o programa,
entendeu?)""" "\n";

	std::stringstream ss;
	ss << originalPhrase;

	std::map<std::string, int> wordCountMap;
	std::string nextStr = "";
	

	while (ss >> nextStr) {

		std::string cleanPhrase = "";
		int lastPullIndex = 0;
		for (char &c : nextStr) {

			++lastPullIndex;
			if (!ispunct(c)) {
				cleanPhrase.push_back(std::tolower(c, std::locale()));
			}
			else
				break;
		}

		if (lastPullIndex != nextStr.size() - 1) {

			std::string leftover = nextStr.substr(lastPullIndex);

			ss << ' ' << leftover;
		}
		
		
		if (wordCountMap.find(cleanPhrase) == wordCountMap.end()) {
			wordCountMap.insert({ cleanPhrase, 1 });
		}
		else
			wordCountMap[cleanPhrase] += 1;

	}

	for (std::pair<const std::string, int> & pair : wordCountMap) {
		std::cout << "Word: " << pair.first << " is repeated: " << pair.second << " times" << std::endl;
	}
	
}