// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include "Gem.h"
#include "Card.h"
#include <vector>

class Player {
public:
    Player(); // 構造函數
    void addGem(const Gem& gem); // 添加寶石到玩家
    void addCard(const Card& card); // 添加卡片到玩家的卡片區域
    const std::vector<Gem>& getGems() const; // 獲取玩家的寶石列表
    const std::vector<Card>& getCards() const; // 獲取玩家的卡片列表
    int getTotalPoints() const; // 獲取玩家的總勝利點

private:
    std::vector<Gem> gems; // 玩家的寶石列表
    std::vector<Card> cards; // 玩家的卡片區域
};

#endif // PLAYER_H
