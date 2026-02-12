#include <iostream>
#include <cmath>

int main() {
    double start = 0.0;
    double end = 4.0;
    int points = 6;
    double step = end / points;

    std::cout << "Calculating sin(x) in 6 points on interval (0, 4]:" << std::endl;
    for (int i = 1; i <= points; i++) {
        double x = i * step;
        double y = sin(x);
        std::cout << "x = " << x << ", sin(x) = " << y << std::endl;
    }

    return 0;
}