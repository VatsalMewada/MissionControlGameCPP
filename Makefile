CC = g++
CFLAGS = -std=c++11
SRC_DIR = src
INCLUDE_DIR = include

all: cardGame

cardGame: $(SRC_DIR)/main.cpp $(SRC_DIR)/Card.cpp $(SRC_DIR)/BonusCard.cpp \
           $(SRC_DIR)/CrewCard.cpp $(SRC_DIR)/Collection.cpp $(SRC_DIR)/DrawDeck.cpp \
           $(SRC_DIR)/Hand.cpp $(SRC_DIR)/CardSet.cpp $(SRC_DIR)/CardGame.cpp
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o cardGame $^

clean:
	rm -f cardGame
