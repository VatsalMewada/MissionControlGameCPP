// DrawDeck.h
#ifndef DRAWDECK_H
#define DRAWDECK_H

#include "Collection.h"

class DrawDeck : public Collection {
public:
    void shuffle();
    using Collection::Collection; // Inherit constructors from Collection
    using Collection::cards; 
};

#endif // DRAWDECK_H
