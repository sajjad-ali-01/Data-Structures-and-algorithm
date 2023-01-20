#include <iostream>
using namespace std;
class stack{
	private:
		int size;
		int *arr;
		int top;
	public:
		stack(int s)
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

		
int main()
{
	stack* s = new stack(6);
	
	s->push(22);
	s->push(12);
	s->push(34);
	s->push(11);
	s->push(10);
	s->push(45);
	cout << s->peak() << endl;
	s->pop();
	cout << s->peak() << endl;
	s->pop();
	cout << s->peak() << endl;

	
}
