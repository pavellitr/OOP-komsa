#pragma once
#include "mixer.hpp"



class GM
{
public:
	GM() {};
	void start();

private:
	Mixer mixer;
	int points = 0;


};

void GM::start() {
	std::string s = "Y";
		std::cout << "Hey, hey. Welcome to my game. The goal is literally elementary. I will take out a card, and your goal is to guess what card it is." << std::endl;
		std::cout << std::endl;
		std::cout << "There are 8 cards in total: Fool, Magician, Empress, Emperor, Death, Devil, KingOfPentacles, KingOfWands. Each card appears 1 time in the deck." << std::endl;
		std::cout << std::endl;
		std::cout << "Card list: \n +Fool \n +Magician \n +Empress \n +Emperor \n +Death \n +Devil \n +KingOfPentacles \n +KingOfWands   " << std::endl;
		while (s == "Y") {
			points = 0;
		mixer.MixinIt();
		for (int x = 0; x < 8; x++) {
			Card card = mixer.cards.popBack();
			std::cout << card.tipe << std::endl;
			std::cout << "Name what card will be next?" << std::endl;
			std::string guess;
			std::cin >> guess;
			if (guess == card.tipe) {
				std::cout << "Correct, keep it up" << std::endl;
				std::cout << card.about << std::endl;
				std::cout << std::endl;
				points = points + (15 - x * 2);
			}
			else {
				std::cout << "Wrong, try again" << std::endl;
				std::cout << "The wished card is " << card.tipe << std::endl;
				std::cout << card.about << std::endl;
				std::cout << std::endl;
			}
		}
		std::cout << "Your final score:" << points << std::endl;
		std::cout << "Want to restart the game? (Y/N)" << std::endl;
		std::cin >> s;
	}
}
