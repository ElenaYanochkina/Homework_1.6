#include<iostream>
#include<locale>
int fibonacci(int number);
int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0;
	std::cout << "Введите число: ";
	std::cin >> number; 
	std::cout << std::endl;
	std::cout << "Числа Фибоначчи: ";
	for (int i = 0; i < number; i++)
	{
		std::cout << fibonacci(i) << " ";
	}
}
int fibonacci(int number)
{
	if (number <= 0)
		return 0;
	if (number == 1)
		return 1;

	return fibonacci(number - 1) + fibonacci(number - 2);

}