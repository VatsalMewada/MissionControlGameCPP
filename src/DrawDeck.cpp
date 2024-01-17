// DrawDeck.cpp
#include "DrawDeck.h"
#include <algorithm>
#include <iostream>

void DrawDeck::shuffle() {
    std::random_shuffle(cards.begin(), cards.end());
}
