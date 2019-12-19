#pragma once
#include "Node.h"; // will use Node class functions inside the singlelink list class
#include "Datastruct.h";// will use datastructure class functions inside the singlelink list class


class singleLinkList: public Node,public Datastruct // this class will call two classes in order to use both certain functions from both.
{
public:
	singleLinkList();

	virtual double initialise();
	virtual void create();
	virtual double insertLink();
    virtual void delnode() ;;
	virtual void display();
	virtual void deleteList();
	virtual void appendNode();

	~singleLinkList(void);
private:	
	singleLinkList *head;

};

