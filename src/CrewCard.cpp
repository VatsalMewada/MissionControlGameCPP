// CrewCard.cpp
#include "CrewCard.h"
#include <iostream>

CrewCard::CrewCard(const std::string& name, int rank, const std::string& mission)
    : Card(name), rank(rank), mission(mission) {}

int CrewCard::getRank() const {
    return rank;
}

std::string CrewCard::getMission() const {
    return mission;
}

void CrewCard::display() const {
    Card::display();
    std::cout << " (Rank: " << rank << ", Mission: " << mission << ")";
}
