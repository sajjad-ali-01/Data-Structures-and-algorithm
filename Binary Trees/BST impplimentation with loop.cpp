#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
	
	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

void createTree(Node* &root, int data)
{
	Node* newNode = new Node(data);
	if (root == NULL)
	{
		root = newNode;
		return;
	}

	Node* temp = root;
	while (true)
	{
		if (data < temp->data)
		{
			if (temp->left == NULL)
			{
				temp->left = newNode;
				return;
			}
			else
			{
				temp = temp->left;
			}
		}
		else
		{
			if (temp->right == NULL)
			{
				temp->right = newNode;
				return;
			}
			else
			{
				temp = temp->right;
			}
		}
	}
}

void inorder(Node* root)
{
	if (root == NULL)
	{
		return;
	}

	
	inorder(root->left);
	cout << root->data << "  ";
	inorder(root->right);
}

int main()
{
	Node* root = NULL;
	cout << "Enter the Size of tree:  ";
	int size;
	cin>>size;
	int data;
	for(int i = 0; i<=size; i++)
	{
		cin >> data;
		createTree(root, data);
	}
	inorder(root);
	return 0;
}
