// ComplexHCIWeek3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "complex1.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	complex1 c1(1,2),c2(1,2),c3,c4,c5,c6;
	//c1 is first real/ imaginary same with c2 
	//c3 is add  // c4 is sub // c5 is multi // c6 is divide

	c1.print();
	c2.print();
	c3 = c1.add(c2);

	cout << "The addition is : ";
	c3.print() ;

	c4 = c1.sub(c2);
	cout << "The subtraction is : ";
	c4.print();

	c5 = c1.multi(c2);
	cout << "The multiple is : ";
	c5.print();

	c6 = c1.divide(c2);
	cout << "The division is : ";
	c6.print();



	


	return 0;
}

