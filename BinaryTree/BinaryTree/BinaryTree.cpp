// BinaryTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>  
using namespace std;

struct treeNode
{
  int key_value;
  struct treeNode *left;
  struct treeNode *right;
};

struct treeNode *root=NULL;

treeNode *insert(int key, treeNode *root);
bool search(int key, treeNode *root);
void inorder(treeNode *temp);
void preorder(treeNode *temp);
void postorder(treeNode *temp);
void GetNodeInfo(int key, treeNode *root);
treeNode *FindMin(treeNode *root);
treeNode* Delete( treeNode *root, int key_value);

int _tmain(int argc, _TCHAR* argv[])
{
	int keySearch;
	int getInfoKey;
	
	root = NULL;
	root = insert(8,root);
	root = insert(3,root);
	root = insert(10,root);
	root = insert(1,root);
	root = insert(6,root);
	root = insert(14,root);
	root = insert(13,root);
	root = insert(4,root);
	root = insert(7,root);

	treeNode *Trav;
	Trav=root;
	int option = 0;

	do
	{

	 cout << "Please choose the following: \n 1 : search \n 2 : Show orders \n 3 : Get node info \n 4 : Delete a node \n 5 : Check if balanced \n 6 Exit:  " << endl;
	
	 switch(option)
	 {
	 case 1:
		 {
		    cout << "Please enter a number to search " << endl;
			cin >> keySearch;
			if(search(keySearch,root))
			{
				cout << "value found " << endl;
			}
			else
			{
				cout << "Value not found " << endl;
			}
		 }
		 break;

	 case 2:
		 {
		    cout <<"inorder   :";
			inorder(Trav); 
			cout << endl;

			cout <<"preorder  :";
			preorder(Trav); 
			cout << endl;

			cout <<"postorder :";
			postorder(Trav); 
			cout << endl;
		 }
		 break;
		 
	 case 3:
		 {
			cout << "Please enter number to get info" << endl;
			cin >> getInfoKey;
			GetNodeInfo (getInfoKey,root);
		 }
		 break;

	 case 4:
		 {
		    int num;
			cout << "Please enter a node to delete" << endl;

			cin >> num;

			root = Delete(root,num);
	
		 }
		 break;

	 case 5:
		 {
			cout << " Is the tree balanced : " + isBalanced(root) << endl;
		 }
		 break;

	 case 6:
		 {
			 exit(0);
		 }
		 break;

	 default:
		 break;
	 }

	}while(option != 6);
	
	

	return 0;

}

treeNode *insert(int key, treeNode *root)
{
	treeNode *leaf, *ptr, *prevptr=NULL;
	leaf = new treeNode;
    	leaf->key_value = key;
    	leaf->left  = NULL;    
    	leaf->right = NULL;  

	if( root == NULL )
        		root = leaf;
    	else
	{
		ptr=root;
		while (ptr!=NULL)
		{
			if (key < ptr->key_value)
			{prevptr=ptr; ptr=ptr->left;  }

			else
			{   prevptr=ptr; ptr=ptr->right;  }
		}
		if (key< prevptr->key_value) prevptr->left = leaf;
		else prevptr->right = leaf;
	}
	return root;
}

bool search(int key, treeNode *root)
{
	treeNode *ptr;
	bool found=false;
    	if( root != NULL )
    	{
		ptr = root;
		while (ptr!=NULL && !found)
		{
			if(key== ptr->key_value)
			{found=true; break;}
			else
			{
				if (key < ptr->key_value)
					ptr=ptr->left;
				else
					ptr=ptr->right;
			}
		}
	}
	return found;
}
void inorder(treeNode *temp) 
{
   if (temp != NULL) 
   {
      	inorder(temp->left);
  	cout << temp->key_value << " ";
  	inorder(temp->right);
   }
}

void preorder(treeNode *temp) 
{
   if (temp != NULL) 
   {
     	cout << temp->key_value << " ";
      	preorder(temp->left);
  	preorder(temp->right);
   }
}

void postorder(treeNode *temp) 
{
   if (temp != NULL) 
   {
      	postorder(temp->left);
  	postorder(temp->right);
  	cout << temp->key_value << " ";

   }
}

void GetNodeInfo(int key,treeNode *root)
{
	treeNode *ptr, *prevptr = NULL;

	if(root == NULL)
	{
		cout << "Tree is empty";
	}
	else
	{
		ptr = root;
		while(ptr != NULL)
		{
			if(key == ptr -> key_value)
			{
				break;
			}
			else if(key < ptr -> key_value)
			{
				prevptr = ptr;
				ptr= ptr -> left;
			}
			else
			{
				prevptr = ptr;
				ptr = ptr -> right;
			}
		}
		if(prevptr == NULL)
		{
			cout << "Your number is the root" << endl;
		}
		else
		{
			cout << "Parent = " << prevptr -> key_value << endl;
		}

		if(ptr -> left == NULL && ptr -> right == NULL)
		{
			cout << "Your number is the leaf (it has no children)" << endl;
		}

		if(ptr -> left != NULL)
		{
			cout << "Left Child = " << ptr -> left -> key_value << endl;
		}
		else
		{
			cout << "No left child " << endl;
		}

		if(ptr -> right != NULL)
		{
			cout << "Right Child = " << ptr -> right -> key_value << endl;

		}
		else 
		{
			cout << "No right child" << endl;
		}
	}

}

treeNode *FindMin(treeNode *root)
{
	 treeNode *temp = root;
	 while (temp->left != NULL)
	 {
		 temp = temp->left;
	 }
	 return temp;
 }

 treeNode* Delete( treeNode *root, int key_value)
 {
  if (root == NULL) 
  {
     return NULL;
  }

  if (key_value > root-> key_value) 
  {  
	 
      root->left = Delete(root->left, key_value);
  } 

  else if (key_value > root->key_value) 
  { 
	  /
      root->right = Delete(root->right, key_value);
  } 

  else 
  {
     // case 1: no children
     if (root->left == NULL && root->right == NULL)
	 {
        delete(root);
        root = NULL;
     }
     // case 2: one child (right)
     else if (root->left == NULL) 
	 {
         treeNode *temp = root;
        root = root->right;
        delete temp;
     }
     // case 3: one child (left)
     else if (root->right == NULL)
	 {
        treeNode *temp = root; 
        root = root->left;
        delete temp;
     }
     // case 4: two children
     else
	 {
        treeNode *temp = FindMin(root->right); 
        root->key_value = temp->key_value;
        root->right = Delete(root->right, temp->key_value);
     }
  }
  return root; 
}

 int getHeight(treeNode* root) 
{
    if(root == NULL)
	{
		return 0;
	}
	return 1 + max(getHeight(root->left), getHeight(root->right));
}
 bool isBalanced(treeNode* root) 
 {
        if (root == NULL)
		{
            return true;
        }
        int left = getHeight(root->left);
        int right = getHeight(root->right);

        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
  }

