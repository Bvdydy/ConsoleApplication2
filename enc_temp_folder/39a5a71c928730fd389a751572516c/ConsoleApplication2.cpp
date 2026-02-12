#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << std::fixed << std::setprecision(4);

    // ===== ЗАДАНИЕ 1 =====
    std::cout << "=== ЗАДАНИЕ 1: Вычисление значений функции f(x) = sin(x)/x ===" << std::endl;
    std::cout << "Интервал: (0, 4]" << std::endl;

    double end = 4.0;
    int points = 6;
    double step = end / points;

    std::cout << "Точка    x        sin(x)/x" << std::endl;
    std::cout << "--------------------------" << std::endl;

    for (int i = 1; i <= points; i++) {
        double x = i * step;
        double y = sin(x)/x;
        std::cout << std::setw(3) << i
            << "    " << std::setw(6) << x
            << "    " << std::setw(8) << y << std::endl;
    }

    std::cout << "\n----------------------------------------\n" << std::endl;

    // ===== ЗАДАНИЕ 2 =====
    std::cout << "=== ЗАДАНИЕ 2: Сумма чисел Фибоначчи ===" << std::endl;
    long long MAX;
    std::cout << "Введите максимальное значение суммы (MAX): ";
    std::cin >> MAX;

    if (MAX < 1) {
        std::cout << "Ошибка: MAX должно быть >= 1" << std::endl;
        return 1;
    }

    long long fib1 = 1, fib2 = 1;
    long long sum = 0;
    int count = 0;

    // Первое число
    if (sum + fib1 <= MAX) {
        sum += fib1;
        count++;
    }
    else {
        std::cout << "N = " << count << ", S = " << sum << std::endl;
        return 0;
    }

    // Второе число
    if (sum + fib2 <= MAX) {
        sum += fib2;
        count++;
    }
    else {
        std::cout << "N = " << count << ", S = " << sum << std::endl;
        return 0;
    }

    // Последующие числа
    while (true) {
        long long next = fib1 + fib2;
        if (sum + next > MAX) break;

        sum += next;
        count++;
        fib1 = fib2;
        fib2 = next;
    }

    std::cout << "Результат:" << std::endl;
    std::cout << "N = " << count << " (количество чисел)" << std::endl;
    std::cout << "S = " << sum << " (сумма)" << std::endl;

    return 0;
}