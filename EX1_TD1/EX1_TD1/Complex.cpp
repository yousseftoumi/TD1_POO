#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::Complex(const Complex &C)
{
	this->re = C.re;
	this->im = C.im;
}

void Complex::afficher()
{
	if (this->im > 0)
		cout << "z = " << this->re << " + " << this->im << "i" << endl;
	else
		cout << "z = " << this->re << " - " << -this->im << "i" << endl;
}

double Complex::module()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

Complex Complex::conjugue()
{
	Complex conj;
	conj.re = this->re;
	conj.im = -this->im;
	return conj;
}

Complex Complex::operator+(const Complex  &z)
{
	Complex res;
	res.re = this->re + z.re;
	res.im = this->im + z.im;
	return res;
}

Complex Complex::operator-(const Complex  &z)
{
	Complex res;
	res.re = this->re - z.re;
	res.im = this->im - z.im;
	return res;
}

Complex Complex::operator*(const Complex  &z) {
	Complex res;
	res.re = (this->re*z.re) - (this->im*z.im);
	res.im = (this->re*z.im) + (this->im*z.re);
	return res;
}
