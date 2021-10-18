class PlayingCard
{
private:
	int cardNumber;
	int cardHouse;
public:
	void setCard(int cardNumberInput, int cardHouseInput)
	{
		cardNumber = cardNumberInput;
		cardHouse = cardHouseInput;
	}
	int getCardNumber()
	{
		return cardNumber;
	}
	int getCardHouse()
	{
		return cardHouse;
	}

};

