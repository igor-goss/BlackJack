#include <iostream>
#include "DECK.h"


void FirstDeal(Card* Deck, Card* PlayedCards, Card* PlayersCards, Card* DealersCards, int& currentCard, int& NumOfPlayersCards, int& NumOfDealersCards);
int Counting(Card* Cards, int& AceCount);
void Hit(Card* Deck, Card* PlayedCards, Card* PlayersCards, int& CurrentCard, int& NumOfPlayersCards, int& AceCount);
void Dialog(Card* Deck, Card* PlayedCards, Card* PlayersCards, int& CurrentCard, int& NumOfPlayersCards, int& AceCount);


void FirstDeal(Card* Deck, Card* PlayedCards, Card* PlayersCards, Card* DealersCards, int& currentCard, int& NumOfPlayersCards, int& NumOfDealersCards)
{
	float bid;
	std::cout << "Place your bid: ";
	std::cin >> bid;
	std::cout << "Your cards:\t\tDealer's cards:\n";
	std::cout << Deck[currentCard].rank << ' ' << Deck[currentCard].suit << "\t\t";
	PlayedCards[currentCard] = Deck[currentCard];
	PlayersCards[NumOfPlayersCards] = Deck[currentCard];
	++NumOfPlayersCards;

	++currentCard;

	std::cout << Deck[currentCard].rank << ' ' << Deck[currentCard].suit << '\n';
	PlayedCards[currentCard] = Deck[currentCard];
	DealersCards[NumOfDealersCards] = Deck[currentCard];
	++NumOfDealersCards;
	++currentCard;

	std::cout << Deck[currentCard].rank << ' ' << Deck[currentCard].suit << "\t\t";
	PlayedCards[currentCard] = Deck[currentCard];
	PlayersCards[NumOfPlayersCards] = Deck[currentCard];
	++NumOfPlayersCards;
	++currentCard;

	PlayedCards[currentCard] = Deck[currentCard];
	DealersCards[NumOfDealersCards] = Deck[currentCard];
	++NumOfDealersCards;
	++currentCard;

	std::cout << '*' << '\n';
}

int Counting(Card* Cards, int& AceCount)
{
	int Count = 0;
	for (int i = 0; i < 9; ++i)
		if (Cards[i].rank == "A")
			++AceCount;
	for (int i = 0; i < 9; ++i)
		Count += Cards[i].denomination;
	return Count;

}


void Hit(Card* Deck, Card* PlayedCards, Card* PlayersCards, int& CurrentCard, int& NumOfPlayersCards, int& AceCount)
{	
	

	PlayersCards[NumOfPlayersCards] = Deck[CurrentCard];
	PlayedCards[CurrentCard] = Deck[CurrentCard];
	++NumOfPlayersCards;
	++CurrentCard;
	std::cout << "Your cards are:\n";
	for (int i = 0; i < NumOfPlayersCards; ++i)
		std::cout << PlayersCards[i].rank << ' ' << PlayersCards[i].suit << '\n';

}

void Dialog(Card* Deck, Card* PlayedCards, Card* PlayersCards, int& CurrentCard, int& NumOfPlayersCards, int& AceCount)
{
	std::cout << "Chose your next action:\n";
	std::cout << "'h' Hit - take one more card\n";
	std::cout << "'o' Stand\n";

	int PlayersCount;

	char button;

	std::cin >> button;

	switch (button)
	{

	case 'h':
		Hit(Deck, PlayedCards, PlayersCards, CurrentCard, NumOfPlayersCards, AceCount);
		PlayersCount = Counting(PlayersCards, AceCount);
		std::cout << "Your count is: " << PlayersCount << '\n';

		Dialog(Deck, PlayedCards, PlayersCards, CurrentCard, NumOfPlayersCards, AceCount);


		break;

	case 'o':

		break;



	default:
		break;
	}


}