#include <iostream>

int r(int n, int m, int k) {
    if (n < m) {
        return 0;
    } else if (n == m) {
        return m / k;
    } else {
        return (n / m) * (m / k) + r((n / m) * (m % k) + (n % m), m, k);
    }
}

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    if (m < k || n < m) {
        std::cout << 0 << std::endl;
        return 0;
    } else if (m == k) {
        std::cout << n / m << std::endl;
        return 0;
    } else {
        std::cout << r(n, m, k) << std::endl;
        return 0;
    }
}