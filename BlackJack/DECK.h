#pragma once

#include <string>


class Card
{
public:
	std::string rank;
	std::string suit;
	int denomination;
};


void CreateDeck(Card* Deck);

void DeckShuffle(Card* Deck);
