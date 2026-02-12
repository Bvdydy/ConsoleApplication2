#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision(4);

    double start = 0.0;
    double end = 4.0;
    int points = 6;
    double step = end / points;

    std::cout << "=== sin(x) calculation on (0, 4] ===" << std::endl;
    std::cout << "Point    x        sin(x)" << std::endl;
    std::cout << "--------------------------" << std::endl;

    for (int i = 1; i <= points; i++) {
        double x = i * step;
        double y = sin(x);
        std::cout << std::setw(3) << i
            << "    " << std::setw(6) << x
            << "    " << std::setw(8) << y << std::endl;
    }

    return 0;
}