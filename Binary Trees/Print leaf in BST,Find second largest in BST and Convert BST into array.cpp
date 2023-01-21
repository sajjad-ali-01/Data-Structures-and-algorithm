#include<iostream>
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

Node* insert(Node* &root,int d){
	if(root == NULL)
	{
		root = new Node(d);
		return root;
	}
	else if(d < root->data)
	{
		root->left = insert(root->left,d);
	}
	else if(d > root->data)
	{
		root->right = insert(root->right,d);
	}
	return root;
}

void TakeInput(Node* &root)
{
	int d;
	cout << "enter data: " ;
	cin >> d;
	while (d != -1)
	{
		insert(root,d);
		cin >> d;
	}
}

int count(Node *n)
{
    int c = 1;
 
    if (n == NULL)
        return 0;
    else
    {
        c += count(n->left);
        c += count(n->right);
        return c;
    }
}

Node* Printleaf(Node* &root)
{
	if(root == NULL)
	{
		return NULL;
	}
	Printleaf(root->left);
	if(root->left == NULL && root->right == NULL)
	{
		cout << "\nleaf Node: " << root->data << endl;
	}
	else{
		cout << root->data << endl;
	}
	Printleaf(root->right);
	return root;
}

void inorder(Node* &root)
{
	int i = 0;
	if(root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << "  ";
	inorder(root->right);		
}
void BSTtoarray(Node * root, int data[], int *ptr)
{
    if(root != NULL)
    {
    BSTtoarray(root->left, data, ptr);
    data[*ptr] = root->data;
    (*ptr)++;
    BSTtoarray(root->right, data, ptr);
    }
}
void secondlargest(int arr[],Node* root)
{
	int largest = 0;
	int secondlargest = 0;
	
	for(int i = 0 ; i<count(root);i++)
	{
		if(arr[i] > largest)
		{
			secondlargest = largest;
			largest = arr[i];
		}
		else{
			if(arr[i] > secondlargest && arr[i] < largest)
			{
				secondlargest = arr[i];
			}
		}
	}
	cout << "\n" << secondlargest << "  ";
}

int mid(Node* root,int l,int arr[])
{
	
	int mid = (l+(count(root)))/2;
	return mid;
}

int main()
{	int arr[100];
	int i = 0;																	   	  
	Node* root = NULL;
	TakeInput(root);
	
	Printleaf(root);
	
	cout << "In odrder: ";
	inorder(root);
	
	BSTtoarray(root, arr, &i);
	cout << "\nsecond last: ";
	secondlargest(arr,root);
	cout << "\nmid value :";
	int j = mid(root,0,arr);
	cout << arr[j];
}
