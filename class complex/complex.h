#pragma once
#include <iostream>

class Complex
{
public:
	Complex(double real_number, double imaginary_unit);

	~Complex();

private:
	double real_number = 0;
	double imaginary_unit = 0;

public:

	Complex operator+(const Complex& c) const;
	Complex operator-(const Complex& c) const;
	Complex operator*(const Complex& c) const;
	Complex operator/(const Complex& c) const;

	friend std::ostream& operator<<(std::ostream& output, const Complex& c);
};

