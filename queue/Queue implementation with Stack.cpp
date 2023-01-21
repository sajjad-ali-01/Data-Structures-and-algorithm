#include <iostream>
using namespace std;
class Stack{
	private:
		int size;
		int *arr;
		int top;
	public:
		Stack(int s)
		{
			arr = new int[size];
			size = s;
			top = -1; 
		}
		
		void push(int element)
		{
			if(top == size-1)
			{
				cout << "No space available in stack: " << endl;
			}
			else{
				
				//top++;
				arr[++top] = element;
			}
		}
		
		int pop(){
			if(top == -1)
			{
				cout << "stack under flow: " << endl;
				return -1; 
			}
			else{
				return arr[top--];
				
			}
		}
		
		int peak(){
			if(top == -1)
			{
				cout << "stack is empty" << endl;
				return -1;
			}
			else{
				return arr[top];
			}
		}
		
		bool isempty()
		{
			if(top == -1)
			{
				return true;
			}
			else{
				return false;
			}
		}
};
class queuewithstack{
	private:
		
	public:
		Stack* st1 = new Stack(6);
		void enqueue(int a)
		{
			st1->push(a);
		}
		int dequeue()
		{
			int value = -1;
			if(st1->isempty())
			{
				cout << "queue is empty: ";
				return value;
			}
			value = st1->peak();  
			st1->pop();
			if(st1->isempty()){
				return value;
			}
			int item = dequeue();
			st1->push(value);
			return item;
			 
		}
		bool empty()
		{
			if(st1->isempty())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	queuewithstack q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
}
