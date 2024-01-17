// Collection.cpp
#include <iostream>
#include "Collection.h"
#include <algorithm>

Collection::~Collection() {
    for (Card* card : cards) {
        delete card;
    }
}

void Collection::addCard(Card* card) {
    cards.push_back(card);
}

void Collection::display() const {
    for (const Card* card : cards) {
        card->display();
        std::cout << " ";
    }
    std::cout << std::endl;
}

Card* Collection::drawCard() {
    if (!cards.empty()) {
        Card* drawnCard = cards.back();
        cards.pop_back();
        return drawnCard;
    } else {
        std::cout << "Draw deck is empty!" << std::endl;
        return nullptr;
    }
}
