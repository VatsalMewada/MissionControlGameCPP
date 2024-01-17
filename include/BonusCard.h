// BonusCard.h
#ifndef BONUSCARD_H
#define BONUSCARD_H

#include "Card.h"

class BonusCard : public Card {
public:
    BonusCard(const std::string& name, int bonusPoints);
    int getBonusPoints() const;
    int getRank() const override;
    std::string getMission() const override;
    void display() const override;

private:
    int bonusPoints;
};

#endif // BONUSCARD_H
