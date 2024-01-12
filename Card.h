// Card.h
#ifndef CARD_H
#define CARD_H

#include "Gem.h"

class Card {
public:
    Card(); // 構造函數
    void setLevel(int level); // 設定卡片層次
    int getLevel() const; // 獲取卡片層次
    void setGem(const Gem& gem); // 設定卡片的花磚
    const Gem& getGem() const; // 獲取卡片的花磚
    void setPoints(int points); // 設定卡片的勝利點
    int getPoints() const; // 獲取卡片的勝利點

private:
    int level; // 卡片層次
    Gem gem; // 卡片的花磚
    int points; // 卡片的勝利點
};

#endif // CARD_H
