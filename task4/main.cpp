#include <iostream>

// the task is to apply taylor series 
// to approximate ln(2) to an x^n series 
// for given n

float ln2_r_taylor(int b, float c, int n) {
    if (b > n) {
        return 0;
    }
    return (b % 2 != 0) * (1 / c) - (b % 2 == 0) * (1 / c) + ln2_r_taylor(b + 1, c + 1, n);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << 1 + ln2_r_taylor(2, 2.0, n) << std::endl;
    return 0;
}