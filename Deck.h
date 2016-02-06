/* CSC 478 - Software Engineering
Author: Jennifer Trippett
Date: 02-06-2015
Deck class header file */

typedef enum _Suit {hearts, diamonds, spades, clubs} Suit;

class Deck
{
    public:
    class Card
    {
        public:
        int value;
        Suit suit ;
    };
    Card my_deck[52];
    Deck();
};



