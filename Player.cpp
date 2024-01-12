// Player.cpp
#include "Player.h"

Player::Player() {}

void Player::addGem(const Gem& gem) {
    gems.push_back(gem);
}

void Player::addCard(const Card& card) {
    cards.push_back(card);
}

const std::vector<Gem>& Player::getGems() const {
    return gems;
}

const std::vector<Card>& Player::getCards() const {
    return cards;
}

int Player::getTotalPoints() const {
    int totalPoints = 0;
    for (const Card& card : cards) {
        totalPoints += card.getPoints();
    }
    return totalPoints;
}
