#include <iostream>

int main() {
    long int var;
    std::cin >> var;
    int sum = 0;
    for (int i = 0 ; var != 0; i++) {
        sum += var % 10;
        var /= 10;
    }
    std::cout << sum << std::endl;
    return 0;
}