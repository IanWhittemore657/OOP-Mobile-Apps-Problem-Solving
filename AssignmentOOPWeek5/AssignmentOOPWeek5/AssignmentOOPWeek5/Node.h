#pragma once

//this is an extra class that used for single and double link list , and is seperate from that of the datastructer, 
//The reason for using a new class seperate from datastructure is so that it can be its own sub class and support the single and double link list
//By doing this it removes the need to add an individual node function in each class.

class Node
{
public:

	Node();
	Node *next; 
	Node *previous;
	Node *left;
	Node *right;


	~Node(void);
private:
	
};

 