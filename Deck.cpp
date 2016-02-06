/*CSC 478 - Deck of Cards
Author: Jenny Trippett
Date: 2-3-2016 */

#include <string>
#include "Deck.h"

Deck::Deck()
{
    int j = 0;
    for (int a = 0; a < 4; a++)
    {
        for(int i = 0; i < 13; i++)
        {
            my_deck[j].value = i;
            my_deck[j].suit = (Suit)a;
            j++;
        }
    }
}


