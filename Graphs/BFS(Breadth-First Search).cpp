#include <iostream>
using namespace std;
int visited[7] = {0,0,0,0,0,0,0}; 
int arr[7][7] = {
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0}, 
        {0,0,0,0,0,0,0} 
    };
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
			return x;
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
};

void BFS(int v)
{
	queue q(1);
	cout << v << " ";
    visited[v] = 1;
    q.enQueue(v); 
    while (!q.isempty())
    {
        int node = q.deQueue();
        for (int j = 0; j < 7; j++)
        {
            if(arr[node][j] ==1 && visited[j] == 0){
                cout <<  j << " ";
                visited[j] = 1;
                q.enQueue(j);
            }
        }
    }
}



int main(){  

    int node; 
	int v = 0;
	cout << "enter matrix: " << endl;
   	for(int i;i < 7;i++){
	   
   		for(int j = 0;j < 7;j++)
			{
   				cin	>> arr[i][j];
			}
	}
	cout << "after traversal: " << endl;
	BFS(v);
        return 0;
}
