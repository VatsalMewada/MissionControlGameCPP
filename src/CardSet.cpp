#include "CardSet.h"
#include "BonusCard.h"
#include "CrewCard.h"

int CardSet::calculateScore() const {
    int score = 0;

    for (const Card* card : cards) {
        // Check if the card is a BonusCard
        if (const BonusCard* bonusCard = dynamic_cast<const BonusCard*>(card)) {
            score += bonusCard->getBonusPoints();
        } else {
            // Assuming the card is a CrewCard
            if (const CrewCard* crewCard = dynamic_cast<const CrewCard*>(card)) {
                score += crewCard->getRank();
            }
        }
    }

    return score;
}
