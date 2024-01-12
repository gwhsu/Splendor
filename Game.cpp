// Game.cpp
#include <iostream>
#include "Game.h"

Game::Game() : currentPlayerIndex(0) {
    // 初始化遊戲，例如設定玩家數量等
    // 在這裡可以添加初始化玩家、寶石、卡片等的邏輯
}

void Game::initialize() {
    // 初始化玩家
    numPlayers = 2; // 假設遊戲有2位玩家
    for (int i = 0; i < numPlayers; ++i) {
        Player player;
        players.push_back(player);
    }

    // 初始化寶石，這只是一個示例，你需要根據實際情況修改
    Gem gem1;
    gem1.setType(1);
    gem1.setQuantity(4);

    Gem gem2;
    gem2.setType(2);
    gem2.setQuantity(3);

    Gem gem3;
    gem3.setType(3);
    gem3.setQuantity(3);
    // 在這裡可以繼續添加其他寶石的初始化

    // 將寶石放入公共區域
    // 這只是一個示例，你可以根據實際情況修改
    // 這裡假設有三種不同的寶石，並將它們添加到公共區域
    for (int i = 0; i < 5; ++i) {
        gemsInCommonArea.push_back(gem1);
    }
    for (int i = 0; i < 5; ++i) {
        gemsInCommonArea.push_back(gem2);
    }
    for (int i = 0; i < 5; ++i) {
        gemsInCommonArea.push_back(gem3);
    }

    // 在這裡可以繼續添加其他初始化邏輯，例如卡片的初始化
}

void Game::playerTurn(Player& player) {
    std::cout << "玩家 " << currentPlayerIndex + 1 << " 的回合\n";
    displayGameState(); // 顯示遊戲狀態

    // 玩家選擇收集寶石或購買卡片
    // collectGems 和 buyCard 函數
    // 處理玩家回合的邏輯
    std::cout << "選擇你的行動:\n";
    std::cout << "1. 收集寶石\n";
    std::cout << "2. 購買卡片\n";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            collectGems(player);
            break;
        case 2:
            buyCard(player);
            break;
        default:
            std::cout << "無效的選擇\n";
            break;
    }
}

void Game::collectGems(Player& player) {
    std::cout << "玩家 " << currentPlayerIndex + 1 << " 選擇收集寶石\n";

    // 在这里添加收集寶石的邏輯
    // 提示玩家选择寶石的方式，例如从寶石供應區或公共區域收集

    // 示例：假设玩家选择从寶石供應區收集
    std::cout << "請選擇要收集的寶石類型和數量：\n";
    // 在这里获取玩家的选择，并更新玩家的寶石信息

    // 示例结束

    // 在这里可以添加其他收集寶石的邏輯
}
void Game::buyCard(Player& player) {
    std::cout << "玩家 " << currentPlayerIndex + 1 << " 選擇購買卡片\n";

    // 在这里添加購買卡片的邏輯
    // 提示玩家选择要购买的卡片，从公共卡片區域中选择

    // 示例：假设玩家选择购买公共卡片區域的第一张卡片
    if (!cardsInCommonArea.empty()) {
        Card& selectedCard = cardsInCommonArea.front();
        // 检查玩家是否满足购买卡片的条件（例如擁有足夠的寶石）
        // 如果满足条件，更新玩家的卡片信息，扣除相應寶石
        // 否則，提示玩家无法购买该卡片
    }
    // 示例结束

}

bool Game::isGameOver() const {
    // 假設遊戲結束的條件是任意一位玩家達到15點勝利點
    const int victoryPointsToWin = 15;

    for (const Player& player : players) {
        if (player.getTotalPoints() >= victoryPointsToWin) {
            std::cout << "遊戲結束！玩家 " << currentPlayerIndex + 1 << " 獲勝！\n";
            return true;
        }
    }

    return false;
}


void Game::displayGameState() const {
    // 顯示玩家的資訊
    for (int i = 0; i < players.size(); ++i) {
        const Player& player = players[i];
        std::cout << "玩家 " << i + 1 << " 的資訊：\n";
        std::cout << "   寶石：";
        for (const Gem& gem : player.getGems()) {
            std::cout << " " << gem.getQuantity() << "x" << gem.getType();
        }
        std::cout << "\n   卡片區域：";
        for (const Card& card : player.getCards()) {
            std::cout << " 層次" << card.getLevel() << " ";
        }
        std::cout << "\n   勝利點： " << player.getTotalPoints() << "\n\n";
    }

    // 顯示公共卡片區域
    std::cout << "公共卡片區域：\n";
    // 在這裡添加顯示公共卡片區域的邏輯

    // 顯示寶石供應區
    std::cout << "寶石供應區：\n";
    for (const Gem& gem : gemsInCommonArea) {
        std::cout << " " << gem.getQuantity() << "x" << gem.getType();
    }
    std::cout << "\n\n";
}

void Game::startGame()
{
 std::cout << "遊戲開始！\n";
    initialize(); // 执行游戏初始化

    // 可以在这里添加其他开始游戏时的逻辑

    // 开始游戏循环，直到游戏结束
    while (!isGameOver()) {
        // 获取当前玩家
        Player& currentPlayer = players[currentPlayerIndex];

        // 处理当前玩家的回合
        playerTurn(currentPlayer);

        // 切换到下一个玩家
        currentPlayerIndex = (currentPlayerIndex + 1) % numPlayers;
    }

    // 游戏结束时的逻辑，例如显示最终结果等
    std::cout << "遊戲結束！\n";
    displayGameState();
}
