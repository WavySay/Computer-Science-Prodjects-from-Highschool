#include <iostream>
#include "PlayingTable.h"
using std::cout;
using std::endl;

int main()
{
    PlayingTable table;
    table.generateCardsInDeckStandard();
    table.printDecks();

    system("pause>0");
    return 0;
    
}