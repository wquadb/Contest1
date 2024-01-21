#include <iostream>
#include <iomanip>

int main() {
    std::cout << "  \t";
    for (int i = 0; i < 16; i++) {
        std::cout << std::hex << std::uppercase << i << "\t";
    }

    for (int i = 0; i < 8; i++) {
        std::cout << '\n';
        if (i < 3) {
            std::cout << i << "\t";
        } else {
            std::cout << i << "\t";
            for (int j = 0; j < 16; j++) {
                int ascii_code = i * 16 + j;
                std::cout << (char)ascii_code << "\t";
            }
        }
    }
    return 0;
}