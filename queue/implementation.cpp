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
		rear = front = -1;
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
			/*if(front == rear)
			{
				rear = front = 0;
			}*/
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

int main()
{
	int t;
	int size = 100;
	queue s(size);
//s.deQueue();
	s.enQueue(5);
	s.enQueue(10);
	s.enQueue(15);
	s.enQueue(20);
	t=s.deQueue();
	cout << t;
	
}
