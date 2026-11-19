#include<iostream>
#include<locale>
int calc_fibonacci(int number);

int main()
{
    int number = 0;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << std::endl;
    if (number <= 0)
    {
        std::cout << "Число должно быть больше нуля.";
        return 0;
    }
    else
    std::cout << "Числа Фибоначчи: ";
    calc_fibonacci(number);
    return 0;
}

int calc_fibonacci(int number)
{
    unsigned long long first = 0;
    unsigned long long second = 1;

    for (int i = 1; i <= number; i++)
    {
        if (i == 1)
            std::cout << first << " ";
        else
        {
            unsigned long long result = first + second;
            first = second;
            second = result;
            std::cout << first << " ";
        }
    }
    return 0;
}