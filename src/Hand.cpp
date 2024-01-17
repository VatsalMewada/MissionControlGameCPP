// Hand.cpp
#include "Hand.h"
#include <iostream>

void Hand::display() const {
    std::cout << "Hand: ";
    Collection::display();
}
