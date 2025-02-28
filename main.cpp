#include <iostream>
#include <vector>

// ������� ��� ���������� n-�� ����� ��������� � �������������� DP
long long fibonacci(int n)
{
    // ������� ������: ���� n ����� 0 ��� 1, ���������� n
    if (n <= 1)
    {
        return n;
    }

    // ������� ������ ��� �������� ��� ����������� ����� ���������
    std::vector<long long> dp(n + 1);

    // �������������� ������� ��������
    dp[0] = 0;
    dp[1] = 1;

    // ��������� ������ ���������� ����� ���������
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // ���������� n-� ����� ���������
    return dp[n];
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    std::cout << "������� ����� ����� ���������: ";
    std::cin >> n;

    // ��������� � ������� ���������
    std::cout << "����� ��������� ��� ������� " << n << " ����� " << fibonacci(n) << std::endl;

    return EXIT_SUCCESS;
}