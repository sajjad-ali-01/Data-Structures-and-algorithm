#include <iostream>
using namespace std;
class node{
	public:
		string name;
		int rollNO;
		node* next;
};
   node* newnode(int x,string s)
   {
   		node* temp = new node;
		   temp->rollNO = x;
		   temp->name = s;
		   temp->next = NULL;
		   return temp;	
   }
   void display(node* head,int p)
   {
   		int i = 1;
   		for(;i<=p;i++)
   		{
   			if(i == p)
   			{cout << head->rollNO << "\n" << head->name;}
   			else{
			   head = head->next;
				
			}
			
		}
   }
   node* middle(node* start,node* last)
   {
   		if(start == NULL)
   		{
   			return NULL;
		}
		node* slow = start;
		node* fast = start->next;
		while(fast!= last){
			fast=fast->next;
			if(fast!= last)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}
		return slow;
   }
   node* binarysearch(node* &head,int value)
   {
   		node* start = head;
   		node* last = NULL;
		  
		do{
			node* mid = middle(start,last);
			if(mid == NULL)
			{
				return NULL;
			}
			if(mid->rollNO == value){
				return mid;
			}
			else if(mid->rollNO < value)
			{
				start = mid->next;
			}
			else{
				last = mid;
			}
		}while(last==NULL || last!= start);
		return NULL;
   }
   
int main()
{
	node* head = newnode(1,"sajjad");
	head->next = newnode(2,"ali");
	head->next->next = newnode(3,"amanat");
	head->next->next->next = newnode(4,"ali");
	int value = 2;
	if((binarysearch(head,value)) == NULL)
	{  
		cout << "not present: \n";
	}
	else{
		display(head,value);
	}
}
