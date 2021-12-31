// BlackJack.cpp : This file contains the "main" function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include "DECK.h"

using namespace std;



void DeckShuffle(Card* Deck);


int main()
{

	Card* Deck = CreateDeck();
	
	DeckShuffle(Deck);


	for (int i = 0; i < 208; i++)
	{
		cout << Deck[i].suit << "\n" << Deck[i].rank << "\n" << Deck[i].denomination << "\n";
	}



}


void DeckShuffle(Card* Deck)
{
	srand(time(NULL));
	Card temp;

	for (int i = 0; i < 208; ++i)
	{
		int j = rand() % 208;
		temp = Deck[i];
		Deck[i] = Deck[j];
		Deck[j] = temp;
	}
}

