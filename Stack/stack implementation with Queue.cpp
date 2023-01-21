#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
class queue{
private:
	int rear;
	int front;
	int *arr;
	int size;
public:
	queue(int s)
	{
		rear = front = 0;
		arr =  new int[s];
		size = s;
	}
	void enQueue(int e)
	{
		if(rear == size-1)
		{
			cout << "queue is full: " << endl;
		}
		else{
			
			arr[rear] = e;
			rear++;
		}
	}
	int deQueue()
	{
		int x;
		if(rear == front)
		{
			cout << "queue is empty: " << endl;
			return -1;
		}
		else{
			
			x = arr[front];
			front++;
			if(front == rear)
			{
				rear = front = 0;
			}
			return x;
		}
	}
	int qfront()
	{
		if(rear == front)
		{
			cout << "queue is empty: " << endl;
			return -1;
		}
		else{
			return arr[front];
		}
	}
	bool isempty()
	{
		if(front == rear)
		{
			return true;
		}
		else{
			return false;
		}
	}
	bool isfull()
	{
		if(rear == size-1)
		{
			return true;
		}
		else{
			return false;
		}
	}
};


class stack{
	private:
		queue* q1 = new queue(100);
		queue* q2 = new queue(100);
		int size;
	public:
		stack()
		{
			size = 0; 
		}
		
		void push(int element)
		{
			q2->enQueue(element);
			size++;
			while(!q1->isempty())
			{
				q2->enQueue(q1->qfront());
				q1->deQueue();
			}
			queue* temp = new queue(100) ;
			temp = q1;
			q1 = q2;
			q2 = temp; 
		}
		
		int pop(){
			q1->deQueue();
			size--;
		}
		
		int peak(){
			return q1->qfront();
		}
		
		/*bool isempty()
		{
			if(top == -1)
			{
				return true;
			}
			else{
				return false;
			}
		}*/
};

int main()
{
	stack s;
	s.push(15);
	s.push(11);
	s.push(10);
	s.push(45);
	cout << s.peak() << endl;
	s.pop();
	cout << s.peak() << endl;
	s.pop();
	cout << s.peak() << endl;
	s.pop();
	cout << s.peak();
}
