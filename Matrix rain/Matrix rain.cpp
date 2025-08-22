#include <iostream>
#include <windows.h> // A única parte nova que precisamos
#include <thread>    // Para o sleep
#include <random>

   struct Letra{
    char character;
    int x;
    int y;
} ;

// A única função nova que vamos aprender hoje
void goToXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    Letra letra1;
    letra1.character = 'a';

    int y_position = 0;

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> dist(1, 20);
    
    int randomNumber = dist(rng);
    while (true) {
        // Limpa a tela (um jeito simples)
        system("cls");
        
        // Move o cursor para a posição (10, y_position)
        const int NUM_STREAMS = 80;
        for (int i = 0; i < NUM_STREAMS; i++) {
            goToXY(randomNumber, y_position);

        }
        letra1.x = randomNumber;

        // Imprime um caractere
        std::cout << "j";
        std::cout << "o";

       
        

        // "Move" o caractere para baixo na próxima repetição
        y_position++;

        // Se chegar no final, volta para o topo
        if (y_position > 29) {
            y_position = 0;
        }

        // Espera um pouco para a animação não ser instantânea
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }

    return 0;
}