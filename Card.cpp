// Card.cpp
#include "Card.h"

Card::Card() : level(0), points(0) {}

void Card::setLevel(int level) {
    this->level = level;
}

int Card::getLevel() const {
    return level;
}

void Card::setGem(const Gem& gem) {
    this->gem = gem;
}

const Gem& Card::getGem() const {
    return gem;
}

void Card::setPoints(int points) {
    this->points = points;
}

int Card::getPoints() const {
    return points;
}
