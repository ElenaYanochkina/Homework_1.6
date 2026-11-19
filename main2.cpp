#include<iostream>
#include<locale>
int exponentiation(int value, int power);
int main()
{
	setlocale(LC_ALL, "Russian");
	exponentiation(5, 2);
	exponentiation(3, 3);
	exponentiation(4, 4);
	return 0;
}
int exponentiation(int value, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	return result;
}