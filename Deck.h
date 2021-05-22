#ifndef SSDECKEDOUT_DECK_H
#define SSDECKEDOUT_DECK_H

#include "main.h"

#include <random>
#include <vector>
#include <iostream>
#include <algorithm>


class Deck {
public:
    Deck();
    ~Deck();
    void initialiseDeck();
    void shuffle();
    void printOutCard();
    void printOutCardValue();
    Card *getTopCard();
    void moveTopToBottom();
protected:
    std::vector<Card*> cards;
};

Deck::Deck() : cards() {
    cards.reserve(52);
    initialiseDeck();
    shuffle();
    printOutCard();
}

Deck::~Deck() {
    for (Card *card : cards) {
        delete card;
    }
    cards.clear(); // makes sure to completely clear
}

ostream& operator <<(ostream& stream, Card* card) {
    card->printCard(stream);
    card->getCardValue(stream);
    return stream;
}

void Deck::initialiseDeck(){
    Card* card;
    for (Rank rank = TWO; rank <= ACE; rank = static_cast<Rank>(static_cast<int>(rank) + 1)) {
        //https://stackoverflow.com/questions/3537966/is-there-an-alternative-to-using-static-castint-all-the-time
        for (Suit suit = HEARTS; suit <= SPADES; suit = static_cast<Suit>(static_cast<int>(suit) + 1)) {
            cards.push_back(new Card(rank, suit));
        }
    }
}
void Deck::shuffle() {
    srand(time(nullptr));
    random_shuffle(cards.begin(), cards.end());
}

Card *Deck::getTopCard() {
    return cards.front();
}

void Deck::printOutCard() {
    for (Card* card : cards)
    {
        card->printCard(cout);
        printOutCardValue();
    }
}
void Deck::printOutCardValue(){
    for (Card* card : cards)
    {
        card->getCardValue(cout);
    }
}

void Deck::moveTopToBottom() {
    cards.push_back(cards.front());  // take first card and put it into desk.
    cards.erase(cards.begin());   //delete top card needs to be done as there would be two same cards in the deck.
}

#endif //SSDECKEDOUT_DECK_H
