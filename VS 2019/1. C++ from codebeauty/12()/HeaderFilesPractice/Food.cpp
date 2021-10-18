#include <iostream>
#include "Food.h"

const char* RecomendMeAFood(char firstLetter)
{
	if (firstLetter == 'a' || firstLetter == 'A')
		return "apple";
	else if (firstLetter == 'b' || firstLetter == 'B')
		return "bannana";
	else if (firstLetter == 'c' || firstLetter == 'C')
		return "chocolate";
	else return "pizza";
}

void GetPizzaRecipe()
{
	std::cout << "To make pizza, you need...";
}