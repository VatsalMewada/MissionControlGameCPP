// CardSet.h
#ifndef CARDSET_H
#define CARDSET_H

#include "Collection.h"

class CardSet : public Collection {
public:
    int calculateScore() const;
};

#endif // CARDSET_H
