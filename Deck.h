/*
Deck class header file
*/
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



