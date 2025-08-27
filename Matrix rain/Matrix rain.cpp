#include <iostream>
#include <windows.h> // The only new part we need
#include <thread>    // For the sleep
#include <random>

struct Stream {
	int x;
	int y;
	int length;
	int speed;
	std::vector<char> characters;
};
void goToXY(int x, int y);
void setColor(int color);
void hideCursor();

int main() {
	hideCursor();


	const int SCREEN_WIDTH = 120;
	const int SCREEN_HEIGHT = 22;


	//randomness setup
	std::random_device rd;
	std::mt19937 rng(rd());

	//generate numbers in the desired intervals
	std::uniform_int_distribution<int> distX(0, SCREEN_WIDTH - 1);
	std::uniform_int_distribution<int> distY(0, SCREEN_HEIGHT - 1);
	std::uniform_int_distribution<int> distChar(33, 126);
	std::uniform_int_distribution<int> distLength(5, 20);
	std::uniform_int_distribution<int> distSpeed(1, 3);


	std::vector<Stream> allStreams;
	const int NUM_STREAMS = 10; //numbers of streams

	for (int i = 0; i < NUM_STREAMS; ++i) {
		Stream newStream;


		//Populating with randomness in the components of my stream vector
		newStream.y = distY(rng);

		newStream.x = distX(rng);

		newStream.length = distLength(rng);
		newStream.speed = distSpeed(rng);

		for (int j = 0; j < newStream.length; ++j) {
			newStream.characters.push_back(static_cast<char>(distChar(rng)));
		}
		allStreams.push_back(newStream);
	}

	while (true)
	{

		for (auto& stream : allStreams) {


			// Erases the final character of the animation's tail to create the illusion of movement.
			int tail_y = (stream.y - stream.length + SCREEN_HEIGHT) % SCREEN_HEIGHT;
			goToXY(stream.x, tail_y);
			std::cout << ' ';


			//for loop used to draw the tails on the screen
			for (int l = 0; l < stream.length; l++) {
				// Calculates the row of the current character
				int current_y = (stream.y - l + SCREEN_HEIGHT) % SCREEN_HEIGHT;
				stream.characters[l] = static_cast<char>(distChar(rng));

				// Color logic
				if (l == 0) setColor(15); // White Leader
				else if (l < stream.length / 3) setColor(10); // Light Green Tail
				else setColor(2); // Dark Green Tail

				goToXY(stream.x, current_y);
				std::cout << stream.characters[l];
			}


			// Updates the Y position for the next frame
			stream.y = (stream.y + stream.speed) % SCREEN_HEIGHT;
		}

		//speed control
		std::this_thread::sleep_for(std::chrono::milliseconds(100));

	}

	return 0;
}


// moves the terminal 'cursor' to specified coordinates
void goToXY(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void hideCursor() {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}