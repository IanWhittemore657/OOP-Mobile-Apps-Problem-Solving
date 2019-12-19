#include "stdafx.h"
#include "Hashing.h"


Hashing::Hashing(int c) // the constuctor of the hashing class
{
	size = c > 0 ? c : 5; // will set the size of the hashing object and see if it is a certain size
	myArray::isFull() == 0; // this will call the array class to see if its full
	hashingPtr = new int[size]; // this will create an array with a certain size
}


Hashing::~Hashing(void)
{
}
