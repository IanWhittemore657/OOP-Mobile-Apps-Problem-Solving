#pragma once
#include "Datastruct.h";
using namespace std;
#include <iostream>;
class myArray : public Datastruct
{
public:
	myArray(int size = 10);
	virtual double initialise() ;
	virtual double insert() ;
	virtual void showElement() ;
	virtual void showAll(){cout << " Array : " ;}
	virtual double deleteNumbers();
	virtual void clearAll();
	virtual bool isFull(){return 1;};
	virtual bool isEmpty();

	~myArray(void);

private:

	int s;
	int *arrayPtr; //after compile then deciding , thats why you need pointer
	
};

