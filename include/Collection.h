// Collection.h
#ifndef COLLECTION_H
#define COLLECTION_H

#include "Card.h"
#include <vector>

class Collection {
public:
    virtual ~Collection();
    void addCard(Card* card);
    virtual void display() const;
    Card* drawCard();

protected:
    std::vector<Card*> cards;
};

#endif // COLLECTION_H
