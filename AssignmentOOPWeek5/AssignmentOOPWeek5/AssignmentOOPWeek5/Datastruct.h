#pragma once

class Datastruct // the main class of the program
{

public:
	Datastruct(void);
	virtual double initialise() const = 0; // will be used to initialise the classes
	virtual double insert() const = 0; // will be to insert data
	virtual void showElement() ; // show a specific element of the data
	virtual void showAll(); // used to show all the data in the object
	virtual void clearAll(); //used to clar all data and settings

	//for nodes / link list 
	virtual void create() const = 0;   // to create variables
	virtual double insertLink() const = 0; // to insert into the link list
    virtual void delnode(); // delete a specific node
	virtual void display(); // display the link list
	virtual void deleteList(); // delete the linked list
	virtual void appendNode() const = 0; // used to append a node 
	


	virtual void deleteStructer(); // used to delete the structer of the class
	virtual double deleteNumbers(); // used to delete specific numbers 
	virtual void push(); // used in the queue class
	virtual void pop(); // used in the queue class
	virtual bool isFull(); // checks to see if class object is full
	virtual bool isEmpty(); // used to check if class object is full

	~Datastruct(void);


};

