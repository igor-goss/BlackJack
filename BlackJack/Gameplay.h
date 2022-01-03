#pragma once

#include "DECK.h"

void FirstDeal(Card* Deck, Card* PlayedCards, Card* PlayersCards, Card* DealersCards, int& currentCard, int& NumOfPlayersCards, int& NumOfDealersCards);

int Counting(Card* Cards, int& AceCount);

void Hit(Card* Deck, Card* PlayedCards, Card* PlayersCards, int& CurrentCard, int& NumOfPlayersCards, int& AceCount);

void Dialog(Card* Deck, Card* PlayedCards, Card* PlayersCards, int& CurrentCard, int& NumOfPlayersCards, int& AceCount);

