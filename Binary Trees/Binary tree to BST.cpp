#include<iostream>
using namespace std;
 
class node
{
	public:
    	int data;
    	node* left, *right;
    node(int d)
    {
    	this->data = d;
    	this->left = NULL;
    	this->right = NULL;
	}
};
void bubbleSort(int arr[],int size){
	for(int i=0; i < size-1 ; i++){
		
		for(int j = 0; j < size-1-i;j++){
	
			if(arr[j] > arr[j+1])
			{
			
				swap(arr[j],arr[j+1]);
			}
		}
		}
	}
 
int data[100];
int i = 0;
 
	node* insert(node* root)
	{
	
		cout << "enter data!";
		int d;
		cin >> d;
		root = new node(d);
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
 
/* counts the number of nodes in a tree */
 
int count(node *n)
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
 
/*
 * Copies the nodes of Binary Tree in an array
 */
void binarytoarray(node * root, int data[], int *ptr)
{
    if(root != NULL)
    {
    binarytoarray(root->left, data, ptr);
    data[*ptr] = root->data;
    (*ptr)++;
    binarytoarray(root->right, data, ptr);
    }
}
 
void arraytobst(int *arr, node *root, int *index)
{
    if(root != NULL)
    {
        arraytobst(arr, root->left, index);
        root->data = arr[i++];
        arraytobst(arr, root->right, index);
    }
}
void inorder(node *root)
{
    if(root !=NULL)
    {
        inorder(root->left);
        cout << root->data << endl;
        inorder(root->right);
    }
}
 
/*
 * Converts binary tree to bst
 */
void binary_to_bst(node *root)
{
    int n,  j;
 
    if (root == NULL)
        return;
    n = count(root);
    j = 0;
    int c = count(root);
    binarytoarray(root, data, &j);
    bubbleSort(data,c);
    arraytobst(data, root, &j);
}
 
int main()
{
	node *root = NULL;
 	root = insert(root);
    cout << "Inorder traversal of Input Binary Tree is\n";
    inorder(root);
    binary_to_bst(root);
    cout << "\nInorder traversal of the converted Binary Search Tree is\n";
    inorder(root);
    return 0;
}
