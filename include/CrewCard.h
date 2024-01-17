// CrewCard.h
#ifndef CREWCARD_H
#define CREWCARD_H

#include "Card.h"

class CrewCard : public Card {
public:
    CrewCard(const std::string& name, int rank, const std::string& mission);
    int getRank() const override;
    std::string getMission() const override;
    void display() const override;

private:
    int rank;
    std::string mission;
};

#endif // CREWCARD_H
