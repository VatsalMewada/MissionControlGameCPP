// CardGame.h
#ifndef CARDGAME_H
#define CARDGAME_H

#include "DrawDeck.h"
#include "Hand.h"
#include "CardSet.h"

class CardGame {
public:
    CardGame();
    void play();

private:
    DrawDeck drawDeck;
    Hand playerHand;
    Hand computerHand;
    CardSet playerSet;
    CardSet computerSet;
    bool isPlayerTurn;

    void initializeGame();
    void playerTurn();
    void computerTurn();
    void endGame();
};

#endif // CARDGAME_H
