#include <iostream>
#include <cctype>
#include <sstream>
#include <locale>
#include <map>
#include <vector>

int main() {
	std::setlocale(LC_ALL, "");

	std::string originalPhrase = R"""(In the heart of a bustling city, where skyscrapers kissed the clouds and the streets hummed with a constant rhythm, lived a small, forgotten patch of green. It wasn't a grand park, just a tiny square of grass and a single, ancient oak tree, nestled between two towering apartment buildings.

To the people who rushed by each day, their eyes fixed on their destinations, it was nearly invisible. But to a little girl named Lily, it was a magical kingdom.

Every afternoon, after school, Lily would visit the oak tree. She'd press her cheek against its rough bark and whisper her secrets to its rustling leaves. She told it about her wobbly tooth, the gold star she got in art class, and her dream of one day flying to the moon. The tree, in its own silent way, seemed to listen, its branches swaying gently in the breeze.

One blustery autumn day, a sign appeared in the little green patch. It read: "Future Site of a New Parking Garage." Lily's heart sank. The thought of her magnificent oak tree being replaced by cold, grey concrete was unbearable.

Tears welled in her eyes as she hugged the tree one last time. But as she did, she noticed something she'd never seen before. Tucked into a small hollow in the trunk was a tiny, hand-carved wooden bird. It was smooth and worn, as if it had been held by many hands before her.

An idea sparked in Lily's mind. The next day, she returned to the tree not with secrets, but with a plan. She brought a small, colorful birdhouse she had made from a shoebox and hung it on one of the lower branches. The day after, she left a handful of birdseed on the ground.

Slowly, something wonderful began to happen. A curious sparrow, then a cheerful robin, and soon a whole flock of chattering birds discovered Lily's offerings. The little green patch, once silent except for the city's hum, was now filled with chirps and songs.

People started to notice. A man on his way to work stopped to watch a blue jay take a splash in a puddle. A young woman paused her jog to listen to the sparrows' chorus. Soon, others joined in. They brought their own small gifts – a new birdhouse, a bag of seeds, a small dish of water.

The little green patch was no longer forgotten. It had become a tiny, vibrant sanctuary, a place of shared joy in the middle of the concrete jungle. The sign for the parking garage eventually disappeared, replaced by a new one, hand-painted by the residents. It simply said: "Our Tree."

Lily still visited her oak tree every day. She knew she hadn't saved it alone. It was the small acts of many that had made the difference. And as she watched a tiny finch feed its fledgling in the shoebox birdhouse, she understood that even the smallest gesture of kindness could grow into something beautiful and strong, something that could even save a kingdom.)""" "\n";

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