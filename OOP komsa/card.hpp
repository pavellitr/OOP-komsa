#pragma once


#include <iostream>
#include <string>

enum class TARO { Fool, Magician, Empress, Emperor, Death, Devil, KingOfPentacles, KingOfWands };


class Card
{
public:
	Card() {};
	void Naming(std::string typpe) {

		if (typpe == "Fool" || typpe == "1") {
			this->tipe = "Fool";
			this->type = TARO::Fool;
			this->about = "The Fool is everyone - including you and me. Each step he takes on his journey feels like stepping into a brave new world. Ultimately, the journey will change him. But as the card shows, he's a trustworthy lad whose tireless hope drives him toward his goal.";
		}
		else {
			if (typpe == "Magician" || typpe == "2") {
				this->tipe = "Magician";
				this->type = TARO::Magician;
				this->about = "The Magician is the card of self-confidence and adapting to situations through intellect and sheer will. The Magician is a schemer who always has one last trick up his sleeve, who despite everything manages to stay afloat and remain in control of his own destiny.";
			}
			else {
				if (typpe == "Empress" || typpe == "3") {
					this->tipe = "Empress";
					this->type = TARO::Empress;
					this->about = "The empress is a card of femininity and motherhood. She is authoritative, knows what she wants, and exhibits refinement and sensuousness. The Empress symbolizes creativity and growth, and instructs us not to dismiss our unconscious impulses, but to trust our intuition.";
				}
				else {
					if (typpe == "Emperor" || typpe == "4") {
						this->tipe = "Emperor";
						this->type = TARO::Emperor;
						this->about = "The Emperor represents patriarchal control and is pleased with the authority and power he possesses to shape the future. The Emperor makes the rules and enforces them for the common good. But prestige has its dark sides – the Emperor is dominating and ruthless and will climb over a mountain of bodies to achieve his aim.";
					}
					else {
						if (typpe == "Death" || typpe == "5") {
							this->tipe = "Death";
							this->type = TARO::Death;
							this->about = "Death is the card of becoming. It signifies an imminent and difficult transition – the conclusion of one phase of life and the beginning of another. Inevitably, something gets lost during the transformation, but something else will rise and take its place.";
						}
						else {
							if (typpe == "Devil" || typpe == "6") {
								this->tipe = "Devil";
								this->type = TARO::Devil;
								this->about = "The Devil is addiction, craving and passion. He brings fame and fortune, but at the price of losing oneself to a world of material distractions. The Devil lures unsuspecting souls into traps, but always grants them a choice. One can try their luck and take him up on his offer, but one should always know when to call quits.";
							}
							else {
								if (typpe == "KingOfPentacles" || typpe == "7") {
									this->tipe = "KingOfPentacles";
									this->type = TARO::KingOfPentacles;
									this->about = "The King of Pentacles is imperious. They represent entreprise, pragmatism, but also attachement. From such a person one can expect coldness or attachment to material possessions; they are likely to turn your world upside down sooner or later.";
								}
								else {
									if (typpe == "KingOfWands" || typpe == "8") {
										this->tipe = "KingOfWands";
										this->type = TARO::KingOfWands;
										this->about = "The master of planning and unorthodox ideas. An individual who brings people together and radiates inspiration to those they consider friends. However, their enemies will soon find they are an impulsive, devastating force of nature, capable of breaking oaths and crossing any line, just to see their goals achieved.";
									}
									else {
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	std::string tipe;
	TARO type;
	std::string about;

};







