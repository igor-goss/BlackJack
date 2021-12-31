#include <string>
#include "Card.h"


Card* CreateDeck()
{
	std::string Hearts = "Hearts", Spades = "Spades", Clubs = "Clubs", Diamonds = "Diamonds";

	Card* Deck = new Card[208];

	Deck[0].rank = "2";
	Deck[0].suit = Hearts;
	Deck[0].denomination = 2;

	Deck[1].rank = "2";
	Deck[1].suit = Spades;
	Deck[1].denomination = 2;

	Deck[2].rank = "2";
	Deck[2].suit = Clubs;
	Deck[2].denomination = 2;

	Deck[3].rank = "2";
	Deck[3].suit = Diamonds;
	Deck[3].denomination = 2;

	Deck[4].rank = "3";
	Deck[4].suit = Hearts;
	Deck[4].denomination = 3;

	Deck[5].rank = "3";
	Deck[5].suit = Spades;
	Deck[5].denomination = 3;

	Deck[6].rank = "3";
	Deck[6].suit = Clubs;
	Deck[6].denomination = 3;

	Deck[7].rank = "3";
	Deck[7].suit = Diamonds;
	Deck[7].denomination = 3;

	Deck[8].rank = "4";
	Deck[8].suit = Hearts;
	Deck[8].denomination = 4;

	Deck[9].rank = "4";
	Deck[9].suit = Spades;
	Deck[9].denomination = 4;

	Deck[10].rank = "4";
	Deck[10].suit = Clubs;
	Deck[10].denomination = 4;

	Deck[11].rank = "4";
	Deck[11].suit = Diamonds;
	Deck[11].denomination = 4;

	Deck[12].rank = "5";
	Deck[12].suit = Hearts;
	Deck[12].denomination = 5;

	Deck[13].rank = "5";
	Deck[13].suit = Spades;
	Deck[13].denomination = 5;

	Deck[14].rank = "5";
	Deck[14].suit = Clubs;
	Deck[14].denomination = 5;

	Deck[15].rank = "5";
	Deck[15].suit = Diamonds;
	Deck[15].denomination = 5;

	Deck[16].rank = "6";
	Deck[16].suit = Hearts;
	Deck[16].denomination = 6;

	Deck[17].rank = "6";
	Deck[17].suit = Spades;
	Deck[17].denomination = 6;

	Deck[18].rank = "6";
	Deck[18].suit = Clubs;
	Deck[18].denomination = 6;

	Deck[19].rank = "6";
	Deck[19].suit = Diamonds;
	Deck[19].denomination = 6;

	Deck[20].rank = "7";
	Deck[20].suit = Hearts;
	Deck[20].denomination = 7;

	Deck[21].rank = "7";
	Deck[21].suit = Spades;
	Deck[21].denomination = 7;

	Deck[22].rank = "7";
	Deck[22].suit = Clubs;
	Deck[22].denomination = 7;

	Deck[23].rank = "7";
	Deck[23].suit = Diamonds;
	Deck[23].denomination = 7;

	Deck[24].rank = "8";
	Deck[24].suit = Hearts;
	Deck[24].denomination = 8;

	Deck[25].rank = "8";
	Deck[25].suit = Spades;
	Deck[25].denomination = 8;

	Deck[26].rank = "8";
	Deck[26].suit = Clubs;
	Deck[26].denomination = 8;

	Deck[27].rank = "8";
	Deck[27].suit = Diamonds;
	Deck[27].denomination = 8;

	Deck[28].rank = "9";
	Deck[28].suit = Hearts;
	Deck[28].denomination = 9;

	Deck[29].rank = "9";
	Deck[29].suit = Spades;
	Deck[29].denomination = 9;

	Deck[30].rank = "9";
	Deck[30].suit = Clubs;
	Deck[30].denomination = 9;

	Deck[31].rank = "9";
	Deck[31].suit = Diamonds;
	Deck[31].denomination = 9;

	Deck[32].rank = "10";
	Deck[32].suit = Hearts;
	Deck[32].denomination = 10;

	Deck[33].rank = "10";
	Deck[33].suit = Spades;
	Deck[33].denomination = 10;

	Deck[34].rank = "10";
	Deck[34].suit = Clubs;
	Deck[34].denomination = 10;

	Deck[35].rank = "10";
	Deck[35].suit = Diamonds;
	Deck[35].denomination = 10;

	Deck[36].rank = "J";
	Deck[36].suit = Hearts;
	Deck[36].denomination = 10;

	Deck[37].rank = "J";
	Deck[37].suit = Spades;
	Deck[37].denomination = 10;

	Deck[38].rank = "J";
	Deck[38].suit = Clubs;
	Deck[38].denomination = 10;

	Deck[39].rank = "J";
	Deck[39].suit = Diamonds;
	Deck[39].denomination = 10;

	Deck[40].rank = "Q";
	Deck[40].suit = Hearts;
	Deck[40].denomination = 10;

	Deck[41].rank = "Q";
	Deck[41].suit = Spades;
	Deck[41].denomination = 10;

	Deck[42].rank = "Q";
	Deck[42].suit = Clubs;
	Deck[42].denomination = 10;

	Deck[43].rank = "Q";
	Deck[43].suit = Diamonds;
	Deck[43].denomination = 10;

	Deck[44].rank = "K";
	Deck[44].suit = Hearts;
	Deck[44].denomination = 10;

	Deck[45].rank = "K";
	Deck[45].suit = Spades;
	Deck[45].denomination = 10;

	Deck[46].rank = "K";
	Deck[46].suit = Clubs;
	Deck[46].denomination = 10;

	Deck[47].rank = "K";
	Deck[47].suit = Diamonds;
	Deck[47].denomination = 10;

	Deck[48].rank = "A";
	Deck[48].suit = Hearts;
	Deck[48].denomination = 11;

	Deck[49].rank = "A";
	Deck[49].suit = Spades;
	Deck[49].denomination = 11;

	Deck[50].rank = "A";
	Deck[50].suit = Clubs;
	Deck[50].denomination = 11;

	Deck[51].rank = "A";
	Deck[51].suit = Diamonds;
	Deck[51].denomination = 11;



	for (int i = 52; i < 208; ++i)
		Deck[i] = Deck[i - 52];

	return Deck;
}