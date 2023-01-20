#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int d)
		{
			this->data = d;
			this->next = NULL;
		}
};

class linked{
	public:
		
		void insert(node* &head,int d)
		{
			if (head == NULL){
			
				node* newnode = new node(d);
				head = newnode;
				newnode->next = head;
			}
			else{
				node* p = head;
				while(p->next != head)
				{
					p = p->next;
				}
				
				node* temp = new node(d);
				p->next = temp;
				temp->next = head;
				head = temp;
			}
		}
		void insertAtPosition(node* &head,int d,int p)
		{
			if(head == NULL)
			{
				node* newnode = new node(d);
				head = newnode;
				newnode->next = newnode;
			}
			else if(p == 1){
				insert(head,d);
			}
			else{
				node* current = head;
				node* prev = NULL;
					
				int i = 1;
				while(i < p)
				{
					prev = current;
					current = current->next;
					i++;
				
				}
				
				node* temp = new node(d);
				temp->next = current;
				prev->next = temp;
			}
			
		}
		
		void display(node* &head)
		{
			
			node* p = head;
			do
			{
			 	cout << p->data << "  ";
				p = p->next;
			}while(p != head );
			cout << endl;
		}
		
		void deleted(node* &head)
		{
			if (head == NULL){
			
				cout << "there is no node present in linked list: " << endl;
			}
			else{
				node* current = head;
				node* p = head;
				while(p->next != head)
				{
					p = p->next;
				}
				
				p->next = current->next;
				head = current->next;
				delete current;
			}
		}
		
		void deleteAtPosition(node* &head,int p)
		{
			if(head == NULL)
			{
				cout << "there is no node present in linked list: " << endl;
			}
			else if(p == 1){
				deleted(head);
			}
			else{
				node* current = head;
				node* prev = NULL;
				int i = 1;
				while(i < p)
				{
					prev = current;
					current = current->next;
					i++;
				
				}
				
				prev->next = current->next;
				delete current;
			}
			
		}
			
};

int main()
{
	linked s;
	node* head = NULL;
	
	s.insert(head,9);
	s.display(head);
	s.insert(head,8);
	s.insert(head,7);
	s.insert(head,6);
	s.insertAtPosition(head,40,3);
	//s.display(head);
	//s.deleted(head);
	s.deleteAtPosition(head,3);
	s.display(head);
	
}
