#include <iostream>
#include <cmath>

int main() {
    int v, t;
    std::cin >> v >> t;
    if (t <= 0 || v == 0) {
        std::cout << 0;
    } else if (v < 0) {
        std::cout << 109 - std::floor(std::abs(v * t) % 109);
    } else {
        std::cout << std::floor(std::abs(v * t) % 109);
    }
    return 0;
}