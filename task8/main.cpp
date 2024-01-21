#include <iostream>
#include <map>

int main() {
    int day, month, year;
    std::cin >> day >> month >> year;
    std::map<int, int> m = {
        {1, 31},{2, 28},{3, 31},{4, 30}, 
        {5, 31},{6, 30},{7, 31},{8, 31},
        {9, 30},{10, 31},{11, 30},{12, 31}
    };
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        m[2] = 29;
    }
    if (day + 2 > m[month]) {
        day = day + 2 - m[month];
        if (month == 12) {
            month = 1;
            year += 1;
        } else {
            month += 1;
        }
    } else {
        day += 2;
    }
    std::cout << day << " " << month << " " << year;
    return 0;
} 