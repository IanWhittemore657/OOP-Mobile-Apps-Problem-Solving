#pragma once

#include "myArray.h"; // will use myArray to use functions inside the queue class

class Stack:public myArray
{
public:
	Stack(int *arrayPtr); // will use a copy of the array from myArray
	virtual double initialise();
	virtual void push();
	virtual void pop() ;
	virtual bool isEmpty();

	~Stack(void);

private:
	int *StackPtr;
//	int size1;
	int top;
};

