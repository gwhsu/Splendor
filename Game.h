// Game.h
#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Card.h"
#include "Gem.h" 

class Game {
public:
    Game(); // 構造函數
    void initialize(); // 初始化遊戲
    void displayGameState() const; // 顯示遊戲狀態
    void startGame(); // 遊戲開始
    void playerTurn(Player& player); // 玩家回合
    void collectGems(Player& player); // 收集寶石
    void buyCard(Player& player); // 購買卡片
    bool isGameOver() const; // 檢查遊戲是否結束

private:
    std::vector<Player> players; // 玩家列表
    std::vector<Gem> gemsInCommonArea; // 公共區域的寶石
    std::vector<Card> cardsInCommonArea; // 公共區域的卡片
    // 在這裡可以添加遊戲狀態的其他信息，例如公共卡片區域等
    int currentPlayerIndex; // 當前玩家的索引
    int numPlayers; // 玩家数量
};

#endif // GAME_H
