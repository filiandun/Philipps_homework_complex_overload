#include <iostream>
#include "complex.h"

int main()
{
    setlocale(LC_ALL, "rus");

	Complex first_complex_number(2, 5);
	Complex second_complex_number(3, 4);

	std::cout << "Первое комплексное число: " << first_complex_number;
	std::cout << "Второе комплексное число: " << second_complex_number << std::endl;

	std::cout << "Сложение: " << first_complex_number + second_complex_number;
	std::cout << "Вычитание: " << first_complex_number - second_complex_number;
	std::cout << "Умножение: " << first_complex_number * second_complex_number;
	std::cout << "Деление: " << first_complex_number / second_complex_number;
}

