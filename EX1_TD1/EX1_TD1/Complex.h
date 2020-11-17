#pragma once

class Complex {

private:
	double re;
	double im;

public:
	Complex();
	Complex(double, double);
	Complex(const Complex &);
	void afficher();
	double module();
	Complex conjugue();
	Complex operator+(const Complex &);
	Complex operator-(const Complex &);
	Complex operator*(const Complex &);

};