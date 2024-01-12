// Player.cpp
#include "Player.h"

Player::Player() {
    // Set initial gems for the player
    Gem initialGem;
    initialGem.setType(1); // Set the type according to your game logic
    initialGem.setQuantity(2); // Set the quantity according to your game logic
    gems.push_back(initialGem);

    // You can add more initial gems if needed
    // ...

    // Alternatively, you can have a loop to initialize multiple gems
    // for (int i = 0; i < numInitialGems; ++i) {
    //     Gem initialGem;
    //     // Set gem properties
    //     gems.push_back(initialGem);
    // }
}

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
