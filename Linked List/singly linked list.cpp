#include <iostream>
//#include <stdlib.h> 
using namespace std;
struct Node
{
	int data;
	Node* next;
};
class Link_List
{
private:
	Node *head;
	Node *tail;
public:
	Link_List()
	{
		head = NULL;
		tail = NULL;
	}

	void InsertFirst(int value)
	{
		Node* temp = new Node();
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void InsertLast(int value) {
		Node* temp = new Node();
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{

			tail->next = temp;
			tail = tail->next;
		}
	}
	
	void display()
	{
		Node* temp;
		if (head == NULL)
		{
			cout << "No Linked List Found!!!" << endl;
		}
		temp = head;
		int i = 1;
		while (temp != NULL)
		{
			cout << "\tElement  " << i << "  :  ";
			cout << temp->data << endl;
			temp = temp->next;
			i++;
		}
	}

	void InsertSpecific(int value, int pos)
	{
		Node* current;
		Node* previous = NULL;
		Node* temp = new Node();
		if (head == NULL)
		{
			cout << "No Linked List Found!!!" << endl;
		}
		else
		{
			current = head;
			for (int i = 1; i < pos; i++)
			{
				previous = current;
				current = current->next;
			}
			previous->next = temp;
			temp->data = value;
			temp->next = current;
		}
	}

	void Count__Length()
	{
		Node* current;
		int Count_Length = 1;
		if (head == NULL)
		{
			cout << "No Linked list found!!!"; return;
		}

		current = head;
		while (current->next != NULL)
		{
			Count_Length++;
			current = current->next;
		}
		cout << "There are " << Count_Length << " elements in Linked List" << endl;
	}

};

		

int main()
{
	Link_List O;
	int  Choice, a, b;

	while (true)
	{
		cout << "\t\t\\n------------Linked  List--------------\n\n\n";
			
		cout << "\tPress 1	To	Insert Node at Start." << endl;
		cout << "\tPress 2	To	Create a Node End." << endl;
		cout << "\tPress 3	To	Display a Linked List." << endl;
		cout << "\tPress 4	To	Insert Node at Specific Place." << endl;
		cout << "\tPress 5	To	Count Elements in Linked List." << endl;
		cout << "\tPress 6	to	Exit." << endl << endl;

		cout << "\tPlease Enter Your Choice : ";
		cin >> Choice;
		cout << endl;

		if (Choice == 1)
		{
			cout << "Enter the Number you want to Add in List at Start :";
			cin >> a;
			O.InsertFirst(a);
			
		}

		else if (Choice == 2)
		{
			cout << "Enter the Number you want to Add in List : ";
			cin >> a;
			O.InsertLast(a);
			
		}

		else if (Choice == 3)
		{
			O.display();
		}

		else if (Choice == 4)
		{
			cout << "Enter the Number you want to Add in List : ";
			cin >> a;
			cout << "Enter its Position in List: ";
			cin >> b;
			O.InsertSpecific(a, b);
		}

		else if (Choice == 5)
		{
			O.Count__Length();
		}

		else if (Choice == 6)
		{
			return 0;
		}

		else
		{
			cout << "Invalid Choice!!!" << endl;
		}

		system("pause");
		system("CLS");
	}

	return 0;
}


