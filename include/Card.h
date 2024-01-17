// Card.h
#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(const std::string& name);
    virtual ~Card();
    virtual int getRank() const = 0;
    virtual std::string getMission() const = 0;
    virtual void display() const;

private:
    std::string name;
};

#endif // CARD_H
