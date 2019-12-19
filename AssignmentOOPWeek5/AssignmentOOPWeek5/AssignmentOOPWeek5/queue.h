#pragma once

#include "myArray.h"; // will use myArray to call certain functions inside the queue class

class queue:public myArray
{
public:
	queue(int *arrayPtr); // will call the array from myArray to use it in queue
	virtual double initialise();
	virtual bool isFull();
	virtual bool isEmpty();
	virtual void showElement();
	virtual void showAll();
	virtual void clearAll();
	~queue(void);

private:
	int *queuePtr;
};

