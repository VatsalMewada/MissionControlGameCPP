// CardGame.cpp
#include <iostream>
#include <iomanip>
#include "CardGame.h"
#include "CrewCard.h"
#include "BonusCard.h"


CardGame::CardGame() : isPlayerTurn(true) {
    initializeGame();
}

void CardGame::initializeGame() {
    // Add card initialization logic here
    drawDeck.addCard(new CrewCard("Crew1", 1, "Mission1"));
    drawDeck.addCard(new CrewCard("Crew2", 2, "Mission2"));
    drawDeck.addCard(new BonusCard("Bonus1", 5));

    // Shuffle the deck
    drawDeck.shuffle();
}

void CardGame::play() {
    std::cout << "Welcome to Mission Control Card Game!" << std::endl;
    std::cout << "Let's get started." << std::endl;

    while (!drawDeck.cards.empty()) {


        if (isPlayerTurn) {
            playerTurn();
        } else {
            computerTurn();
        }
        isPlayerTurn = !isPlayerTurn;
    }

    endGame();
}

void CardGame::playerTurn() {
    std::cout << "\nPlayer's turn:" << std::endl;

    // Draw a card
    Card* drawnCard = playerHand.drawCard();
    if (!drawnCard) {
        drawnCard = drawDeck.drawCard();
        if (drawnCard) {
            std::cout << "Player drew a card from the deck: ";
            drawnCard->display();
            std::cout << std::endl;
        }
    }

    // Display player's hand
    playerHand.display();

    // Add logic for laying down sets, etc.
    // Implement your game rules here

    // Display player's set
    std::cout << "Player's set: ";
    playerSet.display();

    // Display player's score
    std::cout << "Player's score: " << playerSet.calculateScore() << std::endl;
}

void CardGame::computerTurn() {
    std::cout << "\nComputer's turn:" << std::endl;

    // Computer draws a card
    Card* drawnCard = computerHand.drawCard();
    if (!drawnCard) {
        drawnCard = drawDeck.drawCard();
        if (drawnCard) {
            std::cout << "Computer drew a card from the deck." << std::endl;
        }
    }

    // Display computer's hand
    computerHand.display();

    // Add logic for computer's turn, e.g., laying down sets, etc.
    // Implement computer's strategy here

    // Display computer's set
    std::cout << "Computer's set: ";
    computerSet.display();

    // Display computer's score
    std::cout << "Computer's score: " << computerSet.calculateScore() << std::endl;
}

void CardGame::endGame() {
    std::cout << "\nGame Over!" << std::endl;

    // Display final scores
    std::cout << "Final Scores:" << std::endl;
    std::cout << std::setw(15) << "Player Score: " << playerSet.calculateScore() << std::endl;
    std::cout << std::setw(15) << "Computer Score: " << computerSet.calculateScore() << std::endl;

    // Determine the winner
    if (playerSet.calculateScore() > computerSet.calculateScore()) {
        std::cout << "Congratulations! Player wins!" << std::endl;
    } else if (playerSet.calculateScore() < computerSet.calculateScore()) {
        std::cout << "Computer wins! Better luck next time." << std::endl;
    } else {
        std::cout << "It's a tie! Well played." << std::endl;
    }
}
