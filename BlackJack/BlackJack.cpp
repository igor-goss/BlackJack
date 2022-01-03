// BlackJack.cpp : This file contains the "main" function. Program execution begins and ends there.
//

#include <iostream>
//#include "DECK.h"
#include "Gameplay.h"


void DeckShuffle(Card* Deck);


int main()
{

	Card* Deck = new Card[208];

	CreateDeck(Deck);
	DeckShuffle(Deck);

	Card* PlayedCards = new Card[208];

	Card* PlayersCards = new Card[9];
	for (int i = 0; i < 9; ++i)
		PlayersCards[i].denomination = 0;
	Card* DealersCards = new Card[9];
	for (int i = 0; i < 9; ++i)
		DealersCards[i].denomination = 0;

	/*for (int i = 0; i < 208; i++)
	{ 
		std::cout << Deck[i].suit << "\n" << Deck[i].rank << "\n" << Deck[i].denomination << "\n";
	}*/

	int CurrentCard = 0;

	std::cout << "Welcum to the game Blackjack!\n";
	std::cout << "Press 's' to start a new game\n";
	char button;
	std::cin >> button;


	int PlayersCount = 0, DealersCount = 0;

	switch (button)
	{
	case 's':

		int AceCount = 0;
		int NumOfPlayersCards = 0, NumOfDealersCards = 0;

		FirstDeal(Deck, PlayedCards, PlayersCards, DealersCards, CurrentCard, NumOfPlayersCards, NumOfDealersCards);

		PlayersCount = Counting(PlayersCards, AceCount);
		std::cout << "Your count is: " << PlayersCount << '\n';
		
		std::cout << "Chose your next action:\n";
		std::cout << "'h' Hit - take one more card\n";
		std::cout << "'d' Double - x2 your bid and take one more card\n";
		std::cout << "'o' Stand\n";
		if (PlayersCards[0].rank == PlayersCards[1].rank)
			std::cout << "'/' Split\n";

		std::cin >> button;

		switch (button)
		{

		case 'h':
			Hit(Deck, PlayedCards, PlayersCards, CurrentCard, NumOfPlayersCards, AceCount);
			PlayersCount = Counting(PlayersCards, AceCount);
			std::cout << "Your count is: " << PlayersCount << '\n';

			Dialog(Deck, PlayedCards, PlayersCards, CurrentCard, NumOfPlayersCards, AceCount);

			break;

		case 'd':

			break;

		case 'o':

			break;

		case '/':

			break;

		default:
			break;
		}

		break;
	}
	

}

