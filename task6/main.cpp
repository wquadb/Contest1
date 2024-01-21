#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << "\t";
    for (int j = 1; j <= n; ++j) {
        std::cout << j << "\t";
    }
    for (int i = 1; i <= n; ++i) {
        std::cout << "\n" << i << "\t"; 
        for (int j = 1; j <= n; ++j) {
            std::cout << (i * j) % m << "\t";
        }
    }
    return 0;
}