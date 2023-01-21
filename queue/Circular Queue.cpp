#include <iostream>
using namespace std;
class Queue{
	private:
		int size;
		int rear;
		int front;
		int *arr;
	public:
		Queue(int s)
		{
			arr = new int[s];
			rear = front = -1;
			size = s;
		}
		void enQueue(int element)
		{
			if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
				cout << "queue is full: \n";
			}
			else if(front == -1)
			{
				rear = front = 0;
				arr[rear] = element;
				
			}
			else if(rear == size-1 && front!= 0)
			{
				rear = 0;
				arr[rear] = element;
			}
			else{
				rear++;
				arr[rear] = element;
			}
		}
		int deQueue(){
			int ans = 0;
			if(front == -1)
			{
				cout << "queue is empty: \n";
				return -1;
			}
			else if(front == size-1)
			{
				ans = arr[front];
				front = 0 ;
			}
			else {
				ans = arr[front];
				front++;
			}
			return ans;
		}
};
int main()
{
	int size = 5;
	Queue s(size);
	//s.deQueue();
	s.enQueue(10);
	s.enQueue(20);
	s.enQueue(30);
	s.enQueue(40);
	s.enQueue(50);
	//s.enQueue(60);
	s.deQueue();
	s.enQueue(60);
	s.deQueue();
	s.deQueue();
	s.deQueue();
	s.deQueue();
	s.deQueue();
	s.deQueue();
	s.deQueue();
	
	
	
}
