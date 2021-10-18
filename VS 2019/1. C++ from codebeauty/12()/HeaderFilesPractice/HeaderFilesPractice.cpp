#include <iostream>
#include "Food.h"
const char* RecomendMeAFood(char firstLetter);

int main()
{
    std::cout << "Today I will eat " << RecomendMeAFood('c') << std::endl;
    GetPizzaRecipe();

    system("pause>0");
    return 0;
}

