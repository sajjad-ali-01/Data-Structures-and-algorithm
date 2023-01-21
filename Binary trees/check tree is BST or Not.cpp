#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};


Node* insert(Node* &root,int d)
{
	
	if(root == NULL)
	{
		root = new Node(d);
		return root;
	}
	if (d > root->data )
	{
		root->right = insert(root->right,d);
	}
	else{
		root->left = insert(root->left,d);
	}
	return root;
	
}

		        
void Takeinput(Node* &root)
{
	int size = 1;
	int d;
	cin >> d;
	while (d != -1)
	{
		insert(root,d);
		cin >> d;
		size++;
	}
}
Node* Inorder(Node* &root)
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
int getMin(Node* root)
{
    Node* temp = root;
    while(temp->left != NULL)
        temp = temp->left;
    return temp->data;
}

int getMax(Node* root)
{
    Node* temp = root;
    while(temp->right != NULL)
        temp = temp->right;
    return temp->data;
}

bool isBST(Node* root)
{
    if (root == NULL)
        return true;
    
    int max_left = getMax(root->left)
    int min_right = getMin(root->right)
    
    if (max_left > root.val || min_right < root.val)
        return False
    
    if (isBST(root.left) && isBST(root.right))
        return True
    return False    
}	
int main()
{
	Node* root = NULL;
	cout << "enter data for BST: " << endl;
	Takeinput(root);
	
	cout << "In odrder: " << endl;
	Inorder(root);
	if(isBST())
	{
		cout << "BST" << endl;
	}
	else{
		cout << "not" << endl;
	}
}                  
