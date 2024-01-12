// Gem.cpp
#include "Gem.h"
#include <iostream>
Gem::Gem() : type(0), quantity(0) {
    // 默认构造函数的实现，你可以根据需要进行初始化
}

void Gem::setType(int type) {
    this->type = type;
}

int Gem::getType() const {
    return type;
}

void Gem::setQuantity(int quantity) {
    this->quantity = quantity;
}

int Gem::getQuantity() const {
    return quantity;
}