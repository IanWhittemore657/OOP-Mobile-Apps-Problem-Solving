#pragma once
#include "myArray.h" // uses myArray,to use some functions inside the hashing class

class Hashing:public myArray
{

public:
	Hashing(int c);
	virtual double initialise() ;
	virtual bool isEmpty(){return flag = -1;}; // will return a flag if it is empty
	virtual double insert();
	virtual void showElement();
	virtual double deleteNumbers();
    virtual void clearAll();
	virtual void showAll();
	
	
	~Hashing(void);

private:
	int size;
	int flag;
	int *hashingPtr;
};

