#include "complex.h"

/*
* Решил иначе написать, чем с классом Fraction (без дефолтного конструктора)
* может менее читабильным становится, но зато меньше строк лишних
*/

Complex::Complex(double real_number, double imaginary_unit)
{
	this->real_number = real_number;
	this->imaginary_unit = imaginary_unit;
}

Complex::~Complex() {}


Complex Complex::operator+(const Complex& c) const
{
	Complex addition(this->real_number + c.real_number, this->imaginary_unit + c.imaginary_unit);

	return addition;
}


Complex Complex::operator-(const Complex& c) const
{
	Complex substraction(this->real_number - c.real_number, this->imaginary_unit - c.imaginary_unit);

	return substraction;
}


Complex Complex::operator*(const Complex& c) const
{
	Complex multiplication(this->real_number * c.real_number - this->imaginary_unit * c.imaginary_unit, this->imaginary_unit * c.real_number + this->real_number * c.imaginary_unit);

	return multiplication;
}


Complex Complex::operator/(const Complex& c) const
{
	Complex division((this->real_number * c.real_number + this->imaginary_unit * c.imaginary_unit) / (c.real_number * c.real_number + c.imaginary_unit * c.imaginary_unit), (this->imaginary_unit * c.real_number - this->real_number * c.imaginary_unit) / (c.real_number * c.real_number + c.imaginary_unit * c.imaginary_unit));

	return division;
}


std::ostream& operator<<(std::ostream& output, const Complex& c)
{
	output << c.real_number << " + " << c.imaginary_unit << "i" << std::endl;

	return output;
}
