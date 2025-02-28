#include <iostream>
#include <vector>

// Функция для вычисления n-го числа Фибоначчи с использованием DP
long long fibonacci(int n)
{
    // Базовый случай: если n равно 0 или 1, возвращаем n
    if (n <= 1)
    {
        return n;
    }

    // Создаем массив для хранения уже вычисленных чисел Фибоначчи
    std::vector<long long> dp(n + 1);

    // Инициализируем базовые значения
    dp[0] = 0;
    dp[1] = 1;

    // Заполняем массив значениями чисел Фибоначчи
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // Возвращаем n-е число Фибоначчи
    return dp[n];
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    // Вычисляем и выводим результат
    std::cout << "Число Фибоначчи под номером " << n << " равно " << fibonacci(n) << std::endl;

    return EXIT_SUCCESS;
}