#include <iostream>
#include <stdlib.h>
#include "PlayingCard.h";
using std::cout;
using std::endl;
using std::swap;

const int SIZE_OF_ARRAY = 52; //[{cardsInMainDeck}, {0}, {cardsInTrashDeck}]

class PlayingTable
{
private:
	PlayingCard cardsInDeck[SIZE_OF_ARRAY];
	PlayingCard cardsFaceUp[SIZE_OF_ARRAY];
	PlayingCard cardsInTrashDeck[SIZE_OF_ARRAY];
public:
	//Generation Methods
	void generateCardsInDeckStandard()
	{
		int count = 0;
		for (int i = 1; i <= 4; i++)
		{
			for (int j = 1; j <= 13; j++)
			{
				cardsInDeck[count].setCard(j,i);
				count++;
			}
		}
		count = 0;
		for (int i = 1; i <= 4; i++)
		{
			for (int j = 1; j <= 13; j++)
			{
				cardsInTrashDeck[count].setCard(0, 0);
				count++;
			}
		}
	}
	//Order Methods
	void shuffleCardsInDeck()
	{
		for (int j = 1; j <= 100; j++)
		{
			int r1 = rand() % 53;
			int r2 = rand() % 53;
			if (r1 != r2)
			{
				swap(cardsInDeck[r1], cardsInDeck[r2]);
			}
		}
	}
	void arrangeCardsInDeck()
	{

	}
	//Extraction Methods
	PlayingCard trasnferTopCardFromCardsInDeck()
	{
		for (int i = 0; i < SIZE_OF_ARRAY; i++)
		{

		}
	}
	//Addition Methods
	
	//Display Methods
	void printDecks()
	{
		for (int i = 0; i < SIZE_OF_ARRAY; i++)
		{
			cout << cardsInDeck[i].getCardNumber() << " " << cardsInDeck[i].getCardHouse() << endl;
		}
		cout << endl;
		for (int i = 0; i < SIZE_OF_ARRAY; i++)
		{
			cout << cardsInTrashDeck[i].getCardNumber() << " " << cardsInTrashDeck[i].getCardHouse() << endl;
		}
	}
};

