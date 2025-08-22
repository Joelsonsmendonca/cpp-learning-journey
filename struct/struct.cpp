#include <iostream>
#include <vector>

struct Jogador {
    std::string nome;
    int pontuacao;
    int vidas;
};

int main()
{
    std::vector<Jogador> todosOsJogadores;


    Jogador j1;
    j1.nome = "joel";
    j1.pontuacao = 100;
    j1.vidas = 3;

    Jogador j2;
    j2.nome = "Gemini";
    j2.pontuacao = 200;
    j2.vidas = 2;

    Jogador j3;
    j3.nome = "Jose";
    j3.pontuacao = 400;
    j3.vidas = 4;

    todosOsJogadores.push_back(j1);
    todosOsJogadores.push_back(j2);
    todosOsJogadores.push_back(j3);


    for (const auto& jogadorAtual : todosOsJogadores) {
        std::cout << " " << jogadorAtual.nome;
    }
}

