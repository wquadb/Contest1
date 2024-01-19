#include <iostream>
#include <string>
#include <fstream>

bool queenmove(float x1, float x2, float y1, float y2) {
    float movex = std::abs(x1 - x2);
    float movey = std::abs(y1 - y2);
    if (movex == movey || movex == 0 || movey == 0) {
        return true;
    } else {
        return false;
    };
}

int main() {

    float x1, y1, x2, y2;

    std::ifstream in("input.txt");
    
    in >> x1 >> y1 >> x2 >> y2;

    in.close();
    
    std::ofstream out("output.txt");
    
    bool result = queenmove(x1, x2, y1, y2);
    
    if (result) {
        out << "YES";
    } else {
        out << "NO";
    };

    out.close();

    return 0;
}