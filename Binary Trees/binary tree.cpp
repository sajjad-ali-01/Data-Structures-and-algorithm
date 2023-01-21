#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int d)
	{
		this->data = d;
		this->left = NULL;
		this->right = NULL; 
	}
};

class Tree
{
public:
	Node* insert(Node* root)
	{
	
		cout << "enter data!";
		int d;
		cin >> d;
		root = new Node(d);
		if(d == -1)
		{
			return NULL;
		}
		else{
		
		cout << "enter data for left of: " << d <<  endl;
		root->left = insert(root->left);
		cout << "enter data for right of: " << d << endl;
		root->right = insert(root->right);
		return root;
	}
	}
	Node* Inorder(Node* root)
	{
		if(root == NULL)
		{
			return NULL;
		}
		Inorder(root->left);
		cout << root->data << "  ";
		Inorder(root->right);
		
		return root;
	}
	
	Node* preOrder(Node* root)
	{
		if(root == NULL)
		{
			return NULL;
		}
		cout << root->data << "  ";
		preOrder(root->left);
		preOrder(root->right);
		
		return root;
	}
	Node* PostOrder(Node* root)
	{
		if(root == NULL)
		{
			return NULL;
		}
		PostOrder(root->left);
		PostOrder(root->right);
		cout << root->data << "  ";
		
		return root;
	}

	
};

int main()
{
	Node* root = NULL;
	Tree t;
	root = t.insert(root);
	cout << "InOrder" << endl;
	t.Inorder(root);
	cout << "\nPreOrder" << endl;
	t.preOrder(root);
	cout << "\nPost Order" << endl;
	t.PostOrder(root);
	
}
