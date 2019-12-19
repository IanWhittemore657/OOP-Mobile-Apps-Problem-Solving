#include "stdafx.h"
#include "complex1.h"
#include <iostream>
using namespace std;


complex1::complex1(double r, double i)
{
	real = r;
	imaginary = i;
}

complex1 complex1::add(complex1 c)
{
	int r = real + c.real;
	int i = imaginary + c.imaginary;
	complex1 Cc(r,i);
	return Cc;
}

complex1 complex1 ::sub(complex1 c)
{
	int r = real - c.real;
	int i = imaginary - c.imaginary;
	complex1 Cc(r,i);
	return Cc;
}

complex1 complex1 :: multi(complex1 c)
{
	int r = (real* c.real) - (imaginary * c.imaginary);
	int i = (imaginary * c.real) + (real * c.imaginary);
	complex1 Cc(r,i);
	return Cc;
}

complex1 complex1 :: divide(complex1 c)
{
	int r = ((real * c.real) + (imaginary * c.imaginary)) / ((c.real * c.real) + (c.imaginary * c.imaginary));
	int i = ((imaginary * c.real) - (real * c.imaginary)) / ((c.real * c.real) + (c.imaginary * c.imaginary));
	complex1 Cc(r,i);
	return Cc;
}


void complex1 :: print()
{
	cout << "Real :" << real << "\n Imaginary : " << imaginary << endl;
}

complex1::~complex1(void)
{
}
