#include "main.h"

enum Rank {
    TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
};
enum Suit {
    HEARTS = 1, DIAMONDS, CLUBS, SPADES
};

class Card {
public:
    Card(Rank rank, Suit suit);
    virtual ~Card();    // virtual destructor
    Rank getRank();
    Suit getSuit();
    void printCard(ostream&);
    int getCardValue();
    void printHand(Card&);
private:
    Rank rank;
    Suit suit;
};

Card::Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}

Card::~Card() {}

Rank Card::getRank(){
    return rank;
}

Suit Card::getSuit(){
    return suit;
}
int Card::getCardValue() {
    if (rank >= 0 && rank <= rank){
        switch(rank)
        {
            case TWO: return 2;
            case THREE: return 3;
            case FOUR: return 4;
            case FIVE: return 5;
            case SIX: return 6;
            case SEVEN: return 7;
            case EIGHT: return 8;
            case NINE: return 9;
            case TEN: return 10;
            case JACK: return 10;
            case QUEEN: return 10;
            case KING: return 10;
            case ACE: return 11;
        }

    }
    return 0;
}

void printHand(Card&){

}
void Card::printCard(ostream& out) {
    if (rank >= 0 && rank <= rank) {
        switch (rank) {
            case ACE:
                printf("%s of ", " ACE");
                break;
            case TWO:
                printf("%s of ", " TWO");
                break;
            case THREE:
                printf("%s of ", " THREE");
                break;
            case FOUR:
                printf("%s of ", " FOUR");
                break;
            case FIVE:
                printf("%s of ", " FIVE");
                break;
            case SIX:
                printf("%s of ", " SIX");
                break;
            case SEVEN:
                printf("%s of ", " SEVEN");
                break;
            case EIGHT:
                printf("%s of ", " EIGHT");
                break;
            case NINE:
                printf("%s of ", " NINE");
                break;
            case TEN:
                printf("%s of ", " TEN");
                break;
            case JACK:
                printf("%s of ", " JACK");
                break;
            case QUEEN:
                printf("%s of ", " QUEEN");
                break;
            case KING:
                printf("%s of ", " KING");
                break;
        }
        switch (suit) {
            case HEARTS:
                puts("HEARTS");
                break;
            case SPADES:
                puts("SPADES");
                break;
            case DIAMONDS:
                puts("DIAMONDS");
                break;
            case CLUBS:
                puts("CLUBS");
                break;
        }
    }
}
