#pragma once
class complex1
{
public:
	complex1(double r = 0,double i = 0);
	complex1 add(complex1);
	complex1 sub(complex1);
	complex1 multi(complex1);
	complex1 divide(complex1);

	void print();


	~complex1(void);
private:
	double real;
	double imaginary;
};

