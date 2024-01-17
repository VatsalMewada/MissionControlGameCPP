// Card.cpp
#include "Card.h"
#include <iostream>

Card::Card(const std::string& name) : name(name) {}

Card::~Card() {}

void Card::display() const {
    std::cout << name;
}
