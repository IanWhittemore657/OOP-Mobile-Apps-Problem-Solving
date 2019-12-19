#pragma once
#include "Node.h";  // using the functions of the node to operate within the binary tree

class BinaryTree:public Node
{
public:
	BinaryTree();

	virtual double insert();
	virtual void delnode();
	virtual void deleteList();
	
	~BinaryTree(void);

private:
	BinaryTree *root;
};

