#pragma once
#include "singleLinkList.h"; // will use the singlelink list class to use some functions inside the doublelink list
class doubleLinkedList:public singleLinkList
{
public:
	doubleLinkedList();
	virtual double initialise();
	virtual void create();
	virtual double insertLink();
    virtual void delnode();
	virtual void display();
	virtual void deleteList();
	virtual void appendNode();

	~doubleLinkedList(void);
private:
	doubleLinkedList *head;
};

