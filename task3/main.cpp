#include <iostream>
#include <cmath>

int main() {
    int v, t;
    std::cin >> v >> t;
    if (t <= 0 || v == 0) {
        std::cout << 0;
    } else {
        int result = std::floor((v * t) % 109);
        if (result < 0) {
            result += 109;
        }
        std::cout << result;
    }
    return 0;
}