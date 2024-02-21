// laba_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int i;
	std::cin >> i;
	unsigned char x = 7;
	bool n = char(1 * pow(2, i)) & x;
	std::cout << n << std::endl;
}