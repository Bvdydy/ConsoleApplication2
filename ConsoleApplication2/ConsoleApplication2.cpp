#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision(4);

    // Задание 1
    std::cout << "=== Задание 1: sin(x) на интервале (0, 4] ===" << std::endl;
    double end = 4.0;
    int points = 6;
    double step = end / points;

    for (int i = 1; i <= points; i++) {
        double x = i * step;
        double y = sin(x);
        std::cout << "x = " << std::setw(6) << x << "  sin(x) = " << std::setw(8) << y << std::endl;
    }

    std::cout << "\n=== Задание 2: Сумма чисел Фибоначчи ===" << std::endl;
    long long MAX;
    std::cout << "Введите MAX: ";
    std::cin >> MAX;

    long long fib1 = 1, fib2 = 1;
    long long sum = 0;
    int count = 0;

    while (true) {
        long long current = (count == 0) ? fib1 : (count == 1) ? fib2 : fib1 + fib2;
        if (sum + current > MAX) break;

        sum += current;
        count++;

        if (count >= 2) {
            long long next = fib1 + fib2;
            fib1 = fib2;
            fib2 = next;
        }
    }

    std::cout << "N = " << count << std::endl;
    std::cout << "S = " << sum << std::endl;

    return 0;
}