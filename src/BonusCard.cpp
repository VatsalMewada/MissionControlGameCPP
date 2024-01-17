// BonusCard.cpp
#include "BonusCard.h"
#include <iostream>

BonusCard::BonusCard(const std::string& name, int bonusPoints) : Card(name), bonusPoints(bonusPoints) {}

int BonusCard::getRank() const {
    return bonusPoints;
}

int BonusCard::getBonusPoints() const {
    return bonusPoints;
}

std::string BonusCard::getMission() const {
    return ""; // Bonus cards have no mission
}

void BonusCard::display() const {
    Card::display();
    std::cout << " (Bonus: " << bonusPoints << ")";
}
