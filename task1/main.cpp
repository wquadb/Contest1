#include <iostream>
#include <cstdint>

bool isItAQueenMove(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2) {
    return std::abs(x1 - x2) == std::abs(y1 - y2) || x == x || y == y;
}

int main() {
    
    uint8_t x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;    
    
    if (isItAQueenMove(x1, x2, y1, y2)) {
        std::cout << "YES";
        return 0;
    };
    std::cout << "NO";
    return 0;
    
}