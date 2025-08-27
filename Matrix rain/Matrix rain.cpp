#include <iostream>
#include <windows.h> // A única parte nova que precisamos
#include <thread>    // Para o sleep
#include <random>

   struct Letter{
    char character;
    int x;
    int y;
} ;
   void goToXY(int x, int y);

int main() {

    
    const int SCREEN_WIDTH = 400;
    const int SCREEN_HEIGHT = 200;

    //configuração da aleatoriedade
    std::random_device rd;
    std::mt19937 rng(rd());

    //gerar numeros nos intervalos desejados
    std::uniform_int_distribution<int> distX(0, SCREEN_WIDTH - 1);
    std::uniform_int_distribution<int> distY(0, SCREEN_HEIGHT - 1);
    std::uniform_int_distribution<int> distChar(33, 126);

    std::vector<Letter> allLetter;
    const int NUM_STREAMS = 80;

    for (int i = 0; i < NUM_STREAMS; ++i) {
        Letter newLetter;

        //give a aleatory caracter to newLetter
        newLetter.character = static_cast<char>(distChar(rng));

        //give a aleatory numY
        newLetter.y = distY(rng);

        newLetter.x = distX(rng);

        allLetter.push_back(newLetter);
    }

    while (true)
    {
        system("cls");
        for (auto& letter : allLetter) {
            goToXY(letter.x, letter.y);

            //print the current letter
            std::cout << letter.character;

            //update Y position for the next frame
            letter.y++;

            if (letter.y >= SCREEN_HEIGHT) {
                letter.y = 0;
            }
        }
        
        //speed control
        std::this_thread::sleep_for(std::chrono::milliseconds(60));

    }


}

void goToXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}