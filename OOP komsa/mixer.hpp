#pragma once

#include "list.hpp"
#include "card.hpp"


class Mixer
{
public:
	Mixer();
	void MixinIt();
	List<Card> cards;

};

Mixer::Mixer()
{
}

void Mixer::MixinIt() {
	int pregen[8];
	for (int x = 0; x < 8; x++) {
		pregen[x] = rand() % 8;
	}
	Card gen[8];
	for (int x = 0; x < 8; x++) {
		Card card;
		card.Naming(std::to_string(x + 1));
		gen[x] = card;
	}
	for (int x = 0; x < 4; x++) {
		Card crutch;
		crutch = gen[pregen[x+4]];
		gen[pregen[x + 4]] = gen[pregen[x]];
		gen[pregen[x]] = crutch;
	}
	for (int x = 0; x < 8; x++) {
		cards.PushBack(gen[x]);
	}


}




