// Gem.h
#ifndef GEM_H
#define GEM_H

class Gem {
public:
    Gem(); // 構造函數
    void setType(int type); // 設定寶石類型
    int getType() const; // 獲取寶石類型
    void setQuantity(int quantity); // 設定寶石數量
    int getQuantity() const; // 獲取寶石數量

private:
    int type; // 寶石類型
    int quantity; // 寶石數量
};

#endif // GEM_H
